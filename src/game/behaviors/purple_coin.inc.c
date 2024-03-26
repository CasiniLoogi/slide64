
/**
 * This file contains the initialization and behavior for purple coins.
 * Behavior controls audio, as well as interacting with
 * the course's red coin star.
 */

/**
 * Purple coin's hitbox details.
 */
static struct ObjectHitbox sPurpleCoinHitbox = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 100,
    /* height:            */ 64,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};

/**
 * Purple coin initialization function. Sets the coin's hitbox and parent object.
 */
void bhv_purple_coin_init(void) {
    // Set the purple coins to have a parent of the closest red coin star.
    struct Object *hiddenRedCoinStar = cur_obj_nearest_object_with_behavior(bhvHiddenRedCoinStar);
    if (hiddenRedCoinStar != NULL) {
        o->parentObj = hiddenRedCoinStar;
    } else if ((hiddenRedCoinStar = cur_obj_nearest_object_with_behavior(bhvBowserCourseRedCoinStar)) != NULL) {
        o->parentObj = hiddenRedCoinStar;
    } else {
        o->parentObj = NULL;
    }

    obj_set_hitbox(o, &sPurpleCoinHitbox);
}

/**
 * Main behavior for purple coins. Primarily controls coin collection noise
 */
void bhv_purple_coin_loop(void) {
    // If Mario interacted with the object...
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        // ...and there is a red coin star in the level...
        if (o->parentObj != NULL) {
            // ...increment the star's counter.
            o->parentObj->oHiddenStarTriggerCounter++;
        }

        coin_collected();
        create_sound_spawner(SOUND_GENERAL_RED_COIN);
        // Despawn the coin.
        o->oInteractStatus = INT_STATUS_NONE;
    }
}
