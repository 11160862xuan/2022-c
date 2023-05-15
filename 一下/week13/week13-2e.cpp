#include <stdio.h>
int main()
{
	int a[10],n=0,b,m=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0)break;
		n++;
	}
	scanf("%d",&b);
	for(int i=0;i<n;i++){
		if(a[i]==b)m++;
	}
	printf("%d\n",m);
}
