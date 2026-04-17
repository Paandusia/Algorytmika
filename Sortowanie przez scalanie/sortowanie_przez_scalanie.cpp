#include <iostream>
using namespace std;
 
void Merge(int* tab, int l, int m, int r) {
    int lSize = m - l + 1;
    int rSize = r - m;
 
    int* tabL = new int[lSize];
    int* tabR = new int[rSize];
 
    for (int i = 0; i < lSize; i++) {
        tabL[i] = tab[l + i];
    }
 
    for (int j = 0; j < rSize; j++) {
        tabR[j] = tab[m + 1 + j];
    }
 
    int indexL = 0;
    int indexR = 0;
    int currIndex = l;
 
    while (indexL < lSize && indexR < rSize) {
        if (tabL[indexL] <= tabR[indexR]) {
            tab[currIndex] = tabL[indexL++];
        } else {
            tab[currIndex] = tabR[indexR++];
        }
        currIndex++;
    }
 
    while (indexL < lSize) {
        tab[currIndex++] = tabL[indexL++];
    }
 
    while (indexR < rSize) {
        tab[currIndex++] = tabR[indexR++];
    }
 
    delete[] tabL;
    delete[] tabR;
}
 
void MergeSort(int* tab, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
 
        MergeSort(tab, l, m);
        MergeSort(tab, m + 1, r);
 
        Merge(tab, l, m, r);
    }
}
 
int main() {
    int n;
 
    cout << "Wprowadz liczbe elementow do posortowania: " << endl;
    cin >> n;
 
    int* tab = new int[n];
 
    cout << "Podaj elementy:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
 
    cout << endl;
    cout << "Tablica przed sortowaniem:" << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }
 
    cout << endl << endl;
    cout << "Rozpoczecie sortowania..." << endl;
 
    MergeSort(tab, 0, n - 1);
 
    cout << endl;
    cout << "Tablica po sortowaniu:" << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }
    cout << endl;
 
    delete[] tab;
    return 0;
}