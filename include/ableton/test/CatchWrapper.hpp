/* Copyright 2016, Ableton AG, Berlin. All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  If you would like to incorporate Link into a proprietary software application,
 *  please contact <link-devs@ableton.com>.
 */

#pragma once

/*!
 * \brief Wrapper file for Catch library
 *
 * This file includes the Catch header for Link, and also disables some compiler warnings
 * which are specific to that library.
 */

// Visual Studio
#if defined(_MSC_VER)
#pragma warning(push)
// C4242: 'identifier' : conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable : 4242)
#if _MSC_VER >= 1910
// C4244: 'conversion' conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable : 4244)
#endif
// C4388: signed/unsigned mismatch
#pragma warning(disable : 4388)
// C4668: 'symbol' is not defined as a preprocessor macro, replacing with '0' for
// 'directives'
#pragma warning(disable : 4668)
// C4702: unreachable code
#pragma warning(disable : 4702)
#endif

#include <catch.hpp>

// Visual Studio
#if defined(_MSC_VER)
#pragma warning(pop)
#endif
