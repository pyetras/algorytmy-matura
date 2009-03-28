#include <iostream>

using namespace std;

void hanoi(int n, int from, int dest, int by){
	if(n == 1){
		cout << "Move " << from << " --> " << dest << endl; 
	} else {
		hanoi(n-1, from, by, dest);
		hanoi(1, from, dest, by);
		hanoi(n-1, by, dest, from);
	}
}

int main (int argc, char * const argv[]) {
	int n;
	cin >> n;
	
	hanoi(n, 1, 2, 3);
		
    return 0;
}
