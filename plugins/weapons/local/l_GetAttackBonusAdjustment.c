
/***************************************************************************
    NWNXFuncs.cpp - Implementation of the CNWNXFuncs class.
    Copyright (C) 2007 Doug Swarin (zac@intertex.net)

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ***************************************************************************/

#include "NWNXWeapons.h"


int Local_GetAttackBonusAdjustment (CNWSCreatureStats *attacker, CNWSCreature *target, CNWSItem *weapon,
                                    int ranged, int ab_abil, int ab_feats) {
#ifdef NWNX_WEAPONS_HG
#define NWNX_EXALT_GET_AB(P)            ((P >> 16) & 0xFF)

    int ab = 0;

    if ((attacker->cs_age & 0x80000000) &&
        (ab = NWNX_EXALT_GET_AB(attacker->cs_age)) > 0 && ab < 130)
        ab_abil = ab;

    if (weapon != NULL) {
        int wm = 0;
        int rogue = nwn_GetLevelByClass(attacker, CLASS_TYPE_ROGUE);

        if (attacker->cs_original != NULL &&
            attacker->cs_original->cre_is_pc)
            wm = nwn_GetLevelByClass(attacker, CLASS_TYPE_WEAPON_MASTER);

        /* PC weapon masters get +1 AB at 10, +1 at 29, and +2 at 30 */
        if (wm >= 10 && CNWSCreatureStats__GetIsWeaponOfChoice(attacker, weapon->it_baseitem)) {
            ab_feats++;

            if (wm >= 29)
                ab_feats++;
            if (wm >= 30)
                ab_feats += 2;
        }


        /* rogues with the Opportunist feat get to add their base int modifier
         * to attacks with light weapons (including slings, light crossbows,
         * and morningstars) capped by rogue level */
        if (rogue >= 25                                                        &&
            attacker->cs_ac_armour_base <= 3                                   &&
            CNWSCreatureStats__HasFeat(attacker, FEAT_OPPORTUNIST)             &&
            (GetIsWeaponLight(attacker, weapon, 0)                             ||
             (weapon != NULL && weapon->it_baseitem == BASE_ITEM_MORNINGSTAR))) {
            int max = (rogue - 20) / 5;
            int intbonus = (attacker->cs_int - 10) / 2;

            if (intbonus > max)
                intbonus = max;

            if (intbonus > 0 && rogue >= 30)
                intbonus++;

            ab_feats += intbonus;
        }


        if (!GetIsUnarmedWeapon(weapon))
            ab_feats += CNWSCreatureStats__GetSkillRank(attacker, SKILL_CRAFT_WEAPON, NULL, 0) / 40;
    }

    if (ab >= 250) {
        /* unused special values */
        ab_abil = 0;
    } else if (ab >= 130) {
        switch (ab / 10) {
            case 13: ab_abil = attacker->cs_str_mod + (ab - 135);                             break;
            case 14: ab_abil = attacker->cs_str_mod + ((ab - 139) * 5);                       break;
            case 15: ab_abil = CNWSCreatureStats__GetDEXMod(attacker, 0) + (ab - 155);        break;
            case 16: ab_abil = CNWSCreatureStats__GetDEXMod(attacker, 0) + ((ab - 159) * 5);  break;
            case 17: ab_abil = attacker->cs_con_mod + (ab - 175);                             break;
            case 18: ab_abil = attacker->cs_con_mod + ((ab - 179) * 5);                       break;
            case 19: ab_abil = attacker->cs_int_mod + (ab - 195);                             break;
            case 20: ab_abil = attacker->cs_int_mod + ((ab - 199) * 5);                       break;
            case 21: ab_abil = attacker->cs_wis_mod + (ab - 215);                             break;
            case 22: ab_abil = attacker->cs_wis_mod + ((ab - 219) * 5);                       break;
            case 23: ab_abil = attacker->cs_cha_mod + (ab - 235);                             break;
            case 24: ab_abil = attacker->cs_cha_mod + ((ab - 239) * 5);                       break;
        }
    }
#endif

    return (ab_abil + ab_feats);
}


/* vim: set sw=4: */
