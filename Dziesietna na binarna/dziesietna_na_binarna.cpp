#include <iostream>

using namespace std;
 
void dnb(int kot){

	int tab[15];

	int i = 0;

	while(kot != 0){
		tab[i++] = kot % 2;

		kot = kot / 2;

	}

	for(int j = i - 1; j >= 0; j--){

		cout << tab[j];

	}

}
 
int main(){

	int liczba;

	cout << "Podaj liczbe dzisietna: ";

	cin >> liczba;

	cout << "Liczba " << liczba << "po zamianie na postac binarbna: ";

	dnb(liczba);

	return 0;

}
 