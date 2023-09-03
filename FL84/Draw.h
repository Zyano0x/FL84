#pragma once

namespace Draw
{
	void DrawLine(float x1, float y1, float x2, float y2, float thickness, ImVec4 color);
	void DrawCircleFilled(float x1, float y1, float radius, ImVec4 color);
	void DrawTriangleFilled(float x1, float y1, float x2, float y2, float x3, float y3, ImVec4 color);
	void DrawBox(float x, float y, float w, float h, bool filled, ImVec4 color);
	void DrawCornersBox(float x, float y, float w, float h, bool shadow, bool filled, ImVec4 color);
	void DrawString(std::string text, float x, float y, float size, bool shadow, ImVec4 color);
	void VerticalHealthBar(int x, int y, int w, int h, float Health, float MaxHealth, ImVec4 color);
	void HorizontalHealthBar(int x, int y, int w, int h, float Health, float MaxHealth, ImVec4 color);
}