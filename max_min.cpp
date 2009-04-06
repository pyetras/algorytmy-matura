#include <iostream>
using namespace std;
void maxmin(int* tab, int size){
	int i, y, min, max;
	for(i=1; i<size; i+=2){
		if(tab[i-1] > tab[i]){
			y = tab[i-1];
			tab[i-1] = tab[i];
			tab[i] = y;
		}
	}
	
	min = tab[0];
	if(size == 1) max = tab[0];
	else {
		max = tab[1];
		for(i=3; i<size; i+=2){
			if(min > tab[i-1]) min = tab[i-1];
			if(max < tab[i]) max = tab[i];
		}
	}
	
	if(size > 1 && size == i-1){
		if(min > tab[size-1]) min = tab[size-1];
		if(max < tab[size-1]) max = tab[size-1];
	}
	
	cout << "min=" << min << ", max=" << max << endl;
	
}

//chiba dziala
void minmax(int *tab, int n){
	int min = tab[0], max = tab[0];
	for (int i = n%2; i<n-1; i+=2){
		if (tab[i]>tab[i+1]){
			if (tab[i]>max) max = tab[i];
			if(tab[i+1] < min) min = tab[i+1];
		}else{
			if (tab[i]<min) min = tab[i];
			if (tab[i+1]>max) max = tab[i+1];
		}
	}
	
	cout << "min=" << min << ", max=" << max << endl;
}
int main ()
{
	int tab[] = { 10, 3 ,500, 40, 205, 100, 1, 200, 78, 1000 };
	maxmin(tab, 6);
	minmax(tab, 6);
	return 0;
}

