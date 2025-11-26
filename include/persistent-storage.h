/* persistent-storage.h
 *
 * Copyright (C) 2018-2025 Bernhard Lang, www.bernhard-lang.net
 *
 * Based on code by Dominique Lovy, 2013-2015, Université de Genève
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 */

#ifndef _persistent_storage_h_
#define _persistent_storage_h_

#include <stdint.h>
#include <sys/types.h>

class  c_persistent_storage {
 public:
  c_persistent_storage(void);

  virtual int8_t begin(void) { return 0; };
  virtual ssize_t write(size_t address, const void *, size_t len)=0;
  virtual ssize_t read(size_t address, void *, size_t len)=0;

  template <class T> ssize_t write(size_t address, const T &val) {
    return write(address, &val, sizeof(val));
  };

  template <class T> ssize_t read(size_t address, T &val) {
    return read(address, &val, sizeof(val));
  };

  ssize_t write(size_t address, const char *, size_t max_len);
  //virtual ssize_t read(size_t address, char *, size_t max_len)=0;
  virtual ssize_t max_address(void) const=0;
};

extern c_persistent_storage *eeprom;

#endif // _persistent_storage_h_
