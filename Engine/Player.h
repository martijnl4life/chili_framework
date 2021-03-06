#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "Keyboard.h"
#include "Rect.h"

class Player
{
public:
	Player(const Vec2& in_pos);
	void Update(Keyboard& kbd);
	bool IsCollidingEnemy(Rect& rect2);
	void Draw(Graphics& gfx);
private:
	Vec2 pos;
	Rect rect;
	static constexpr int radius = 7;
	static constexpr int width = 14;
	static constexpr int height = 21;
	static constexpr Color c_player = Colors::Red;
};