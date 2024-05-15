 /*
  IdLib Byte Sequence
  Copyright (C) 2018-2024 Michael Heilmann. All rights reserved.

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#include "idlib/byte_sequence.h"

// memcpy, memmove, memset, memcmp
#include <string.h>

idlib_status idlib_byte_sequence_copy(void* p, void const* q, size_t n) {
  if (!p || !q) {
    return IDLIB_ARGUMENT_INVALID;
  }
  memcpy(p, q, n);
  return IDLIB_SUCCESS;
}

idlib_status idlib_byte_sequence_move(void* p, void const* q, size_t n) {
  if (!p || !q) {
    return IDLIB_ARGUMENT_INVALID;
  }
  memmove(p, q, n);
  return IDLIB_SUCCESS;
}

idlib_status idlib_byte_sequence_fill_zero(void* p, size_t n) {
  if (!p) {
    return IDLIB_ARGUMENT_INVALID;
  }
  memset(p, 0, n);
  return IDLIB_SUCCESS;
}

idlib_status idlib_byte_sequence_fill(void* p, size_t n, uint8_t v) {
  if (!p) {
    return IDLIB_ARGUMENT_INVALID;
  }
  memset(p, v, n);
  return IDLIB_SUCCESS;
}

idlib_status idlib_byte_sequence_compare(int8_t* RETURN, void const* p, void const* q, size_t n) {
  if (!RETURN || !p || !q) {
    return IDLIB_ARGUMENT_INVALID;
  }
  int temporary = memcmp(p, q, n);
  *RETURN = temporary < 0 ? -1 : (temporary > 0 ? +1 : 0);
  return IDLIB_SUCCESS;
}
