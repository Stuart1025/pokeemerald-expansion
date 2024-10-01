#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Frigid Body inflicts frostbite on contact")
{
    u32 move;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        ASSUME(!gMovesInfo[MOVE_SWIFT].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARTICUNO) { Ability(ABILITY_FRIGID_BODY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (gMovesInfo[move].makesContact) {
            ABILITY_POPUP(opponent, ABILITY_FRIGID_BODY);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, player);
            MESSAGE("Foe Articuno's Frigid Body gave Wobbuffet frostbite!");
            STATUS_ICON(player, frostbite: TRUE);
        } else {
            NONE_OF {
                ABILITY_POPUP(opponent, ABILITY_FRIGID_BODY);
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, player);
                MESSAGE("Foe Articuno's Frigid Body gave Wobbuffet frostbite!");
                STATUS_ICON(player, frostbite: TRUE);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Frigid Body triggers 30% of the time")
{
    PASSES_RANDOMLY(3, 10, RNG_FRIGID_BODY);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_4);
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_ARTICUNO) { Ability(ABILITY_FRIGID_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_FRIGID_BODY);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, player);
        MESSAGE("Foe Articuno's Frigid Body gave Wobbuffet frostbite!");
        STATUS_ICON(player, frostbite: TRUE);
    }
}