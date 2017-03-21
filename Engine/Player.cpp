#include "Player.h"

Player::Player(const Vec2 & in_pos)
{
	pos = in_pos;
	rect = Rect(pos, width, height);
}

void Player::Update(Keyboard & kbd)
{
	if (kbd.KeyIsPressed('A')) pos += Vec2{ -1,0 };
	if (kbd.KeyIsPressed('D')) pos += Vec2{ 1,0 };
	if (kbd.KeyIsPressed('W')) pos += Vec2{ 0,-1 };
	if (kbd.KeyIsPressed('S')) pos += Vec2{ 0,1 };
	rect = Rect(pos, width, height);
}

bool Player::IsCollidingEnemy(Rect & rect2)
{
	return rect.IsColliding(rect2);
}

void Player::Draw(Graphics & gfx)
{
	//Center
	gfx.PutPixel(int(pos.x), int(pos.y), c_player);
	//Arms
	gfx.PutPixel(int(pos.x + 1), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x + 3), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x + 4), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x + 5), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x - 3), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x - 4), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x - 5), int(pos.y), c_player);
	//Hands
	gfx.PutPixel(int(pos.x - 5), int(pos.y + 1), c_player);
	gfx.PutPixel(int(pos.x + 5), int(pos.y + 1), c_player);
	gfx.PutPixel(int(pos.x - 5), int(pos.y - 1), c_player);
	gfx.PutPixel(int(pos.x + 5), int(pos.y - 1), c_player);
	gfx.PutPixel(int(pos.x - 6), int(pos.y + 1), c_player);
	gfx.PutPixel(int(pos.x + 6), int(pos.y + 1), c_player);
	gfx.PutPixel(int(pos.x - 6), int(pos.y - 1), c_player);
	gfx.PutPixel(int(pos.x + 6), int(pos.y - 1), c_player);
	gfx.PutPixel(int(pos.x - 7), int(pos.y), c_player);
	gfx.PutPixel(int(pos.x + 7), int(pos.y), c_player);
	//Neck
	gfx.PutPixel(int(pos.x), int(pos.y - 1), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y - 2), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y - 3), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y - 4), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y - 5), c_player);
	//Head
	gfx.PutPixel(int(pos.x),     int(pos.y - 5), c_player);
	gfx.PutPixel(int(pos.x + 1), int(pos.y - 5), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y - 5), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y - 5), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y - 5), c_player);
	gfx.PutPixel(int(pos.x),     int(pos.y - 6), c_player);
	gfx.PutPixel(int(pos.x + 1), int(pos.y - 6), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y - 6), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y - 6), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y - 6), c_player);
	gfx.PutPixel(int(pos.x),     int(pos.y - 7), c_player);
	gfx.PutPixel(int(pos.x + 1), int(pos.y - 7), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y - 7), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y - 7), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y - 7), c_player);
	gfx.PutPixel(int(pos.x + 1), int(pos.y - 8), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y - 8), c_player);
	gfx.PutPixel(int(pos.x),     int(pos.y - 8), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y - 8), Colors::White);
	gfx.PutPixel(int(pos.x - 2), int(pos.y - 8), Colors::White);
	gfx.PutPixel(int(pos.x),	 int(pos.y - 9), c_player);
	gfx.PutPixel(int(pos.x + 1), int(pos.y - 9), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y - 9), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y - 9), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y - 9), c_player);
	//Bodint(pos.y
	gfx.PutPixel(int(pos.x), int(pos.y + 1), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y + 2), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y + 3), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y + 4), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y + 5), c_player);
	gfx.PutPixel(int(pos.x), int(pos.y + 6), c_player);
	//Legs
	gfx.PutPixel(int(pos.x + 1), int(pos.y + 7), c_player);
	gfx.PutPixel(int(pos.x - 1), int(pos.y + 7), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y + 8), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y + 8), c_player);
	gfx.PutPixel(int(pos.x + 2), int(pos.y + 9), c_player);
	gfx.PutPixel(int(pos.x - 2), int(pos.y + 9), c_player);
	gfx.PutPixel(int(pos.x + 3), int(pos.y + 10), c_player);
	gfx.PutPixel(int(pos.x - 3), int(pos.y + 10), c_player);
	gfx.PutPixel(int(pos.x + 4), int(pos.y + 11), c_player);
	gfx.PutPixel(int(pos.x - 4), int(pos.y + 11), c_player);
}
