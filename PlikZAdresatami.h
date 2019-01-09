#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZAdresatami
{
const string NAZWA_PLIKU_Z_ADRESATAMI;
string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
int idOstatniegoAdresata;

bool czyPlikJestPusty(fstream &plikTekstowy);
string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
string pobierzLiczbe(string tekst, int pozycjaZnaku);
Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
void zmienNazweTymczasowegoPlikuNaNazweOdczytywanegoPliku(string nazwaTymczasowegoPlikuZRozszerzeniem, string nazwaPlikuZRozszerzeniem);
void usunOdczytywanyPlik(string nazwaPlikuZRozszerzeniem);
void edytujWybranaLinieWPliku(int numerEdytowanejLinii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);

public:

PlikZAdresatami(string nazwaPlikuZAdresatami)
 : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
{
    idOstatniegoAdresata = 0;
    NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "Adresaci_Tymczasowo.txt";
};
void dopiszAdresataDoPliku(Adresat adresat);
vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
int pobierzIdOstatniegoAdresata ();
void zaktualizujDaneEdytowanegoAdresata(Adresat adresat, int idEdytowanegoAdresata);
};

#endif
