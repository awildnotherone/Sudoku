#include "Numbers.h"

void One::Draw(Graphics & gfx)
{
	for (x=LeftX; x<(LeftX+width+1);x++)
		for(y=TopY; y<(TopY+height+1); y++)
			for (n = 0; n < 5; n++)
			{
				gfx.DrawNumberPixel(x, y, LeftX, (TopY + height*n), width, height, { 255,255,255 }); 
				gfx.DrawNumberPixel(x, y, (LeftX - width), (TopY + height), width, height, { 255,255,255 }); 
				gfx.DrawNumberPixel(x, y, (LeftX - width * 2), (TopY + height * 2), width, height, { 255,255,255 }); 
			}
	
}

void Two::Draw(Graphics & gfx)
{
	for (x=LeftX;x<(LeftX+width+1);x++)
		for(y=TopY; y<(TopY+height+1);y++)
			for (n = 1; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, LeftX + width*n, TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX - 1), (TopY + height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 3), (TopY + height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 2), (TopY + height*2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width), (TopY + height*3), width, height, { 255,255,255 });
			}
	for (x = LeftX; x<(LeftX + width + 1); x++)
		for (y = TopY; y<(TopY + height + 1); y++)
			for (n = 1; n < 5; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX - width + width*n), (TopY + height * 4), width, height, { 255,255,255 }); 
			}
}

void Three::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 1; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX - 1), (TopY + height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 3), (TopY + height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 2), (TopY + height * 2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX - 1), (TopY + height*3), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 3), (TopY + height*3), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY+height*4), width, height, { 255,255,255 });
			}
}

void Four::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 5; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX+width*2), (TopY + height*n), width, height, { 255,255,255 });
			}
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, LeftX, (TopY + height*n), width, height, { 255,255,255 });
			}
	gfx.DrawNumberPixel(x, y, (LeftX+width), (TopY + height*2), width, height, { 255,255,255 });
}

void Five::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX+width*n), TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, LeftX, (TopY + height), width, height, { 255,255,255 }); 
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY+height*2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*2), (TopY+height*3), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY + height * 4), width, height, { 255,255,255 });
			}
}

void Six::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY+height*2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY+height*4), width, height, { 255,255,255 });
			}
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 5; n++)
			{
				gfx.DrawNumberPixel(x, y, LeftX, (TopY+height*n), width, height, { 255,255,255 });
			}
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 2; n < 5; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX+width*2), (TopY + height*n), width, height, { 255,255,255 });
			}
}

void Seven::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 4; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX + width * n), TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*3), (TopY+height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 2), (TopY + height*2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width), (TopY + height*3), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX), (TopY + height*4), width, height, { 255,255,255 });
			}
}

void Eight::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 1; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX - 1), (TopY + height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 3), (TopY + height), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 2), (TopY + height * 2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width), (TopY + height * 2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX - 1), (TopY + height * 3), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width * 3), (TopY + height * 3), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY + height * 4), width, height, { 255,255,255 });
			}
}

void Nine::Draw(Graphics & gfx)
{
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 3; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), TopY, width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY + height * 2), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, (LeftX + width*n), (TopY + height * 4), width, height, { 255,255,255 });
			}
	for (x = LeftX; x < (LeftX + width + 1); x++)
		for (y = TopY; y < (TopY + height + 1); y++)
			for (n = 0; n < 4; n++)
			{
				gfx.DrawNumberPixel(x, y, (LeftX + width*2), (TopY + height * n), width, height, { 255,255,255 });
				gfx.DrawNumberPixel(x, y, LeftX, (TopY + height), width, height, { 255,255,255 });
			}
}
