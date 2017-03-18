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
	//Center
	gfx.PutPixel(pos.x, pos.y, c_player);
	//Arms
	gfx.PutPixel(pos.x + 1, pos.y, c_player);
	gfx.PutPixel(pos.x + 2, pos.y, c_player);
	gfx.PutPixel(pos.x + 3, pos.y, c_player);
	gfx.PutPixel(pos.x + 4, pos.y, c_player);
	gfx.PutPixel(pos.x + 5, pos.y, c_player);
	gfx.PutPixel(pos.x - 1, pos.y, c_player);
	gfx.PutPixel(pos.x - 2, pos.y, c_player);
	gfx.PutPixel(pos.x - 3, pos.y, c_player);
	gfx.PutPixel(pos.x - 4, pos.y, c_player);
	gfx.PutPixel(pos.x - 5, pos.y, c_player);
	//Hands
	gfx.PutPixel(pos.x - 5, pos.y + 1, c_player);
	gfx.PutPixel(pos.x + 5, pos.y + 1, c_player);
	gfx.PutPixel(pos.x - 5, pos.y - 1, c_player);
	gfx.PutPixel(pos.x + 5, pos.y - 1, c_player);
	gfx.PutPixel(pos.x - 6, pos.y + 1, c_player);
	gfx.PutPixel(pos.x + 6, pos.y + 1, c_player);
	gfx.PutPixel(pos.x - 6, pos.y - 1, c_player);
	gfx.PutPixel(pos.x + 6, pos.y - 1, c_player);
	gfx.PutPixel(pos.x - 7, pos.y, c_player);
	gfx.PutPixel(pos.x + 7, pos.y, c_player);
	//Neck
	gfx.PutPixel(pos.x, pos.y - 1, c_player);
	gfx.PutPixel(pos.x, pos.y - 2, c_player);
	gfx.PutPixel(pos.x, pos.y - 3, c_player);
	gfx.PutPixel(pos.x, pos.y - 4, c_player);
	gfx.PutPixel(pos.x, pos.y - 5, c_player);
	//Head
	gfx.PutPixel(pos.x, pos.y - 5, c_player);
	gfx.PutPixel(pos.x + 1, pos.y - 5, c_player);
	gfx.PutPixel(pos.x - 1, pos.y - 5, c_player);
	gfx.PutPixel(pos.x + 2, pos.y - 5, c_player);
	gfx.PutPixel(pos.x - 2, pos.y - 5, c_player);
	gfx.PutPixel(pos.x, pos.y - 6, c_player);
	gfx.PutPixel(pos.x + 1, pos.y - 6, c_player);
	gfx.PutPixel(pos.x - 1, pos.y - 6, c_player);
	gfx.PutPixel(pos.x + 2, pos.y - 6, c_player);
	gfx.PutPixel(pos.x - 2, pos.y - 6, c_player);
	gfx.PutPixel(pos.x, pos.y - 7, c_player);
	gfx.PutPixel(pos.x + 1, pos.y - 7, c_player);
	gfx.PutPixel(pos.x - 1, pos.y - 7, c_player);
	gfx.PutPixel(pos.x + 2, pos.y - 7, c_player);
	gfx.PutPixel(pos.x - 2, pos.y - 7, c_player);
	gfx.PutPixel(pos.x + 1, pos.y - 8, 255, 255, 255);
	gfx.PutPixel(pos.x - 1, pos.y - 8, 255, 255, 255);
	gfx.PutPixel(pos.x, pos.y - 8, c_player);
	gfx.PutPixel(pos.x + 2, pos.y - 8, c_player);
	gfx.PutPixel(pos.x - 2, pos.y - 8, c_player);
	gfx.PutPixel(pos.x, pos.y - 9, c_player);
	gfx.PutPixel(pos.x + 1, pos.y - 9, c_player);
	gfx.PutPixel(pos.x - 1, pos.y - 9, c_player);
	gfx.PutPixel(pos.x + 2, pos.y - 9, c_player);
	gfx.PutPixel(pos.x - 2, pos.y - 9, c_player);
	//Bodpos.y
	gfx.PutPixel(pos.x, pos.y + 1, c_player);
	gfx.PutPixel(pos.x, pos.y + 2, c_player);
	gfx.PutPixel(pos.x, pos.y + 3, c_player);
	gfx.PutPixel(pos.x, pos.y + 4, c_player);
	gfx.PutPixel(pos.x, pos.y + 5, c_player);
	gfx.PutPixel(pos.x, pos.y + 6, c_player);
	//Legs
	gfx.PutPixel(pos.x + 1, pos.y + 7, c_player);
	gfx.PutPixel(pos.x - 1, pos.y + 7, c_player);
	gfx.PutPixel(pos.x + 2, pos.y + 8, c_player);
	gfx.PutPixel(pos.x - 2, pos.y + 8, c_player);
	gfx.PutPixel(pos.x + 2, pos.y + 9, c_player);
	gfx.PutPixel(pos.x - 2, pos.y + 9, c_player);
	gfx.PutPixel(pos.x + 3, pos.y + 10, c_player);
	gfx.PutPixel(pos.x - 3, pos.y + 10, c_player);
	gfx.PutPixel(pos.x + 4, pos.y + 11, c_player);
	gfx.PutPixel(pos.x - 4, pos.y + 11, c_player);
}
