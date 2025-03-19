/* persistent-storage.cpp
 *
 * Copyright (C) 2018 Bernhard Lang, www.b-lang.ch
 *
 * Based on code by Dominique Lovy, 2013-2015, Université de Genève
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "persistent-storage.h"
#include <string.h>

c_persistent_storage::c_persistent_storage(void) {}

ssize_t c_persistent_storage::write(size_t address, const char *buf,
                                    size_t max_len) {
  return write(address, buf, 1 + strlen(buf));
}
