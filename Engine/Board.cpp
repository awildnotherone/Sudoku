#include "Board.h"

void Board::Draw(Graphics & gfx)
{
	// draws border around window
	gfx.DrawRect(x, y, 0, 0, (gfx.ScreenWidth-6), (gfx.ScreenHeight-6), 5, { 255,255,255 }); 

	// draws sudoku box
	gfx.DrawRect(x, y, sudokuleftx, sudokutopy, sudokuwidth, sudokuheight, sudokuboxborder, sudoku); 

	// draws lines horizontally
	for (n = 1; n < 9; n++)
	{
		gfx.DrawHorizontal(x, y, sudokuleftx, (sudokutopy + numberheight*n), sudokuwidth, numberboxborder, number);
		gfx.DrawHorizontal(x, y, sudokuleftx, (sudokutopy + numberheight*3), sudokuwidth, sudokuboxborder, sudoku);
		gfx.DrawHorizontal(x, y, sudokuleftx, (sudokutopy + numberheight * 6), sudokuwidth, sudokuboxborder, sudoku);
	}
	// draws lines vertically
	for (n = 1; n < 9; n++)
	{
		gfx.DrawVertical(x, y, (sudokuleftx + numberwidth*n), (sudokutopy+sudokuboxborder), sudokuheight, numberboxborder, number);
		gfx.DrawVertical(x, y, (sudokuleftx + numberwidth * 3), (sudokutopy + sudokuboxborder), (sudokuheight - sudokuboxborder), sudokuboxborder, sudoku);
		gfx.DrawVertical(x, y, (sudokuleftx + numberwidth * 6), (sudokutopy + sudokuboxborder), (sudokuheight - sudokuboxborder), sudokuboxborder, sudoku);
	}
	}
