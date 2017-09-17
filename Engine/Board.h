#pragma once
#include "Graphics.h"

class Board
{
public: 
	void Draw(Graphics& gfx); 
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
	Color sudoku = { 141,205,193 }; 
	Color number = { 211,227,151 }; 
};