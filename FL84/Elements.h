#pragma once

namespace Elements
{
    extern ImFont* RudaFont;
    extern ImFont* Weapon_Icon;
    extern ImFont* Tab_Icon;

    bool Tab(const char* icon, const char* text, bool boolean);
    bool TabIcon(const char* icon, bool boolean);
    bool TabText(const char* text, bool boolean);
}

