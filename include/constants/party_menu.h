#ifndef GUARD_CONSTANTS_PARTY_MENU_H
#define GUARD_CONSTANTS_PARTY_MENU_H

#define PARTY_NOTHING_CHOSEN 0xFF

#define AILMENT_NONE  0
#define AILMENT_PSN   1
#define AILMENT_PRZ   2
#define AILMENT_SLP   3
#define AILMENT_FRZ   4
#define AILMENT_BRN   5
#define AILMENT_PKRS  6
#define AILMENT_FNT   7
#define AILMENT_FRB   8

#define PARTY_LAYOUT_SINGLE          0
#define PARTY_LAYOUT_DOUBLE          1
#define PARTY_LAYOUT_MULTI           2
#define PARTY_LAYOUT_MULTI_SHOWCASE  3  // The layout during the screen that appears just before a multi battle
#define PARTY_LAYOUT_COUNT           4
#define KEEP_PARTY_LAYOUT            0xFF

#define PARTY_MENU_TYPE_FIELD                     0
#define PARTY_MENU_TYPE_IN_BATTLE                 1
#define PARTY_MENU_TYPE_CONTEST                   2
#define PARTY_MENU_TYPE_CHOOSE_MON                3
#define PARTY_MENU_TYPE_CHOOSE_HALF               4  // multi battles, eReader battles, and some battle facilities
#define PARTY_MENU_TYPE_MULTI_SHOWCASE            5
#define PARTY_MENU_TYPE_DAYCARE                   6
#define PARTY_MENU_TYPE_MOVE_RELEARNER            7
#define PARTY_MENU_TYPE_UNION_ROOM_REGISTER       8  // trading board
#define PARTY_MENU_TYPE_UNION_ROOM_TRADE          9  // trading board
#define PARTY_MENU_TYPE_SPIN_TRADE                10 // Unused beta for Gen IV's Spin Trade
#define PARTY_MENU_TYPE_MINIGAME                  11
#define PARTY_MENU_TYPE_STORE_PYRAMID_HELD_ITEMS  12

#define PARTY_ACTION_CHOOSE_MON         0
#define PARTY_ACTION_SEND_OUT           1
#define PARTY_ACTION_CANT_SWITCH        2
#define PARTY_ACTION_USE_ITEM           3
#define PARTY_ACTION_ABILITY_PREVENTS   4
#define PARTY_ACTION_GIVE_ITEM          5
#define PARTY_ACTION_GIVE_PC_ITEM       6   // Unused. Not possible to give non-mail items directly from PC
#define PARTY_ACTION_GIVE_MAILBOX_MAIL  7
#define PARTY_ACTION_SWITCH             8
#define PARTY_ACTION_SWITCHING          9
#define PARTY_ACTION_SOFTBOILED         10
#define PARTY_ACTION_CHOOSE_AND_CLOSE   11
#define PARTY_ACTION_MOVE_TUTOR         12
#define PARTY_ACTION_MINIGAME           13
#define PARTY_ACTION_REUSABLE_ITEM      14  // Unused. The only reusable items are handled separately
#define PARTY_ACTION_CHOOSE_FAINTED_MON 15

// IDs for DisplayPartyMenuStdMessage, to display the message at the bottom of the party menu
#define PARTY_MSG_CHOOSE_MON                0
#define PARTY_MSG_CHOOSE_MON_OR_CANCEL      1
#define PARTY_MSG_CHOOSE_MON_AND_CONFIRM    2
#define PARTY_MSG_MOVE_TO_WHERE             3
#define PARTY_MSG_TEACH_WHICH_MON           4
#define PARTY_MSG_USE_ON_WHICH_MON          5
#define PARTY_MSG_GIVE_TO_WHICH_MON         6
#define PARTY_MSG_NOTHING_TO_CUT            7
#define PARTY_MSG_CANT_SURF_HERE            8
#define PARTY_MSG_ALREADY_SURFING           9
#define PARTY_MSG_CURRENT_TOO_FAST          10
#define PARTY_MSG_ENJOY_CYCLING             11
#define PARTY_MSG_ALREADY_IN_USE            12
#define PARTY_MSG_CANT_USE_HERE             13
#define PARTY_MSG_NO_MON_FOR_BATTLE         14
#define PARTY_MSG_CHOOSE_MON_2              15
#define PARTY_MSG_NOT_ENOUGH_HP             16
#define PARTY_MSG_X_MONS_ARE_NEEDED         17
#define PARTY_MSG_MONS_CANT_BE_SAME         18
#define PARTY_MSG_NO_SAME_HOLD_ITEMS        19
#define PARTY_MSG_UNUSED                    20
#define PARTY_MSG_DO_WHAT_WITH_MON          21
#define PARTY_MSG_RESTORE_WHICH_MOVE        22
#define PARTY_MSG_BOOST_PP_WHICH_MOVE       23
#define PARTY_MSG_DO_WHAT_WITH_ITEM         24
#define PARTY_MSG_DO_WHAT_WITH_MAIL         25
#define PARTY_MSG_ALREADY_HOLDING_ONE       26
#define PARTY_MSG_WHICH_APPLIANCE           27
#define PARTY_MSG_CHOOSE_SECOND_FUSION      28
#define PARTY_MSG_NONE                      127

