#pragma once
#include "Vec2.h"
#include "Rect.h"
#include "Graphics.h"
#include "Mouse.h"

class MainScreen
{
public:
	MainScreen();
	void UpdateScreen(Mouse& mouse);
	void DrawScreen(Graphics& gfx);
	bool GetPressedPlay();
	bool GetPressedTest();
private:
	Vec2 Pos_Play = { 50,50 };
	Vec2 Pos_Test = { 50,150 };
	Rect Play;
	Rect Test;
	bool PressedPlay = false;
	bool PressedTest = false;
	static constexpr Color c_play = Colors::Green;
	static constexpr Color c_test = Colors::Blue;
};