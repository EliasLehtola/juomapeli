#include "KorttiPakkaEsittely.h"
#include <string>

//Aliohjelmien esittelyt
int PelaajienM‰‰r‰t();
void PelaajienNimetTaulukkoon(std::string *pelaajienNimet, int pelaajienmaara);
void NumerotTaulukkoon(int *numerot);
int Vuoro(int kenenVuoro, int pelaajienM‰‰r‰);
void PelataanKortti(KorttiPakka* uusi, int numerot, int vuoro, int pelaajat, std::string nimi);
void PelinAlustus(std::string pelaajienNimet[], int pelaajienM‰‰r‰, int numerot[], KorttiPakka* uusi);
void PelinLopetus();