#include "18_utvar.h"
#include <allegro.h>
#include <math.h>

int inicializuj_vsetko()
{
        allegro_init();
        install_keyboard();
        install_mouse();
        set_color_depth(24);
        if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0) != 0)
        {
                allegro_message("Nepodarilo sa inicializovat graficky rezim");
                return 0;
        }
	clear_to_color(screen,makecol(0,0,0));
}

Utvar::Utvar()
{
	color = makecol(255,0,0);
	alfa = 0.;
	Posun();
}

void Utvar::Poloha(int &x, int &y)
{
	x = SCREEN_W / 2;
	y = SCREEN_H / 2;
	x += int(200 * sin(alfa));
	y += int(200 * cos(alfa));
}

void Utvar::Kresli(int x, int y, int color)
{
	circlefill(screen,x,y,5,color); 
}

void Utvar::Posun()
{
	int x,y;
	Poloha(x,y);
	vsync();
	Kresli(x,y,makecol(0,0,0));
	alfa += 0.05;
	Poloha(x,y);
	Kresli(x,y,color);
}
