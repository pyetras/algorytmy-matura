#include <iostream>
#include <cstring>

using namespace std;

const int tl =1, t = 2, l=3;

char s1[250], s2[250];
int n1, n2;

int tab[250][250];
int dir[250][250];

void wypisz(int i, int j){
	if (i*j == 0)
		return;
	if (dir[i][j] == tl){
		wypisz(i-1, j-1);
		printf("%c", s1[i]);
	}else if(dir[i][j] == t)
		wypisz(i-1, j);
	else
		wypisz(i, j-1);
		
}

int main (int argc, char * const argv[]) {
	gets(s1+1); //offset 1 element dla
				//uproszczenia algorytmu
	n1 = strlen(s1+1);
	
	gets(s2+1);
	n2 = strlen(s2+1);

	for(int i=1; i<=n1; i++)
		for(int j=1; j<=n2; j++){
			if (s1[i] == s2[j]){
				tab[i][j] = tab[i-1][j-1]+1;
				dir[i][j] = tl;
			}else{
				if (tab[i-1][j] >= tab[i][j-1]){
					dir[i][j] = t;
					tab[i][j] = tab[i-1][j];
				}else {
					tab[i][j] = tab[i][j-1];
					dir[i][j] = l;
				}				
			}							
		}
	wypisz(n1, n2);
	printf("\n");
	
    return 0;
}
