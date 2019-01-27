#ifndef KORTTIESITTELY_H
#define KORTTIESITTELY_H

#include <string>
class Kortti {
public:
	void AsetaMaa(int maa);
	int AnnaMaa();
	void AsetaArvo(int arvo);
	int AnnaArvo();
	void TulostaKortti(int maa, int kortinNumero);
	void KerroSääntö(int kortinNumero);

private:
	int kortinMaa_; //1 = Hertta, 2 = Ruutu, 3 = Pata, 4 = Risti
	int kortinNumero_; //2-A
	std::string maanTulostus;
	std::string arvonTulostus;
};

#endif // !KORTTIESITTELY_H
