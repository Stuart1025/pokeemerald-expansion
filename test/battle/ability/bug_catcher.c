#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Bug Catcher negates damage from Bug-type moves")
{
    GIVEN {
        PLAYER(SPECIES_BELLSPROUT) { Ability(ABILITY_BUG_CATCHER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STRUGGLE_BUG); }
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("Bug Catcher negates effects from Bug-type moves")
{
    GIVEN {
        PLAYER(SPECIES_BELLSPROUT) { Ability(ABILITY_BUG_CATCHER); }
        OPPONENT(SPECIES_CATERPIE);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STRING_SHOT); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Bug Catcher increases Attack by one stage when hit by a Bug-type move")
{
    GIVEN {
        PLAYER(SPECIES_BELLSPROUT) { Ability(ABILITY_BUG_CATCHER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STRUGGLE_BUG); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_BUG_CATCHER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Bellsprout's Attack rose!");
    }
}

SINGLE_BATTLE_TEST("Bug Catcher does not increase Attack if already maxed")
{
    GIVEN {
        PLAYER(SPECIES_BELLSPROUT) { Ability(ABILITY_BUG_CATCHER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BELLY_DRUM); MOVE(opponent, MOVE_STRUGGLE_BUG); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_BUG_CATCHER);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Bellsprout's Attack rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Bug Catcher blocks multi-hit bug type moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_PIN_MISSILE].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_BELLSPROUT) { Ability(ABILITY_BUG_CATCHER); }
        OPPONENT(SPECIES_HERACROSS) { Ability(ABILITY_SKILL_LINK); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_PIN_MISSILE); }
    } SCENE {
        MESSAGE("Foe Heracross used Pin MIssile!");
        ABILITY_POPUP(player, ABILITY_BUG_CATCHER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Bellsprout's Attack rose!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_PIN_MISSILE, opponent);
            HP_BAR(player);
            MESSAGE("Hit 5 time(s)!");
        }
    }
}
