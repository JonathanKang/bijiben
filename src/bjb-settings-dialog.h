/*
 * bjb_settings_dialog.h
 * 
 * Copyright © 2013 Pierre-Yves LUYTEN <py@luyten.fr>
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


#ifndef BJB_SETTINGS_DIALOG_H_
#define BJB_SETTINGS_DIALOG_H_ 1

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define BJB_TYPE_SETTINGS_DIALOG             (bjb_settings_dialog_get_type ())

G_DECLARE_FINAL_TYPE (BjbSettingsDialog, bjb_settings_dialog, BJB, SETTINGS_DIALOG, GtkDialog)

GtkDialog             *bjb_settings_dialog_new                 (void);

G_END_DECLS

#endif /* BJB_SETTINGS_DIALOG_H_ */
