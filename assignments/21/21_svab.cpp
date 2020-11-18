#include "21_svab.h"
#include <math.h>

int inicializuj_vsetko()
{
		srandom(time(NULL));
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
		return 1;
}


Svab::Svab()
{
	x = random() % SCREEN_W;
	y = random() % SCREEN_H;
	smer = (random() % 628) / 100.0;
	zije = true;
	show_mouse(NULL);
	circlefill(screen,x,y,10,makecol(164,127,0));
	show_mouse(screen);

}


void Svab::Krok()
{
	if (zije)
	{
		int nx, ny, i = 20;
		float ns;
		show_mouse(NULL);
    	circlefill(screen,x,y,10,makecol(0,0,0));
		do
		{
			ns = smer + (random() % i - i/2) / 100.0;
			nx = x + (int) (5 * sinf(ns));
			ny = y + (int) (5 * cosf(ns));
			i += 20;
		} while ((nx < 0) || (ny < 0) || (nx >= SCREEN_W) || (ny >= SCREEN_H));
		smer = ns;
		x = nx;
		y = ny;
		circlefill(screen,x,y,10,makecol(164,127,0));
		show_mouse(screen);
	}
}


void Svab::Kliknute(int mx, int my)
{
	if (zije)
		if ((x - mx)*(x - mx) + (y - my)*(y - my) <= 100)
		{
			show_mouse(NULL);
			circlefill(screen,x,y,10,makecol(0,0,0));
			show_mouse(screen);
			zije = false;
		}
}
