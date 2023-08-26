#include "pch.h"

namespace Draw
{
	void DrawLine(float x1, float y1, float x2, float y2, float thickness, ImVec4 color)
	{
		ImGui::GetBackgroundDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::GetColorU32(color), thickness);
	}

	void DrawCircleFilled(float x1, float y1, float radius, ImVec4 color)
	{
		ImGui::GetBackgroundDrawList()->AddCircleFilled(ImVec2(x1, y1), radius, ImGui::GetColorU32(color), radius);
	}

	void DrawBox(float x, float y, float w, float h, bool filled, ImVec4 color)
	{
		if (filled)
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(w, h), ImGui::GetColorU32(ImVec4(color.x, color.y, color.z, 0.2f)));

		ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(w, y), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, h), ImVec2(w, h), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x, h), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRect(ImVec2(w, y), ImVec2(w, h), ImGui::GetColorU32(color));
	}

	void DrawCornersBox(float x, float y, float w, float h, bool shadow, bool filled, ImVec4 color)
	{
		float hlength = (w - x) / 3;
		float vlength = (h - y) / 3;

		if (filled)
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(w, h), ImGui::GetColorU32(ImVec4(color.x, color.y, color.z, 0.3f)));

		if (shadow)
		{
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x - 1.0f, y - 1.0f), ImVec2(x + hlength + 2.0f, y + 2.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x - 1.0f, y - 1.0f), ImVec2(x + 2.0f, y + vlength + 2.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));

			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - hlength - 1.0f, y - 1.0f), ImVec2(w + 1.0f, y + 2.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - 2.0f, y - 1.0f), ImVec2(w + 1.0f, y + vlength + 2.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));

			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x - 1.0f, h - 2.0f), ImVec2(x + hlength + 2.0f, h + 1.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x - 1.0f, h - vlength - 1.0f), ImVec2(x + 2.0f, h + 1.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));

			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - hlength - 1.0f, h - 2.0f), ImVec2(w + 1.0f, h + 1.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - 2.0f, h - vlength - 1.0f), ImVec2(w + 1.0f, h + 1.0f), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.4f)));
		}

		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + hlength + 1.0f, y + 1.0f), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + 1.0f, y + vlength + 1.0f), ImGui::GetColorU32(color));

		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - hlength, y), ImVec2(w, y + 1.0f), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - 1.0f, y), ImVec2(w, y + vlength + 1.0f), ImGui::GetColorU32(color));

		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, h - 1.0f), ImVec2(x + hlength + 1.0f, h), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, h - vlength), ImVec2(x + 1.0f, h), ImGui::GetColorU32(color));

		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - hlength, h - 1.0f), ImVec2(w, h), ImGui::GetColorU32(color));
		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(w - 1.0f, h - vlength), ImVec2(w, h), ImGui::GetColorU32(color));
	}

	void DrawString(std::string text, float x, float y, float size, bool shadow, ImVec4 color)
	{
		float textWidth = ImGui::CalcTextSize(text.c_str()).x;

		if (shadow)
		{
			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2 - 1.0f, y - 1.0f), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());
			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2, y - 1.0f), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());

			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2 + 1.0f, y - 1.0f), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());
			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2 + 1.0f, y), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());

			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2 + 1.0f, y + 1.0f), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());
			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2, y + 1.0f), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());

			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2 - 1.0f, y + 1.0f), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());
			ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2 - 1.0f, y), ImGui::GetColorU32(ImGui::GetColorU32(ImVec4(0.000000f, 0.000000f, 0.000000f, 1.000000f))), text.c_str());
		}

		ImGui::GetBackgroundDrawList()->AddText(ImGui::GetIO().FontDefault, size, ImVec2(x - textWidth / 2, y), ImGui::GetColorU32(color), text.c_str());
	}
	
	void VerticalHealthBar(int x, int y, int w, int h, float Health, float MaxHealth, ImVec4 color)
	{
		if (Health <= 0)
			Health = 1;

		if (MaxHealth < Health)
			MaxHealth = 100;
		int size = (h * Health / (MaxHealth / 100)) / 100;

		//int size = static_cast<int>(h * (Health / MaxHealth));

		// Draw the background bar
		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y - 1), ImVec2(x + 5, y + h + 1), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.5f)));

		// Draw the main health bar
		if (size > 0)
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x + 1, y + h - size), ImVec2(x + 4, y + h), ImGui::GetColorU32(color));
	}

	void HorizontalHealthBar(int x, int y, int w, int h, float Health, float MaxHealth, ImVec4 color)
	{
		if (Health <= 0)
			Health = 1;

		if (MaxHealth < Health)
			MaxHealth = 100;

		int size = static_cast<int>(w * Health / MaxHealth);

		// Draw the background bar
		ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x - 1, y - 1), ImVec2(x + w + 1, y + 6), ImGui::GetColorU32(ImVec4(0.f, 0.f, 0.f, 0.5f)));

		// Draw the main health bar
		if (size > 0)
			ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + size, y + 5), ImGui::GetColorU32(color));
	}
}