// IDs for DisplayPartyPokemonDescriptionText, to display a message in the party pokemon's box
#define PARTYBOX_DESC_NO_USE      0
#define PARTYBOX_DESC_ABLE_3      1
#define PARTYBOX_DESC_FIRST       2
#define PARTYBOX_DESC_SECOND      3
#define PARTYBOX_DESC_THIRD       4
#define PARTYBOX_DESC_FOURTH      5
#define PARTYBOX_DESC_ABLE        6
#define PARTYBOX_DESC_NOT_ABLE    7
#define PARTYBOX_DESC_ABLE_2      8
#define PARTYBOX_DESC_NOT_ABLE_2  9
#define PARTYBOX_DESC_LEARNED     10
#define PARTYBOX_DESC_HAVE        11
#define PARTYBOX_DESC_DONT_HAVE   12

#define SELECTWINDOW_ACTIONS     0
#define SELECTWINDOW_ITEM        1
#define SELECTWINDOW_MAIL        2
#define SELECTWINDOW_MOVES       3
#define SELECTWINDOW_CATALOG     4
#define SELECTWINDOW_ZYGARDECUBE 5

#define TUTOR_MOVE_ACID_SPRAY          0
#define TUTOR_MOVE_AGILITY             1
#define TUTOR_MOVE_AIR_CUTTER          2
#define TUTOR_MOVE_AIR_SLASH           3
#define TUTOR_MOVE_ALLURING_VOICE      4
#define TUTOR_MOVE_AMNESIA             5
#define TUTOR_MOVE_AQUA_RING           6
#define TUTOR_MOVE_AURA_SPHERE         7
#define TUTOR_MOVE_AVALANCHE           8
#define TUTOR_MOVE_BATON_PASS          9
#define TUTOR_MOVE_BLAST_BURN         10
#define TUTOR_MOVE_BLAZE_KICK         11
#define TUTOR_MOVE_BODY_PRESS         12
#define TUTOR_MOVE_BODY_SLAM          13
#define TUTOR_MOVE_BOUNCE             14
#define TUTOR_MOVE_BRAVE_BIRD         15
#define TUTOR_MOVE_BREAKING_SWIPE     16
#define TUTOR_MOVE_BRINE              17
#define TUTOR_MOVE_BRUTAL_SWING       18
#define TUTOR_MOVE_BUG_BITE           19
#define TUTOR_MOVE_BUG_BUZZ           20
#define TUTOR_MOVE_BURNING_JEALOUSY   21
#define TUTOR_MOVE_CHARM              22
#define TUTOR_MOVE_CHILLING_WATER     23
#define TUTOR_MOVE_CLOSE_COMBAT       24
#define TUTOR_MOVE_COACHING           25
#define TUTOR_MOVE_CONFUSE_RAY        26
#define TUTOR_MOVE_COSMIC_POWER       27
#define TUTOR_MOVE_COVET              28
#define TUTOR_MOVE_CROSS_POISON       29
#define TUTOR_MOVE_CRUNCH             30
#define TUTOR_MOVE_DARKEST_LARIAT     31
#define TUTOR_MOVE_DISARMING_VOICE    32
#define TUTOR_MOVE_DOUBLE_EDGE        33
#define TUTOR_MOVE_DRACO_METEOR       34
#define TUTOR_MOVE_DRAGON_CHEER       35
#define TUTOR_MOVE_DRAGON_DANCE       36
#define TUTOR_MOVE_DRAINING_KISS      37
#define TUTOR_MOVE_DRILL_RUN          38
#define TUTOR_MOVE_DUAL_CHOP          39
#define TUTOR_MOVE_DUAL_WINGBEAT      40
#define TUTOR_MOVE_EARTH_POWER          41
#define TUTOR_MOVE_ECHOED_VOICE      42
#define TUTOR_MOVE_ELECTRIC_TERRAIN        43
#define TUTOR_MOVE_ELECTROWEB       44
#define TUTOR_MOVE_ELECTRO_BALL   45
#define TUTOR_MOVE_ENCORE         46
#define TUTOR_MOVE_ENDEAVOR       47
#define TUTOR_MOVE_ENCORE             48
#define TUTOR_MOVE_EXPANDING_FORCE           49
#define TUTOR_MOVE_FAKE_TEARS    50
#define TUTOR_MOVE_FEATHER_DANCE         51
#define TUTOR_MOVE_FIRE_FANG      52
#define TUTOR_MOVE_FIRE_PLEDGE          53
#define TUTOR_MOVE_FIRE_PUNCH        54
#define TUTOR_MOVE_FIRE_SPIN         55
#define TUTOR_MOVE_FLARE_BLITZ          56
#define TUTOR_MOVE_FLING        57
#define TUTOR_MOVE_FLIP_TURN              58
#define TUTOR_MOVE_FOCUS_ENERGY          59
#define TUTOR_MOVE_FOUL_PLAY       60
#define TUTOR_MOVE_FRENZY_PLANT          61
#define TUTOR_MOVE_FURY_CUTTER       62
#define TUTOR_MOVE_FUTURE_SIGHT        63
#define TUTOR_MOVE_GASTRO_ACID       64
#define TUTOR_MOVE_GRASS_PLEDGE        65
#define TUTOR_MOVE_GRASSY_GLIDE       65
#define TUTOR_MOVE_GRASSY_TERRAIN       66
#define TUTOR_MOVE_GRAVITY     67
#define TUTOR_MOVE_GUNK_SHOT            68
#define TUTOR_MOVE_HAZE          69
#define TUTOR_MOVE_HEAL_BELL               70
#define TUTOR_MOVE_HEAT_CRASH          71
#define TUTOR_MOVE_HEAT_WAVE         72
#define TUTOR_MOVE_HEAVY_SLAM          73
#define TUTOR_MOVE_HELPING_HAND         74
#define TUTOR_MOVE_HEX       75
#define TUTOR_MOVE_HIGH_HORSEPOWER                76
#define TUTOR_MOVE_HURRICANE    77
#define TUTOR_MOVE_HYDRO_CANNON          78
#define TUTOR_MOVE_HYDRO_PUMP       79
#define TUTOR_MOVE_HYPER_VOICE         80
#define TUTOR_MOVE_ICE_FANG        81
#define TUTOR_MOVE_ICE_PUNCH           82
#define TUTOR_MOVE_ICE_SPINNER          83
#define TUTOR_MOVE_ICICLE_SPEAR        84
#define TUTOR_MOVE_ICY_WIND       85
#define TUTOR_MOVE_INCINERATE       86
#define TUTOR_MOVE_IRON_DEFENSE           87
#define TUTOR_MOVE_IRON_HEAD         88
#define TUTOR_MOVE_KNOCK_OFF       89
#define TUTOR_MOVE_LASH_OUT          90
#define TUTOR_MOVE_LAST_RESORT          91
#define TUTOR_MOVE_LEAF_BLADE           92
#define TUTOR_MOVE_LEAF_STORM        93
#define TUTOR_MOVE_LIQUIDATION         94
#define TUTOR_MOVE_LOW_KICK         95
#define TUTOR_MOVE_LUNGE        96
#define TUTOR_MOVE_MAGICAL_LEAF           97
#define TUTOR_MOVE_MAGIC_COAT              98
#define TUTOR_MOVE_MAGIC_ROOM       99
#define TUTOR_MOVE_MAGNET_RISE        100
#define TUTOR_MOVE_MEGAHORN        101
#define TUTOR_MOVE_METAL_CLAW        102
#define TUTOR_MOVE_METAL_SOUND          103
#define TUTOR_MOVE_METEOR_BEAM       104
#define TUTOR_MOVE_METEOR_MASH       105
#define TUTOR_MOVE_METRONOME       106
#define TUTOR_MOVE_MISTY_EXPLOSION         107
#define TUTOR_MOVE_MISTY_TERRAIN       108
#define TUTOR_MOVE_MOONBLAST   109
#define TUTOR_MOVE_MUDDY_WATER     110
#define TUTOR_MOVE_MUD_SHOT         111
#define TUTOR_MOVE_MUD_SLAP       112
#define TUTOR_MOVE_MYSTICAL_FIRE          113
#define TUTOR_MOVE_NIGHT_SHADE          114
#define TUTOR_MOVE_NIGHT_SLASH     115
#define TUTOR_MOVE_OUTRAGE      116
#define TUTOR_MOVE_PAIN_SPLIT       117
#define TUTOR_MOVE_PETAL_BLIZZARD       118
#define TUTOR_MOVE_PHANTOM_FORCE           119
#define TUTOR_MOVE_PIN_MISSILE        120
#define TUTOR_MOVE_PLAY_ROUGH    121
#define TUTOR_MOVE_POISON_TAIL     122
#define TUTOR_MOVE_POLLEN_PUFF       123
#define TUTOR_MOVE_POLTERGEIST        124
#define TUTOR_MOVE_POUNCE       125
#define TUTOR_MOVE_POWER_GEM       126
#define TUTOR_MOVE_POWER_UP_PUNCH       127
#define TUTOR_MOVE_POWER_WHIP            128
#define TUTOR_MOVE_PSYCHIC_FANGS         129
#define TUTOR_MOVE_PSYCHIC_NOISE    130
#define TUTOR_MOVE_PSYCHIC_TERRAIN        131
#define TUTOR_MOVE_PSYCHO_CUT     132
#define TUTOR_MOVE_QUIVER_DANCE     133
#define TUTOR_MOVE_RAPID_SPIN   134
#define TUTOR_MOVE_REFRESH        135
#define TUTOR_MOVE_RETALIATE      136
#define TUTOR_MOVE_REVENGE        137
#define TUTOR_MOVE_REVERSAL           138
#define TUTOR_MOVE_RISING_VOLTAGE         139
#define TUTOR_MOVE_ROCK_BLAST           140
#define TUTOR_MOVE_ROLLOUT          141
#define TUTOR_MOVE_ROUND    142
#define TUTOR_MOVE_SAND_TOMB        143
#define TUTOR_MOVE_SCALE_SHOT        144
#define TUTOR_MOVE_SCARY_FACE           145
#define TUTOR_MOVE_SCORCHING_SANDS             146
#define TUTOR_MOVE_SCREECH         147
#define TUTOR_MOVE_SEED_BOMB        148
#define TUTOR_MOVE_SEISMIC_TOSS        149
#define TUTOR_MOVE_SHOCK_WAVE   150
#define TUTOR_MOVE_SIGNAL_BEAM           151
#define TUTOR_MOVE_SKITTER_SMACK         152
#define TUTOR_MOVE_SKY_ATTACK      153
#define TUTOR_MOVE_SOLAR_BLADE        154
#define TUTOR_MOVE_SPIKES       155
#define TUTOR_MOVE_STEEL_BEAM     156
#define TUTOR_MOVE_STEEL_ROLLER        157
#define TUTOR_MOVE_STOMPING_TANTRUM       158
#define TUTOR_MOVE_STORED_POWER            159
#define TUTOR_MOVE_STRUGGLE_BUG        160
#define TUTOR_MOVE_SUPERPOWER      161
#define TUTOR_MOVE_SUPER_FANG  162
#define TUTOR_MOVE_SWIFT      163
#define TUTOR_MOVE_SYNTHESIS      164
#define TUTOR_MOVE_STRUGGLE_BUG      165
#define TUTOR_MOVE_TAILWIND        166
#define TUTOR_MOVE_TAIL_SLAP        167
#define TUTOR_MOVE_TELEPORT             168
#define TUTOR_MOVE_TEMPER_FLARE        169
#define TUTOR_MOVE_TERRAIN_PULSE         170
#define TUTOR_MOVE_THROAT_CHOP          171
#define TUTOR_MOVE_THUNDER_FANG         172
#define TUTOR_MOVE_THUNDER_PUNCH          173
#define TUTOR_MOVE_TOXIC_SPIKES      174
#define TUTOR_MOVE_TRICK     175
#define TUTOR_MOVE_TRIPLE_AXEL       176
#define TUTOR_MOVE_TRI_ATTACK      177
#define TUTOR_MOVE_UPROAR     178
#define TUTOR_MOVE_VACUUM_WAVE      179
#define TUTOR_MOVE_VENOSHOCK             180
#define TUTOR_MOVE_VOLT_TACKLE       181
#define TUTOR_MOVE_WATER_PLEDGE        182
#define TUTOR_MOVE_WATER_PULSE            183
#define TUTOR_MOVE_WAVE_CRASH       184
#define TUTOR_MOVE_WEATHER_BALL         185
#define TUTOR_MOVE_WHIRLPOOL       186
#define TUTOR_MOVE_WHIRLWIND      187
#define TUTOR_MOVE_WONDER_ROOM       188
#define TUTOR_MOVE_WORRY_SEED        189
#define TUTOR_MOVE_ZEN_HEADBUTT      190
#define TUTOR_MOVE_COUNT         191

#endif // GUARD_CONSTANTS_PARTY_MENU_H
