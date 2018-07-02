int selectionsort(int length, int *a)
{
	int i, j, mini, tmp, count = 0;
	for(i=0;i<length;i++){
		mini = i;
		for(j=i+1;j<length;j++){
			if(a[j]<a[mini]){
			mini = j;
			}	
		}
		if(mini != i){
		tmp = a[i];
		a[i] = a[mini];
		a[mini] = tmp;
		count++;
		}
	}
	return count;
}