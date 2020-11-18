#ifndef __UTVAR__
#define __UTVAR__

int inicializuj_vsetko();

class Utvar {
public:
	Utvar();
	virtual void Kresli(int x, int y, int color);
	void Posun();
private:
	float alfa;
	void Poloha(int &x, int &y);
protected:
	int color;
};


#endif
