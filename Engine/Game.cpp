/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	player(Vec2{200,200})
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	player.Update(wnd.kbd);
}

void Game::ComposeFrame()
{
	player.Draw(gfx);

	int x = 400;
	int y = 300;
	int r = 255;
	int g = 255;
	int b = 255;

	//Center
	gfx.PutPixel(x, y, r, g, b);
	//Arms
	gfx.PutPixel(x + 1, y, r, g, b);
	gfx.PutPixel(x + 2, y, r, g, b);
	gfx.PutPixel(x + 3, y, r, g, b);
	gfx.PutPixel(x + 4, y, r, g, b);
	gfx.PutPixel(x + 5, y, r, g, b);
	gfx.PutPixel(x - 1, y, r, g, b);
	gfx.PutPixel(x - 2, y, r, g, b);
	gfx.PutPixel(x - 3, y, r, g, b);
	gfx.PutPixel(x - 4, y, r, g, b);
	gfx.PutPixel(x - 5, y, r, g, b);
	//Hands
	gfx.PutPixel(x - 5, y + 1, r, g, b);
	gfx.PutPixel(x + 5, y + 1, r, g, b);
	gfx.PutPixel(x - 5, y - 1, r, g, b);
	gfx.PutPixel(x + 5, y - 1, r, g, b);
	gfx.PutPixel(x - 6, y + 1, r, g, b);
	gfx.PutPixel(x + 6, y + 1, r, g, b);
	gfx.PutPixel(x - 6, y - 1, r, g, b);
	gfx.PutPixel(x + 6, y - 1, r, g, b);
	//Neck
	gfx.PutPixel(x, y - 1, r, g, b);
	gfx.PutPixel(x, y - 2, r, g, b);
	gfx.PutPixel(x, y - 3, r, g, b);
	gfx.PutPixel(x, y - 4, r, g, b);
	gfx.PutPixel(x, y - 5, r, g, b);
	//Head
	gfx.PutPixel(x, y - 5, r, g, b);
	gfx.PutPixel(x + 1, y - 5, r, g, b);
	gfx.PutPixel(x - 1, y - 5, r, g, b);
	gfx.PutPixel(x + 2, y - 5, r, g, b);
	gfx.PutPixel(x - 2, y - 5, r, g, b);
	gfx.PutPixel(x, y - 6, r, g, b);
	gfx.PutPixel(x + 1, y - 6, r, g, b);
	gfx.PutPixel(x - 1, y - 6, r, g, b);
	gfx.PutPixel(x + 2, y - 6, r, g, b);
	gfx.PutPixel(x - 2, y - 6, r, g, b);
	gfx.PutPixel(x, y - 7, r, g, b);
	gfx.PutPixel(x + 1, y - 7, r, g, b);
	gfx.PutPixel(x - 1, y - 7, r, g, b);
	gfx.PutPixel(x + 2, y - 7, r, g, b);
	gfx.PutPixel(x - 2, y - 7, r, g, b);
	gfx.PutPixel(x, y - 8, r, g, b);
	gfx.PutPixel(x + 1, y - 8, r, g, b);
	gfx.PutPixel(x - 1, y - 8, r, g, b);
	gfx.PutPixel(x + 2, y - 8, r, g, b);
	gfx.PutPixel(x - 2, y - 8, r, g, b);
	//Body
	gfx.PutPixel(x, y + 1, r, g, b);
	gfx.PutPixel(x, y + 2, r, g, b);
	gfx.PutPixel(x, y + 3, r, g, b);
	gfx.PutPixel(x, y + 4, r, g, b);
	gfx.PutPixel(x, y + 5, r, g, b);
	gfx.PutPixel(x, y + 6, r, g, b);
	gfx.PutPixel(x, y + 7, r, g, b);
	//Legs
	gfx.PutPixel(x + 1, y + 8, r, g, b);
	gfx.PutPixel(x - 1, y + 8, r, g, b);
	gfx.PutPixel(x + 2, y + 9, r, g, b);
	gfx.PutPixel(x - 2, y + 9, r, g, b);
	gfx.PutPixel(x + 2, y + 10, r, g, b);
	gfx.PutPixel(x - 2, y + 10, r, g, b);
	gfx.PutPixel(x + 3, y + 11, r, g, b);
	gfx.PutPixel(x - 3, y + 11, r, g, b);

}
