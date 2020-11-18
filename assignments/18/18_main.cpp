#include "18_utvar.h"
#include <allegro.h>

int main()
{
	inicializuj_vsetko();
	
	Utvar u;
	while(!key[KEY_ESC])
	{
		u.Posun();
		rest(50);
	}
	return 0;
}
END_OF_MAIN();
