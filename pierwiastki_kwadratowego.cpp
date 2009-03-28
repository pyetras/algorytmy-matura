#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char * const argv[]) {
	float a,b,c;
	
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	
	if(a == 0){
		cout << "STFU NOOB" << endl;
	} else {
		int d = b*b - 4*a*c;
		if(d < 0){
			cout << "Nie ma pierwiastkow" << endl;
		} else if (d == 0){
			cout << "Jeden pierwiastek: " << (-b/2*a) << endl;
		} else {
			cout << "Dwa pierwiastki: " << ((-b - sqrt(d)) / 2*a) << " i " << ((-b + sqrt(d)) / 2*a) << endl;
		}
	}
	
    return 0;
}
