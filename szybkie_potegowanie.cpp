// rekurencyjny
int pow(int x, int n){
	if(n == 0) return 1;
	if(n % 2 == 1) return x * pow(x, n-1);
	else {
		n = pow(x, n/2);
		return n*n;
	}
}


// iteracyjny
int pow(int x, int n){
	int res = 1;
	while(n){
		if(n % 2 == 1){
			res *= x;
			// n--; nie jest konieczne bo przy dzieleniu i tak zaokragli
		}
		x *= x;
		n /= 2;
	}
	return res;
}