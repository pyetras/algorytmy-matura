//http://pl.wikipedia.org/wiki/Problem_plecakowy
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int plecak[100];
struct rzecz{
       int w, c;
};

rzecz rzeczy[1000];
int main(int argc, char *argv[])
{
    int W, m;
    scanf("%d %d", &W, &m);
    for (int i = 0; i<m; i++){
        scanf("%d %d", &rzeczy[i].w, &rzeczy[i].c);
    }
    for (int i=1; i<=W; i++){
        for (int j = 0; j<m; j++){
            if (rzeczy[j].w<=i){
               plecak[i] = max(plecak[i], rzeczy[j].c + plecak[i-rzeczy[j].w]);
               
            }
        }
        //printf("plecak[%d] = %d\n",i, plecak[i]);
    }
    printf("\n\n%d", plecak[W]);
    system("PAUSE");
    return EXIT_SUCCESS;
}