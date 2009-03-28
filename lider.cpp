#include <iostream>

using namespace std;

int znajdz_lidera(int n, int* x){
	int lider = x[0], c = 1, i;
	for(i=1; i<n; i++){
		if(c == 0){
			lider = x[i];
			c = 1;
		} else {
			if(x[i] == lider) c++;
			else c--;
		}
	}
	
	if(c == 0) return NULL;
	else {
		c = 0;
		for(i=0; i<n; i++){
			if(x[i] == lider) c++;
		}
		if(c > n/2) return lider;
		else return NULL;
	}
}

int main (int argc, char * const argv[]) {
	int n = 20;
	int x[] = {1,2,3,4,5,6,7,8,9,1,1,1,1,1,1,1,1,1,1,4}; // nie chcialo mi sie wczytywanie pisac

	int lider = znajdz_lidera(n, x);
	if(lider == NULL) cout << "Nie ma lidera" << endl;
	else cout << "Lider = " << lider << endl;

	
    return 0;
}
