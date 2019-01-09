#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    int podajIdWybranegoAdresata();
    int wczytajLiczbeCalkowita();
    char wybierzOpcjeZMenuEdycja();
    char wczytajZnak();


public:
AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
void dodajAdresata();
Adresat podajDaneNowegoAdresata();
void wyswietlWszystkichAdresatow();
void wyswietlDaneAdresata(Adresat adresat);
void wyszukajAdresatowPoImieniu();
void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
void wyszukajAdresatowPoNazwisku();
void edytujAdresata();
};

#endif
