/* gamma-gnomerr.h -- Gnome RR gamma adjustment header
   This file is part of Redshift.

   Redshift is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Redshift is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Redshift.  If not, see <http://www.gnu.org/licenses/>.

   Copyright (c) 2010-2014  Jon Lund Steffensen <jonlst@gmail.com>
*/

#ifndef REDSHIFT_GAMMA_GNOMERR_H
#define REDSHIFT_GAMMA_GNOMERR_H

#include <stdint.h>
#include <stdio.h>

#include <glib.h>
#define GNOME_DESKTOP_USE_UNSTABLE_API
#include <libgnome-desktop/gnome-rr.h>

#include "redshift.h"

extern const gamma_method_t gnomerr_gamma_method;

#endif /* ! REDSHIFT_GAMMA_GNOMERR_H */
