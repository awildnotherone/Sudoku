#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Board
{
public: 
	void Draw(Graphics& gfx); 
	void DrawCursor(Graphics&gfx); 
	void UpdateCursor(Keyboard& kbd); 
	void ClampCursor();

	bool InhibitLeft = false;
	bool InhibitRight = false;
	bool InhibitUp = false;
	bool InhibitDown = false;

private: 
	int x; 
	int y;
	int windowborder = 5; 
	int sudokuleftx = windowborder + 16; 
	int sudokutopy = windowborder + 11; 
	int sudokuwidth = 550; 
	int sudokuheight = 450; 
	int sudokuboxborder = 3; 
	int numberboxborder = 1;  
	int numberheight=50; 
	int numberwidth=61; 
	int n; 
	int space = 5;
	int cursorx = (sudokuleftx + space); 
	int cursory = (sudokutopy + space); 
	float cursorwidth = (float(numberwidth) - float(space)*1.5f); 
	float cursorheight = (float(numberheight) - float(space)*1.5f);
	int cursorborder = 1; 
	
	Color sudoku = { 141,205,193 }; 
	Color number = { 211,227,151 }; 
	Color cursor = { 255,255,255 }; 
};