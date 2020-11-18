#include "19_zlomok.h"
#include <sstream>

#define abs(x) ((x) < 0 ? -(x) : (x))

Zlomok::Zlomok():citatel(0),menovatel(1)
{
}

Zlomok::Zlomok(int cit, int men) throw (string):citatel(cit), menovatel(men)
{
    if (men == 0)
	{
		ostringstream ostr("", ios::ate);
		ostr << "Konstruktor triedy zlomok volany s menovatelom 0. \nSubor: "
		     <<  __FILE__
		     << "\nRiadok: "
			 << __LINE__ << "\n";
        throw ostr.str();
	}
	ZakladnyTvar();
}

void Zlomok::ZakladnyTvar()
{
	if (citatel == 0)
	{
		menovatel = 1;
		return;
	}
    int sign = 1;
    if (citatel < 0)
        sign *= -1;
    if (menovatel < 0)
        sign *= -1;
    citatel = abs(citatel);
	menovatel = abs(menovatel);
	
	/* Euklidovym algoritmom najdeme NSD - nakoniec bude v premennej b */
	int a = citatel > menovatel ? citatel : menovatel;
	int b = citatel > menovatel ? menovatel : citatel;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	
	citatel /= b;
	menovatel /= b;
	citatel *= sign;
}

ostream &operator<<(ostream &stream, Zlomok const &z)
{
	return stream << z.Citatel() << "/" << z.Menovatel();
}

Zlomok::operator double ()
{
    return citatel / (double) menovatel;
}

Zlomok const Zlomok::operator +(Zlomok const &iny)
{
	Zlomok z;
	z.menovatel = menovatel * iny.Menovatel();
	z.citatel = citatel * iny.Menovatel() + menovatel * iny.Citatel();
	z.ZakladnyTvar();
	return z;
}

Zlomok const Zlomok::operator -()
{
    Zlomok z(citatel, menovatel);
	z.citatel *= -1;
	return z;
}

Zlomok & Zlomok::operator += (Zlomok const &iny)
{
    int c = citatel;
	int m = menovatel;
	menovatel = m * iny.Menovatel();
	citatel = c * iny.Menovatel() + m * iny.Citatel();
	ZakladnyTvar();
	return *this;
}


Zlomok const Zlomok::operator -(Zlomok const &iny)
{
    return (*this) + Zlomok(-1) * iny;
}

Zlomok const Zlomok::operator *(Zlomok const &iny)
{
    Zlomok z(citatel*iny.Citatel(),menovatel*iny.Menovatel());
	return z;
}

Zlomok & Zlomok::operator *=(Zlomok const &iny)
{
    citatel *= iny.Citatel();
	menovatel *= iny.Menovatel();
	ZakladnyTvar();
	return *this;
}

Zlomok & Zlomok::operator -=(Zlomok const &iny)
{
    (*this ) += Zlomok(-1) * iny;
	return *this;
}

Zlomok const Zlomok::operator /(Zlomok const &iny) throw (string)
{
    if (iny.Citatel() == 0)
	{
		ostringstream ostr("", ios::ate);
		ostr << "Delenie zlomkom s hodnotou 0. \nSubor: "
		     <<  __FILE__
		     << "\nRiadok: "
			 << __LINE__ << "\n";
        throw ostr.str();
	}
	Zlomok z(citatel * iny.Menovatel(), menovatel * iny.Citatel());
	return z;
}

Zlomok & Zlomok::operator /= (Zlomok const &iny) throw (string)
{
    if (iny.Citatel() == 0)
	{
		ostringstream ostr("", ios::ate);
		ostr << "Delenie zlomkom s hodnotou 0. \nSubor: "
		     <<  __FILE__
		     << "\nRiadok: "
			 << __LINE__ << "\n";
        throw ostr.str();
	}
	citatel *= iny.Menovatel();
	menovatel *= iny.Citatel();
	ZakladnyTvar();
	return *this;
}
