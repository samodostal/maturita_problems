#ifndef SVAB_H
#define SVAB_H

#include <allegro.h>

class Svab{
public:
    Svab();
    void Krok();
    void Kliknute(int mx, int my);
private:
	int x;
	int y;
	float smer;
	bool zije;
};

int inicializuj_vsetko();

#endif
