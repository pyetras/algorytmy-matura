#include <iostream>
#include <list>
using namespace std;

bool sito[1000000];
int n = 1000000;
list<int> pierwsze;

int main (int argc, char const *argv[])
{
	for (int i = 2; i<n; i++){
		if (sito[i]) continue;
		pierwsze.push_back(i);
		for (int j = 2; j<n/i; j++){
			sito[i*j] = true;
		}
	}
	//tru dla niepierwszych, false dla pierwszych
	printf("%d\n", (int)pierwsze.size());
	return 0;
}