#include "KorttiEsittely.h"
#include "KorttiPakkaEsittely.h"
#include <iostream>
void Kortti::AsetaArvo(int arvo) {
	kortinNumero_ = arvo;
}

void Kortti::AsetaMaa(int maa) {
	kortinMaa_ = maa;
}

void Kortti::KerroSääntö(int kortinNumero) {
	switch (kortinNumero)
	{
	case 1:
		std::cout << "Vesiputous" << std::endl;
		break;
	case 2:
		std::cout << "Anna 3" << std::endl;
		break;
	case 3:
		std::cout << "Ota 3" << std::endl;
		break;
	case 4:
		std::cout << "Huutakaa Elias! - viimeinen huutaja juo 3" << std::endl;
		break;
	case 5:
		std::cout << "Huutakaa Elias! - viimeinen huutaja juo 3" << std::endl;
		break;
	case 6:
		std::cout << "123" << std::endl;
		break;
	case 7:
		std::cout << "Kategoria" << std::endl;
		break;
	case 8:
		std::cout << "Saanto" << std::endl;
		break;
	case 9:
		std::cout << "Kysymyspeli" << std::endl;
		break;
	case 10:
		std::cout << "Tarina" << std::endl;
		break;
	case 11:
		std::cout << "Kysymysmestari" << std::endl;
		break;
	case 12:
		std::cout << "Huora" << std::endl;
		break;
	case 13:
		std::cout << "Kuningashorppy" << std::endl;
		break;
	default:
		std::cout << "Unknown error has occured, please wait while we dispatch army of well trained monkeys to your GPS location..." << std::endl;
		break;
	}
}

int Kortti::AnnaMaa() {
	return kortinMaa_;
}
int Kortti::AnnaArvo() {
	return kortinNumero_;
}
void Kortti::TulostaKortti(int maa, int kortinNumero) {
	if (maa == 1)
		maanTulostus = "Hertta";
	else if (kortinMaa_ == 2)
		maanTulostus = "Ruutu";
	else if (kortinMaa_ == 3)
		maanTulostus = "Pata";
	else
	{
		maanTulostus = "Risti";
	}

	switch (kortinNumero)
	{
	case 1:
		arvonTulostus = "Assa";
		break;
	case 2:
		arvonTulostus = "Kakkonen";
		break;
	case 3:
		arvonTulostus = "Kolmonen";
		break;
	case 4:
		arvonTulostus = "Nelonen";
		break;
	case 5:
		arvonTulostus = "Vitonen";
		break;
	case 6:
		arvonTulostus = "Kutonen";
		break;
	case 7:
		arvonTulostus = "Seiska";
		break;
	case 8:
		arvonTulostus = "Kasi";
		break;
	case 9:
		arvonTulostus = "Ysi";
		break;
	case 10:
		arvonTulostus = "Kymppi";
		break;
	case 11:
		arvonTulostus = "Jatka";
		break;
	case 12:
		arvonTulostus = "Kuningatar";
		break;
	case 13:
		arvonTulostus = "Kuningas";

	default:
		break;
	}

	std::cout << maanTulostus << " " << arvonTulostus << std::endl;
	KerroSääntö(kortinNumero_);
}
