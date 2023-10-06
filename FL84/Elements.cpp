#include "pch.h"

struct Tab_Element
{
    float Element_Opacity, Rect_Opacity, Text_Opacity;
};

namespace Elements
{
    ImFont* RudaFont = NULL;
    ImFont* Weapon_Icon = NULL;
    ImFont* Tab_Icon = NULL;

    bool Tab(const char* icon, const char* text, bool boolean)
    {
        ImGuiWindow* window = ImGui::GetCurrentWindow();
        if (window->SkipItems)
            return false;

        ImGuiContext& g = *GImGui;
        const ImGuiStyle& style = g.Style;
        const ImGuiID id = window->GetID(icon);
        const ImVec2 label_size = Tab_Icon->CalcTextSizeA(17.0f, FLT_MAX, 0.0f, icon);
        ImVec2 pos = window->DC.CursorPos;

        // Calculate the width of the combined icon and text
        float combined_width = label_size.x + 15.0f + ImGui::CalcTextSize(text).x; // Increased spacing between icon and text

        // Calculate the width of the left rectangle based on combined_width
        float rect_width = combined_width + 15.0f; // Adjust the width here

        const ImRect rect(pos, ImVec2(pos.x + rect_width, pos.y + 35));
        ImGui::ItemSize(ImVec4(rect.Min.x, rect.Min.y, rect.Max.x, rect.Max.y + 5), style.FramePadding.y);
        if (!ImGui::ItemAdd(rect, id))
            return false;

        bool hovered, held;
        bool pressed = ImGui::ButtonBehavior(rect, id, &hovered, &held, NULL);

        static std::map <ImGuiID, Tab_Element> anim;
        auto it_anim = anim.find(id);
        if (it_anim == anim.end()) {
            anim.insert({ id, { 0.0f, 0.0f, 0.0f } });
            it_anim = anim.find(id);
        }

        it_anim->second.Element_Opacity = ImLerp(it_anim->second.Element_Opacity, (boolean ? 0.04f : hovered ? 0.01f : 0.0f), 0.07f * (1.0f - ImGui::GetIO().DeltaTime));
        it_anim->second.Rect_Opacity = ImLerp(it_anim->second.Rect_Opacity, (boolean ? 1.0f : 0.0f), 0.15f * (1.0f - ImGui::GetIO().DeltaTime));
        it_anim->second.Text_Opacity = ImLerp(it_anim->second.Text_Opacity, (boolean ? 1.0f : hovered ? 0.5f : 0.3f), 0.07f * (1.0f - ImGui::GetIO().DeltaTime));

        // Calculate the center position for icon and text
        float center_x = pos.x + rect_width * 0.5f + 2.5f;
        float icon_text_y = pos.y + (35 - label_size.y) * 0.5f - 1.0f;

        float icon_y_offset = -2.0f;
        float icon_y = icon_text_y + icon_y_offset;

        // Draw the icon and text with centered horizontal position inside the left rectangle
        window->DrawList->AddText(Tab_Icon, 17.0f, ImVec2(center_x - combined_width * 0.5f, icon_y), ImColor(1.0f, 1.0f, 1.0f, it_anim->second.Text_Opacity), icon);
        window->DrawList->AddText(RudaFont, 17.0f, ImVec2(center_x - combined_width * 0.5f + label_size.x + 10.0f, icon_text_y), ImColor(1.0f, 1.0f, 1.0f, it_anim->second.Text_Opacity), text);

        // Draw the bottom rectangle with centered horizontal position inside the left rectangle
        ImVec2 right_rect_pos(rect.Min.x, rect.Max.y - 2.5f); // Adjust the position here to match the bottom edge of the left rectangle
        ImVec2 right_rect_size(rect_width, 2.5f); // Adjust the size here to match the width of the left rectangle
        window->DrawList->AddRectFilled(right_rect_pos, right_rect_pos + right_rect_size, ImColor(255 / 255.0f, 242 / 255.0f, 0 / 255.0f, it_anim->second.Rect_Opacity), 7.0f, ImDrawFlags_RoundCornersLeft);

        return pressed;
    }

