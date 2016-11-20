/* -*- mode: c++ -*-
 * Akela -- Animated Keyboardio Extension Library for Anything
 * Copyright (C) 2016  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <KeyboardioFirmware.h>

#define AKELA B01000000
#define DEFAULT_TIMEOUT 40

namespace Akela {
  namespace Default {
    enum {
      Off,
      On
    };
  };
};

// Temporary, until something similar makes its way into core.
void event_handler_hook_replace (custom_handler_t oldHook, custom_handler_t newHook);
void loop_hook_replace (custom_loop_t oldHook, custom_loop_t newHook);
