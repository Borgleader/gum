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

#ifndef SDLPP_CORE_ERROR_HPP
#define SDLPP_CORE_ERROR_HPP

#include <SDL_error.h>
#include <stdexcept>

namespace sdl {
/**
 * @brief Exception object that handles SDL errors.
 * @details The exception object either propagates
 * `SDL_GetError` or uses a custom string. All error
 * handling is thrown through this object.
 */
class error : public std::runtime_error {
public:
    /**
     * @brief Creates an exception with `SDL_GetError`
     */
    error() noexcept: std::runtime_error(SDL_GetError()) { SDL_ClearError(); }

    /**
     * @brief Creates an exception with a custom string.
     */
    error(const std::string& str) noexcept: std::runtime_error(str) {}
};
} // sdl

#endif // SDLPP_CORE_ERROR_HPP