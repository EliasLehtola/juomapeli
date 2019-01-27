#include "mainHeader.h"

int main() {
	KorttiPakka* uusi = new KorttiPakka(); //Osoitinobjekti KorttiPakka luokkaan
	srand(time(0)); //Alustetaan aika
	PelinAlustus(pelaajienNimet, pelaajienM‰‰r‰, numerot, uusi);

	for (int x = 0; x < 52; x++) {
		PelataanKortti(uusi, numerot[x], kenenVuoro, pelaajienM‰‰r‰, pelaajienNimet[kenenVuoro-1]);
		kenenVuoro = Vuoro(kenenVuoro, pelaajienM‰‰r‰);
	}

	PelinLopetus();

	system("pause");
	return 0;
}