#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Evoboost increases same-type attack bonus from x1.5 to x2", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_SYNCHRONIZE; }
    PARAMETRIZE { ability = ABILITY_EVOBOOST; }
    GIVEN {
        PLAYER(SPECIES_ESPEON) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSION); }
    } SCENE {
        MESSAGE("Espeon used Confusion!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSION, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // The jump from 1.5x STAB to 2.0x STAB is a 1.33x boost.
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.33), results[1].damage);
    }
}
