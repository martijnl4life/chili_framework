#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "Keyboard.h"
#include "Rect.h"

class Enemy
{
public:
	Enemy(const Vec2& in_pos);
	void Update();
	void Draw(Graphics& gfx);
	Rect GetRect();
private:
	Vec2 pos;
	Rect rect;
	static constexpr int radius = 7;
	static constexpr int width = 14;
	static constexpr int height = 21;
	static constexpr Color c_enemy0 = Colors::Red;
	static constexpr Color c_enemy1 = Colors::Red;
	static constexpr Color c_enemy2 = Colors::Red;
};