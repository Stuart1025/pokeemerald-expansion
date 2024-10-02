#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Recombinant changes the type of the user only once per switch in")
{
    GIVEN {
        PLAYER(SPECIES_REGIROCK);
        OPPONENT(SPECIES_MEW) { Ability(ABILITY_RECOMBINANT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SURF); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); }
        TURN { MOVE(opponent, MOVE_SURF); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_RECOMBINANT);
        MESSAGE("Foe Mew transformed into the Water type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponent);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_RECOMBINANT);
            MESSAGE("Foe Mew transformed into the Normal type!");
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ABILITY_POPUP(opponent, ABILITY_RECOMBINANT);
        MESSAGE("Foe Mew transformed into the Water type!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponent);
    }
}
