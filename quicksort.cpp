//http://edu.i-lo.tarnow.pl/inf/alg/003_sort/0018.php
#include <iostream>

using namespace std;

void print(int *from, int *to){
	cout << endl;
	while(from != to)
		cout << *(from++) << ' ';
	cout << endl;
}

void qsort(int *from, int *to){
	int len = to - from;
	if (len <= 1)
		return;
		
	int i = 0, j = 0;
	int middle = *(to - 1); //dla ulatwienia srodek jest na koncu :P
	
	for(; i < len; ++i)
	{
		if (from[i] < middle){
			int tmp = from[i];
			from[i] = from[j];
			from[j] = tmp;
			j++;
		}
	}
	*(to -1) = from[j];
	from[j] = middle;

	if (len > j+1)
		qsort(from + j+ 1, to);
	if (j-1 > 0)
		qsort(from, from + j - 1);
}
int tab[] = {1,3,5,3,6,7,2,5,1,7,3,4};
int n=12;
int main (int argc, char const *argv[])
{
	qsort(tab, tab+n); // co oczywiscie daje to samo co sort(tab, tab+n); -30 linii...
	print (tab,tab+n);
	return 0;
}