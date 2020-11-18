#ifndef ZLOMOK_H
#define ZLOMOK_H

#include <ostream>
using namespace std;

class Zlomok{
public:
    Zlomok();
    Zlomok(int cit, int men = 1) throw (string);
	int Citatel() const {return citatel;}
	int Menovatel() const {return menovatel;}
    operator double ();
    Zlomok const operator +(Zlomok const &iny);
    Zlomok const operator -();
    Zlomok & operator += (Zlomok const &iny);
    Zlomok const operator -(Zlomok const &iny);
    Zlomok const operator *(Zlomok const &iny);
    Zlomok & operator *=(Zlomok const &iny);
    Zlomok & operator -=(Zlomok const &iny);
    Zlomok const operator /(Zlomok const &iny) throw (string);
    Zlomok & operator /= (Zlomok const &iny) throw (string);
protected:
    int citatel;
    int menovatel;
private:
    void ZakladnyTvar();
};

ostream &operator<<(ostream &stream, Zlomok const &z);

#endif
