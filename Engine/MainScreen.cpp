#include "MainScreen.h"

MainScreen::MainScreen()
{
	Play = Rect(Pos_Play, 50, 50);
	Test = Rect(Pos_Test, 50, 50);
}

void MainScreen::UpdateScreen(Mouse & mouse)
{
	Vec2 MousePos = mouse.GetPos();

	if (mouse.LeftIsPressed())
	{
		if (Play.IsColliding(MousePos))
		{
			PressedPlay = true;
		}
		else if (Test.IsColliding(MousePos))
		{
			PressedTest = true;
		}
	}
}

void MainScreen::DrawScreen(Graphics & gfx)
{
	gfx.DrawRect(Play, c_play);
	gfx.DrawRect(Test, c_test);
}

bool MainScreen::GetPressedPlay()
{
	return PressedPlay;
}

bool MainScreen::GetPressedTest()
{
	return PressedTest;
}
