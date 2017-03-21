#include "Rect.h"

Rect::Rect(Vec2 & in_pos, int in_width, int in_height)
{
	pos = in_pos;
	width = in_width;
	height = in_height;
}

bool Rect::IsColliding(Rect & rect2)
{
	const int left0 = int(pos.x);
	const int right0 = int(pos.x + width);
	const int top0 = int(pos.y);
	const int bottom0 = int(pos.y + height);

	const int left1 = int(rect2.GetPos().x);
	const int right1 = int(rect2.GetPos().x + rect2.GetWidth());
	const int top1 = int(rect2.GetPos().y);
	const int bottom1 = int(rect2.GetPos().y + rect2.GetHeight());

	return left0 < right1 && right0 > left1 && top0 < bottom1 && bottom0 > top1;
}

Vec2 Rect::GetPos()
{
	return pos;
}

int Rect::GetWidth()
{
	return width;
}

int Rect::GetHeight()
{
	return height;
}
