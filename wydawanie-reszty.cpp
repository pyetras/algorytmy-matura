#include <iostream>

using namespace std;

int nom[] = { 50, 20, 2, 1};
int l = 4;

int greedy(int kwota){
	int n = 0;
	while (kwota>0){
		int i = 0;
		while (nom[i]>kwota) i++;
		kwota -= nom[i];
		cout<<nom[i]<<endl;
		
		n++;
	}
	return n;
}
int tab[10000];
int perfect(int kwota){
	memset(tab, 1, sizeof(int)*(kwota+1));
	tab[0] = 0;
	for (int k = 0; k<l; k++){
		for (int i = 0; i<=kwota-nom[k]; i++){
			tab[i+nom[k]] = min(tab[i]+1, tab[i+nom[k]]);
		}
	}
	return tab[kwota];
}

int main ()
{
	cout << "ilosc = " << greedy(60) << endl << endl;
	cout << "ilosc = " << perfect(60) << endl;
	return 0;
}