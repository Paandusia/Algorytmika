#include <iostream>
using namespace std;

void rozklad(int n){
	int k = 2;
	
	while(n > 1){
		while(n % k == 0){
			cout << k << " ";
			n /= k;
		}
		k++;
	}
}

int main(){
	int m;
	cout << "Podaj liczbe: ";
	cin >> m;
	
	cout << "Czynniki pierwsze liczby " << m << ": ";
	rozklad(m);
	cout << endl;
	
	return 0;
}