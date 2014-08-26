// SDL++
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

#ifndef SDLPP_CORE_HPP
#define SDLPP_CORE_HPP

#include "core/error.hpp"
#include "core/init.hpp"

namespace sdl {
/**
 * @brief Delays for a specified number of milliseconds.
 * @details This function internally calls `SDL_Delay`. So all
 * its cons and pros are the same as `SDL_Delay`.
 *
 * @param ms The number of milliseconds to pause by.
 */
inline void delay(unsigned ms) {
    SDL_Delay(ms);
}
} // sdl

#endif // SDLPP_CORE_HPP
