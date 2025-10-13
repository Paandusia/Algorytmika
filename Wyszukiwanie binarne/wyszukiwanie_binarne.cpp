#include <iostream>
using namespace std;
 
int wyszukiwanie(int tab[], int szukana){
    int lewa = 0;
    int prawa = 14;
 
    while (lewa <= prawa){
        int srodek = (lewa + prawa) /2;
        if (tab[srodek] == szukana){
            return srodek;
        }
        else if (tab[srodek] > szukana){
            prawa = srodek - 1;
        }
        else{
            lewa = srodek + 1;
        }
    }
    return -1;
}
 
int main(){
    int tab[15]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
 
    int szukana;
    cout << "Podaj liczbe ktora chcesz znalezc: ";
    cin >> szukana;
 
    int wynik = wyszukiwanie(tab, szukana);
 
    if (wynik != -1){
        cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie: " << wynik << endl;
    }
    else {
        cout << "Liczba " << szukana << " nie wystepuje w zbiorze" << endl;
    }
    return 0;
}