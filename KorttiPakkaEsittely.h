#ifndef KORTTIPAKKAESITTELY_H
#define KORTTIPAKKAESITTELY_H
#include "KorttiEsittely.h"
class KorttiPakka {
public:
	KorttiPakka();
	void KorteilleArvot();
	void TulostaKorttiPakasta(int kortinnumero);
private:
	Kortti ValmisPakka[52];
};

#endif // !KORTTIPAKKAESITTELY_H