    bool TabIcon(const char* icon, bool boolean)
    {
        ImGuiWindow* window = ImGui::GetCurrentWindow();
        if (window->SkipItems)
            return false;

        ImGuiContext& g = *GImGui;
        const ImGuiStyle& style = g.Style;
        const ImGuiID id = window->GetID(icon);
        ImVec2 label_size = Weapon_Icon->CalcTextSizeA(35.0f, FLT_MAX, 0.0f, icon);
        ImVec2 pos = window->DC.CursorPos;

        // Calculate the width of the left rectangle based on combined_width
        float rect_width = label_size.x + 15.0f; // Adjust the width here

        const ImRect rect(pos, ImVec2(pos.x + rect_width, pos.y + 30));
        ImGui::ItemSize(ImVec4(rect.Min.x, rect.Min.y, rect.Max.x, rect.Max.y + 2.5f), style.FramePadding.y);
        if (!ImGui::ItemAdd(rect, id))
            return false;

        bool hovered, held;
        bool pressed = ImGui::ButtonBehavior(rect, id, &hovered, &held, NULL);

        static std::map <ImGuiID, Tab_Element> anim;
        auto it_anim = anim.find(id);
        if (it_anim == anim.end()) {
            anim.insert({ id, { 0.0f, 0.0f, 0.0f } });
            it_anim = anim.find(id);
        }

        it_anim->second.Element_Opacity = ImLerp(it_anim->second.Element_Opacity, (boolean ? 0.04f : hovered ? 0.01f : 0.0f), 0.07f * (1.0f - ImGui::GetIO().DeltaTime));
        it_anim->second.Rect_Opacity = ImLerp(it_anim->second.Rect_Opacity, (boolean ? 1.0f : 0.0f), 0.15f * (1.0f - ImGui::GetIO().DeltaTime));
        it_anim->second.Text_Opacity = ImLerp(it_anim->second.Text_Opacity, (boolean ? 1.0f : hovered ? 0.5f : 0.3f), 0.07f * (1.0f - ImGui::GetIO().DeltaTime));

        label_size.y += 10.0f;

        // Draw the icon and text with centered horizontal position inside the left rectangle
        window->DrawList->AddText(Weapon_Icon, 35.0f, (rect.Min + rect.Max - label_size) / 2, ImColor(1.0f, 1.0f, 1.0f, it_anim->second.Text_Opacity), icon);

        // Draw the bottom rectangle with centered horizontal position inside the left rectangle
        ImVec2 right_rect_pos(rect.Min.x, rect.Max.y - 3.0f); // Adjust the position here to match the bottom edge of the left rectangle
        ImVec2 right_rect_size(rect_width, 2.5f); // Adjust the size here to match the width of the left rectangle
        window->DrawList->AddRectFilled(right_rect_pos, right_rect_pos + right_rect_size, ImColor(147 / 255.0f, 190 / 255.0f, 66 / 255.0f, it_anim->second.Rect_Opacity), 7.0f, ImDrawFlags_RoundCornersLeft);

        return pressed;
    }

    bool TabText(const char* text, bool boolean)
    {
        ImGuiWindow* window = ImGui::GetCurrentWindow();
        if (window->SkipItems)
            return false;

        ImGuiContext& g = *GImGui;
        const ImGuiStyle& style = g.Style;
        const ImGuiID id = window->GetID(text);
        ImVec2 label_size = RudaFont->CalcTextSizeA(15.0f, FLT_MAX, 0.0f, text);
        ImVec2 pos = window->DC.CursorPos;

        // Calculate the width of the left rectangle based on combined_width
        float rect_width = label_size.x + 15.0f; // Adjust the width here

        const ImRect rect(pos, ImVec2(pos.x + rect_width, pos.y + 30));
        ImGui::ItemSize(ImVec4(rect.Min.x, rect.Min.y, rect.Max.x, rect.Max.y + 2.5f), style.FramePadding.y);
        if (!ImGui::ItemAdd(rect, id))
            return false;

        bool hovered, held;
        bool pressed = ImGui::ButtonBehavior(rect, id, &hovered, &held, NULL);

        static std::map <ImGuiID, Tab_Element> anim;
        auto it_anim = anim.find(id);
        if (it_anim == anim.end()) {
            anim.insert({ id, { 0.0f, 0.0f, 0.0f } });
            it_anim = anim.find(id);
        }

        it_anim->second.Element_Opacity = ImLerp(it_anim->second.Element_Opacity, (boolean ? 0.04f : hovered ? 0.01f : 0.0f), 0.07f * (1.0f - ImGui::GetIO().DeltaTime));
        it_anim->second.Rect_Opacity = ImLerp(it_anim->second.Rect_Opacity, (boolean ? 1.0f : 0.0f), 0.15f * (1.0f - ImGui::GetIO().DeltaTime));
        it_anim->second.Text_Opacity = ImLerp(it_anim->second.Text_Opacity, (boolean ? 1.0f : hovered ? 0.5f : 0.3f), 0.07f * (1.0f - ImGui::GetIO().DeltaTime));

        label_size.y += 10.0f;

        // Draw the icon and text with centered horizontal position inside the left rectangle
        window->DrawList->AddText(RudaFont, 15.0f, (rect.Min + rect.Max - label_size) / 2, ImColor(1.0f, 1.0f, 1.0f, it_anim->second.Text_Opacity), text);

        // Draw the bottom rectangle with centered horizontal position inside the left rectangle
        ImVec2 right_rect_pos(rect.Min.x, rect.Max.y - 3.0f); // Adjust the position here to match the bottom edge of the left rectangle
        ImVec2 right_rect_size(rect_width, 2.5f); // Adjust the size here to match the width of the left rectangle
        window->DrawList->AddRectFilled(right_rect_pos, right_rect_pos + right_rect_size, ImColor(255 / 255.0f, 242 / 255.0f, 0 / 255.0f, it_anim->second.Rect_Opacity), 7.0f, ImDrawFlags_RoundCornersLeft);

        return pressed;
    }
}


