#include "17.h"

#define Rr 10

int koniec = 0;

int inicializuj_vsetko()
{
	BITMAP* bitmapa;
	
	allegro_init();
        install_keyboard();
        install_mouse();
        set_color_depth(24);
        if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0) != 0)
	{      
		allegro_message("Nepodarilo sa inicializovat graficky rezim");
		return 0;
	}
	bitmapa = load_bitmap("17.tga",NULL);
	if (bitmapa == NULL)
	{
		allegro_message("Nepodarilo sa nacitat bitmapu 17.tga");
		return 0;
	}
	blit(bitmapa, screen, 0, 0, 0, 0, 640, 480);
}

bool JeTamStena(int x, int y)
{
	for(int i = 0; i < 255; i+=4)
	{
		fixed angle = itofix(i);
		int ix = x + fixtoi(fixmul(itofix(Rr),fixcos(angle)));
		int iy = y + fixtoi(fixmul(itofix(Rr),fixsin(angle)));
		int color = getpixel(screen,ix,iy);
		if (getr(color) == 255 && getg(color) == 0 && getb(color) == 0)
			return true;
	}
	return false;
}

bool JeTamKoniec(int x, int y)
{
	for(int i = 0; i < 255; i+=4)
	{
		fixed angle = itofix(i);
		int ix = x + fixtoi(fixmul(itofix(Rr),fixcos(angle)));
		int iy = y + fixtoi(fixmul(itofix(Rr),fixsin(angle)));
		int color = getpixel(screen,ix,iy);
		if (getr(color) == 0 && getg(color) == 255 && getb(color) == 0)
			return true;
	}
	return false;
}

Kruh::Kruh()
{
	x = 30;
	y = 450;
	circlefill(screen,x,y,Rr,makecol(255,255,128));
}

void Kruh::Hore()
{
	if (!JeTamStena(x,y-4))
	{
		vsync();
		circlefill(screen,x,y,Rr,makecol(0,0,0));
		y -= 4;
		circlefill(screen,x,y,Rr,makecol(255,255,128));
	}
}

void Kruh::Dolu()
{
	if (!JeTamStena(x,y+4))
	{
		vsync();
		circlefill(screen,x,y,Rr,makecol(0,0,0));
		y+=4;
		circlefill(screen,x,y,Rr,makecol(255,255,128));
	}
}

void Kruh::Vpravo()
{
	if (JeTamKoniec(x+4,y))
		koniec = 1;
	if (!JeTamStena(x+4,y))
	{
		vsync();
		circlefill(screen,x,y,Rr,makecol(0,0,0));
		x+=4;
		circlefill(screen,x,y,Rr,makecol(255,255,128));
	}
}

void Kruh::Vlavo()
{
	if (!JeTamStena(x-4,y))
	{
		vsync();
		circlefill(screen,x,y,Rr,makecol(0,0,0));
		x-=4;
		circlefill(screen,x,y,Rr,makecol(255,255,128));
	}
}

bool Kruh::SmeDoma()
{
	return koniec;
}
