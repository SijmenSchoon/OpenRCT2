/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include <openrct2/Input.h>

struct input_mouse_data
{
    int32_t X;
    int32_t Y;
    uint32_t State;
};

void input_handle_keyboard(bool isTitle);
void input_set_mouse_cursor(int32_t cursor_id);
