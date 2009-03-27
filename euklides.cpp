// to jest jakies zalowe, chodzi o euklidesa a te operacje na ulamkach to sie sprowadzaja do osobnego dodawania licznika i mianownika
// a przy skracaniu jest nwd
// no i struct dla lansu :P

struct ulamek {
	int licznik, mianownik;
};

int nwd(int a, int b){
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	} 
	return a;
}

ulamek skroc_ulamek(ulamek x){
	int r = nwd(x.licznik, x.mianownik);
	x.licznik /= r;
	x.mianownik /= r;
	return x;
}