void insert_sort(int *tab, int size){
	int j,k;
	for(int i=1; i<size; i++){
		k = tab[i];
		j = i - 1;
		while(j >= 0 && tab[j] > k){
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = k;
	}
}


int t[] = { 40, 10, 100, 90, 20, 25 };
insert_sort(t, 6);