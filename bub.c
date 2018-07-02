/*bub.c*/

int* bubblesort(int *a, int length)
{
	int i, j, t;
	for(i=0;i<length;i++){
		for(j=length;j>i;j--){
			if(a[j]<a[j-1]){
				t = a[j];
				a[j] = a[j-1];
				a[j-1] = t;
			}
		}
	}
	return a;
}