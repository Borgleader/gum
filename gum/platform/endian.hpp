// gum
// Copyright (C) 2014 Rapptz

// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.

// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:

// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.

#ifndef GUM_PLATFORM_ENDIAN_HPP
#define GUM_PLATFORM_ENDIAN_HPP

#include <SDL_endian.h>
#include <type_traits>

namespace sdl {
#if SDL_BYTEORDER == SDL_BIG_ENDIAN
struct is_big_endian : std::true_type {};
#else
struct is_big_endian : std::false_type {};
#endif // SDL_BYTEORDER
} // sdl

#endif // GUM_PLATFORM_ENDIAN_HPP
