#include "Enemy.h"

Enemy::Enemy(const Vec2 & in_pos)
{
	pos = in_pos;
	rect = Rect(pos, width, height);
}

void Enemy::Update()
{
	rect = Rect(pos, width, height);
	// TODO Make a movement pattern for the enemy 
}

void Enemy::Draw(Graphics & gfx)
{
	// TODO draw an enemy
}

Rect Enemy::GetRect()
{
	return rect;
}
