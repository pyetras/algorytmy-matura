// to chyba chodzi o pole pod wykresem
double f(double x){ // jakas tam funkcja
	return x*x - 3*x + 2;
}

int main (int argc, char * const argv[]) {
	double a = -5, b = 5, e = 0.01; // zakres i przyblizenie
	double i, s=0;
	
	// metoda prostokatow
	for(i=a; i<b; i+=e) s += e * f(i + (e/2)) ;
	cout << "prostokaty: " << s << endl;
	
	// metoda trapezow
	s = 0;
	for(i=a; i<b; i+=e) s += (f(i) + f(i+e)) * e / 2;
	cout << "trapezy: " << s << endl;
	
    return 0;
}