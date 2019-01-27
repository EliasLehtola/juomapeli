
#include "KorttiPakkaEsittely.h"
#include "KorttiEsittely.h"
KorttiPakka::KorttiPakka() {

}

void KorttiPakka::KorteilleArvot() {

	int maa = 1;
	int arvo = 1;

	for (int x = 0; x < 52; x++) {
		ValmisPakka[x].AsetaArvo(arvo);
		ValmisPakka[x].AsetaMaa(maa);
		arvo++;
		if (arvo == 14) {
			arvo = 1;
			maa++;
		}
	}
}

void KorttiPakka::TulostaKorttiPakasta(int kortinnumero) {
	ValmisPakka[kortinnumero].TulostaKortti(ValmisPakka->AnnaMaa(), ValmisPakka->AnnaArvo());
}