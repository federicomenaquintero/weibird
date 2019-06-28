/*
 *  Weibird - View and compose weibo
 *  Copyright (C) 2019 Jonathan Kang <jonathankang@gnome.org>.
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

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define WB_TYPE_AVATAR_WIDGET (wb_avatar_widget_get_type ())

G_DECLARE_FINAL_TYPE (WbAvatarWidget, wb_avatar_widget, WB, AVATAR_WIDGET, GtkWidget)

void wb_avatar_widget_setup (WbAvatarWidget *self, const gchar *uri, gboolean small);
WbAvatarWidget *wb_avatar_widget_new (void);

G_END_DECLS
