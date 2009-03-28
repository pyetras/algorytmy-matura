#include <iostream>

using namespace std;

double abs(double x){ return x > 0 ? x : -x; }

// to trzeba zdefiniowac
double f(double x){	return x*x - 3*x + 1; }
double fprim(double x){ return 2*x - 3; }

double bisekcja(double a, double b, double e){
	if(f(a) * f(b) >= 0){
		cout << "f(x) musi miec rozne znaki na koncach" << endl;
		return 0;
	}
	
	double mid;
	while(abs(a-b) > e){
		mid = (a+b)/2;
		if(f(a) * f(mid) > 0) a = mid;
		else b = mid;
	}
	
	return (a+b)/2;	
}

double newton_raphson(double a, double b, double e){
	if(f(a) * f(b) >= 0){
		cout << "f(x) musi miec rozne znaki na koncach" << endl;
		return 0;
	}
	// Pierwsza i druga pochodna funkcji mają stały znak w tym przedziale. (to chyba mozna pierdolic)
	
	double x = a;
	while(abs(f(x)) > e){
		x = x - (f(x)/fprim(x));
	}
	return x;
}


int main (int argc, char * const argv[]) {
	// zakres i przyblizenie
	cout << "bisekcja: " << bisekcja(2, 5, 0.00001) << endl; 
	cout << "Newton-Raphson: " << newton_raphson(2, 5, 0.00001) << endl;	
    return 0;
}
