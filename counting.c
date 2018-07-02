#include<stdio.h>
#define N 2000001

int b[N], c[N];

void countingsort(int a[], int b[], int k, int n)
{
	int i, j;
	for(i=0;i=<k;i++){
		c[i]=0;
	}
	for(j=1;j<=n;j++){
		c[a[j]]++;
	}
	for(i=1;i<=k;i++){
		c[i]+=c[i-1];
	}
	for(j=n;j>=1;j--){
		b[c[a[j]]]=a[j];
		c[a[j]]--;
	}
	for(i=1;i<=n;i++){
		printf("%d", b[i]);
		if(i != n)printf(" ");
	}
	printf("\n");
}

int main()
{
	int a[N];
	int i, j, n, k;
	scanf("%7d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &a[i]);
		if(k<a[i])k=a[i];
	}
	countingsort(int a[],int b[],int k,int n);
	return 0;
}