// oblicza minimalna ilosc monet potrzebnych do wydania reszty

#include <iostream>
#define INFINITY 2147483647

using namespace std;

int zachlanny(int n, int* N, int k){
	int j,x=0;
	while(k > 0){
		j = 0;
		for(int i=0; i<n; i++){
			if(N[i] <= k && N[i] > j) j = N[i];
		}
		k -= j;
		x++;
	}
	return x;
}

int dynamiczny(int n, int* N, int k){
	int T[k+1],i,j,m;
	T[0] = 0;
	for(i=1; i<=k; i++) T[i] = INFINITY;
	
	for(i=0; i<n; i++){
		m = N[i];
		for(j=0; j<=k-m; j++){
			if(T[j] < INFINITY && T[j]+1 < T[j+m]) T[j+m] = T[j] + 1;
		}
	}
	return T[k];
}


int main (int argc, char * const argv[]) {
	int n = 8;
	int N[] = {200, 100, 50, 20, 10, 5, 2, 1};
	int k;
	cin >> k;
	
	cout << "zachlanny: " << zachlanny(n, N, k) << endl;
	cout << "dynamiczny: " << dynamiczny(n, N, k) << endl;
		
    return 0;
}
