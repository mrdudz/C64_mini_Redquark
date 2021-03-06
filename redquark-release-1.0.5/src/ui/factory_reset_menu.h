/*
 *  THEC64 Mini
 *  Copyright (C) 2017 Chris Smith
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef FACTORY_RESET_MENU_H
#define FACTORY_RESET_MENU_H

#include <stdio.h>
#include <stdlib.h>

#include "flashlight.h"

#include "uniforms.h"
#include "fontatlas.h"
#include "fonts.h"
#include "textpane.h"
#include "fs_menu.h"

#define FR_MAX_TEXTS 2

typedef struct {
    Flashlight *f;

    textpane_t   *statement;
    textpane_t   *text[FR_MAX_TEXTS];
    fonts_t      *fonts; 

    FullScreenMenu *fs_menu;

} FactoryResetMenu;

FactoryResetMenu * factory_reset_menu_init( Flashlight *f, fonts_t *fonts );
void factory_reset_menu_finish( FactoryResetMenu **m );
void factory_reset_menu_enable( FactoryResetMenu *lmenu );
void factory_reset_menu_disable( FactoryResetMenu *lmenu );

#endif
