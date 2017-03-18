#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "Keyboard.h"

class Player
{
public:
	Player(const Vec2& in_pos);
	void Update(Keyboard& kbd);
	void Draw(Graphics& gfx);
private:
	Vec2 pos;
	static constexpr int radius = 7;
	static constexpr Color c_player = Colors::Red;
};