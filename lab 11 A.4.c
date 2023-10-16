#include<stdio.h>
void main(){
	int x,y,i,ans=1;
	printf("Enter a X = ");
	scanf("%d", &x);
	printf("Enter a Y = ");
	scanf("%d", &y);
	
	for(i=0; i<y; i++){
		ans*=x;
	}
	printf("%d", ans);
}

