/* persistent-storage.cpp
 *
 * Copyright (C) 2018-2025 Bernhard Lang, www.bernhard-lang.net
 *
 * Based on code by Dominique Lovy, 2013-2015, Université de Genève
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 */

#include "persistent-storage.h"
#include <string.h>

c_persistent_storage::c_persistent_storage(void) {}

ssize_t c_persistent_storage::write(size_t address, const char *buf,
                                    size_t max_len) {
  return write(address, buf, 1 + strlen(buf));
}
