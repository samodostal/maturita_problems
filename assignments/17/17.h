#ifndef __17_H__
#define __17_H__

#include <allegro.h>

int inicializuj_vsetko();

class Kruh
{
public:
	Kruh();
	void Hore();
	void Dolu();
	void Vpravo();
	void Vlavo();
	bool SmeDoma();
private:
	int x;
	int y;
};

#endif // __17_H__
