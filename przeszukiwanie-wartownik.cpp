#include <iostream>

using namespace std;

void print(int *from, int *to){
	cout << endl;
	while(from != to)
		cout << *(from++) << ' ';
	cout << endl;
}
//przeszukiwanie w ciagu nieposortowanym
//dziala tak ze przygotowuje tablce tak jak qsort
//ale tylko dla tej czesci w ktorej jest poszukiwane cos
//(sluzy do sprawdzania czy element istnieje, nie zroci porawnego indexu)
int qfind(int *from, int *to, int find){
	int len = to - from;
	int i = 0, j = 0;
	int middle = *(to - 1); //dla ulatwienia srodek jest na koncu :P
	
	if (middle == find)
		return middle;//(size_t)((to-1) - find);

	if (len <= 1)
		return -1;
	
	for(; i < len; ++i)
	{
		if (from[i] < middle){
			if (i!=j){
				int tmp = from[i];
				from[i] = from[j];
				from[j] = tmp;
			}
			j++;
		}
	}
	*(to -1) = from[j];
	from[j] = middle;
	
	if (len > j+1 && find > middle)
		return qfind(from + j+ 1, to, find);
	if (j-1 > 0 && find < middle)
		return qfind(from, from + j - 1, find);
		
	return -1;
}
int tab[] = {1,9, 3,5,3,6,7,2,5,1,7,3,4};
int n=12;
int main (int argc, char const *argv[])
{
	cout << qfind(tab, tab+n, 5);
	print (tab,tab+n);
	return 0;
}