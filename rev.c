//WAP to reverse an array
#include<stdio.h>
int main(){
	int a[10],b[10],i=0,j=0;
	for(i=0;i<=9;i++){
		printf("enter a number to be reversed in a[%d]",i);
		scanf("%d",&a[i]);
	}
	// process
	for(i=0;i<=9;i++){
			b[i]=a[9-i];
		    printf("\n reverse b[%d]:%d",i,b[i]);
	}
	return 0;
}