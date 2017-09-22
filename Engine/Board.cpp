#include "Board.h"

void Board::Draw(Graphics & gfx)
{
	// draws border around window
	gfx.DrawRect(x, y, 0, 0, (gfx.ScreenWidth-6), (gfx.ScreenHeight-6), windowborder, { 255,255,255 }); 

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

void Board::DrawCursor(Graphics & gfx)
{
	gfx.DrawRect(x, y, cursorx, cursory,cursorwidth, cursorheight, cursorborder, cursor);
}

void Board::UpdateCursor(Keyboard & kbd)
{
		if (kbd.KeyIsPressed(VK_LEFT))
		{
			if (InhibitLeft)
			{
			}
			else
			{
				cursorx -= numberwidth;
				InhibitLeft = true;
			}
		}
		else
		{
			InhibitLeft = false;
		}

		if (kbd.KeyIsPressed(VK_RIGHT))
		{
			if (InhibitRight)
			{
			}
			else
			{
				cursorx += numberwidth;
				InhibitRight = true;
			}
		}
		else
		{
			InhibitRight = false;
		}

		if (kbd.KeyIsPressed(VK_UP))
		{
			if (InhibitUp)
			{
			}
			else
			{
				cursory -= numberheight;
				InhibitUp = true;
			}
		}
		else
		{
			InhibitUp = false;
		}

		if (kbd.KeyIsPressed(VK_DOWN))
		{
			if (InhibitDown)
			{
			}
			else
			{
				cursory += numberheight;
				InhibitDown = true;
			}
		}
		else
		{
			InhibitDown = false;
		}
}

void Board::ClampCursor()
{
	if (cursorx <= (sudokuleftx+sudokuboxborder+space))
	{
		cursorx = (sudokuleftx + space); 
	}

	if (cursorx >= (sudokuleftx + (numberwidth)*8))
	{
		cursorx = (sudokuleftx + (numberwidth) * 8 + space);
	}
	// 
	if (cursory <= (sudokutopy + sudokuboxborder + space))
	{
		cursory= (sudokutopy + space);
	}
	//

	if (cursory >= (sudokutopy+ (numberheight) * 8))
	{
		cursory = (sudokutopy + (numberheight) * 8 + space);
	}
}
