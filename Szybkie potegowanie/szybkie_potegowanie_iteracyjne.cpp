#include <iostream>
using namespace std;
 
int main(){
	int a;
	int n;
	int wynik = 1;
	cout << "Podaj baze (a): ";
	cin >> a;
	cout << "Podaj wykladnik (n): ";
	cin >> n;
	int baza = a;
	int wykladnik = n;
	while (n > 0){
		if (n % 2 == 1)
			wynik *= a;
		a *= a;
		n /= 2; 
	}
	cout << baza << "^" << wykladnik << "=" << wynik << endl;
	return 0;
}