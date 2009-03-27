
void maxmin(int* tab, int size){
	int i, y, min, max;
	for(i=1; i<size; i+=2){
		if(tab[i-1] > tab[i]){
			y = tab[i-1];
			tab[i-1] = tab[i];
			tab[i] = y;
		}
	}
	
	min = tab[0];
	if(size == 1) max = tab[0];
	else {
		max = tab[1];
		for(i=3; i<size; i+=2){
			if(min > tab[i-1]) min = tab[i-1];
			if(max < tab[i]) max = tab[i];
		}
	}
	
	if(size > 1 && size == i-1){
		if(min > tab[size-1]) min = tab[size-1];
		if(max < tab[size-1]) max = tab[size-1];
	}
	
	cout << "min=" << min << ", max=" << max << endl;
	
}


int tab[] = { 40, 205, 100, 25, 200, 78 };
maxmin(tab, 6);
