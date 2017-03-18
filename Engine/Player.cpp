#include "Player.h"

Player::Player(const Vec2 & in_pos)
{
	pos = in_pos;
}

void Player::Update(Keyboard & kbd)
{
	if (kbd.KeyIsPressed('A')) pos += Vec2{ -1,0 };
	if (kbd.KeyIsPressed('D')) pos += Vec2{ 1,0 };
	if (kbd.KeyIsPressed('W')) pos += Vec2{ 0,-1 };
	if (kbd.KeyIsPressed('S')) pos += Vec2{ 0,1 };
}

void Player::Draw(Graphics & gfx)
{
	gfx.DrawCircle(pos.x, pos.y, radius, c_player);
}
