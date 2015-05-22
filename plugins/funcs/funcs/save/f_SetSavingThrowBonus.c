
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

#include "NWNXFuncs.h"


void Func_SetSavingThrowBonus(CGameObject *ob, char *value)
{
    int save, val;
    CNWSCreature *cre;

    if (ob == NULL                                    ||
            (cre = ob->vtable->AsNWSCreature(ob)) == NULL ||
            cre->cre_stats == NULL                        ||
            sscanf(value, "%d %d", &save, &val) != 2      ||
            val < -127 || val > 127) {

        snprintf(value, strlen(value), "-1");
        return;
    }

    switch (save) {
        case SAVING_THROW_FORT:
            cre->cre_stats->cs_save_fort = val;
            break;

        case SAVING_THROW_REFLEX:
            cre->cre_stats->cs_save_reflex = val;
            break;

        case SAVING_THROW_WILL:
            cre->cre_stats->cs_save_will = val;
            break;
    }

    snprintf(value, strlen(value), "%d", val);
}


/* vim: set sw=4: */
