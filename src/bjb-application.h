/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * bijiben.h
 * Copyright (C) Pierre-Yves LUYTEN 2011 <py@luyten.fr>
 * Copyright (C) 2017 Mohammed Sadiq <sadiq@sadiqpk.org>
 * 
 * bijiben is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * bijiben is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BIJIBEN_
#define _BIJIBEN_

#include <gtk/gtk.h>
#include <libbiji/libbiji.h>

#include "bjb-settings.h"

G_BEGIN_DECLS

#define BJB_TYPE_APPLICATION (bjb_application_get_type ())

G_DECLARE_FINAL_TYPE (BjbApplication, bjb_application, BJB, APPLICATION, GtkApplication)

BjbApplication *bjb_application_new (void);

// Accessors

const gchar *bijiben_get_bijiben_dir (void);
BijiManager * bijiben_get_manager(BjbApplication *self);
BjbSettings * bjb_app_get_settings(gpointer application);

// Windows
void bijiben_new_window_for_note (GApplication *app, BijiNoteObj *note);

void bijiben_import_notes (BjbApplication *self, gchar *uri);

G_END_DECLS

#endif /* _APPLICATION_H_ */
