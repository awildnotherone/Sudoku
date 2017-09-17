#include "Board.h"

void Board::Draw(Graphics & gfx)
{
	gfx.DrawRect(x, y, 100, 100, 200, 200, 5, { 255,0,255 }); 
	}
