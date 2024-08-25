#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].type == TYPE_NORMAL);
    ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
}

SINGLE_BATTLE_TEST("Dragon Skin turns a normal type move into Dragon")
{
    GIVEN {
        PLAYER(SPECIES_AXEW);
        OPPONENT(SPECIES_ARCANINE) { Ability(ABILITY_DRAGON_SKIN); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_EXTREME_SPEED); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXTREME_SPEED, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Dragon Skin can not turn certain moves into Dragon type moves")
{
    u32 move;

    PARAMETRIZE { move = MOVE_HIDDEN_POWER; }
    PARAMETRIZE { move = MOVE_WEATHER_BALL; }
    PARAMETRIZE { move = MOVE_MULTI_ATTACK; }

    ASSUME(gMovesInfo[MOVE_HIDDEN_POWER].effect == EFFECT_HIDDEN_POWER);
    ASSUME(gMovesInfo[MOVE_WEATHER_BALL].effect == EFFECT_WEATHER_BALL);
    ASSUME(gMovesInfo[MOVE_MULTI_ATTACK].effect == EFFECT_CHANGE_TYPE_ON_ITEM);
    GIVEN {
        PLAYER(SPECIES_AXEW);
        OPPONENT(SPECIES_ARCANINE) { Ability(ABILITY_DRAGON_SKIN); }
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

TO_DO_BATTLE_TEST("Dragon Skin boosts power of affected moves by 20% (Gen7+)");
TO_DO_BATTLE_TEST("Dragon Skin boosts power of affected moves by 30% (Gen6)");
TO_DO_BATTLE_TEST("(DYNAMAX) Dragon Skin turns Max Strike into Max Wyrmwind when not used by Gigantamax Duraludon");
//TO_DO_BATTLE_TEST("(DYNAMAX) Galvanize doesn't turn Max Strike into Max Lightning when used by Gigantamax Pikachu/Toxtricity, instead becoming G-Max Volt Crash/Stun Shock"); // Marked in Bulbapedia as "needs research", so this assumes that it behaves like Pixilate.
