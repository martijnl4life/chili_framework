#pragma once
#include "Vec2.h"

class Rect
{
public:
	Rect() = default;
	Rect(Vec2& in_pos, int in_width, int in_height);
	bool IsColliding(Rect& rect2);
	Vec2 GetPos();
	int GetWidth();
	int GetHeight();
private:
	Vec2 pos;
	int width;
	int height;
};