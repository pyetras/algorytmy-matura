#include <iostream>

using namespace std;

void print(int *from, int *to){
	cout << endl;
	while(from != to)
		cout << *(from++) << ' ';
	cout << endl;
}
void merge(int *tab, int n){
	int *res = new int[n];
	int mid = n/2;
	int i = 0, a = 0, b = mid;
	for (;a<mid && b<n;i++)
		res[i] = (tab[a]>tab[b])?tab[b++]:tab[a++];
	while (a<mid)
		res[i++] = tab[a++];
	while (b<n)
		res[i++] = tab[b++];
		
	for (int i = 0; i<n; i++) tab[i] = res[i];
	
	delete[] res;
}
void split(int *tab, int n){
	if (n<2) return;
	int mid  = n/2;	
	split(tab, mid);	
	split(tab+mid, n-mid);
	merge(tab, n);
}
int tab[] = {1,9,5,3,3,6,7,2,5,1,7,3,4};
int tab2[] = {3,3,6,8,9,11,2,4,5,6,7,10,10};
int n=12;
int main (int argc, char const *argv[])
{
	merge(tab2, 13);
	print (tab2,tab2+13);
	
	split(tab, 12);
	print(tab, tab+n);
	
	return 0;
}