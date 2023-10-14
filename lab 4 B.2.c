#include<stdio.h>

void main(){
	
	float p, r, t, interest;
	
	
	printf("Enter a price :");
	scanf(" %f", &p);
	
	printf("Enter a rate :");
	scanf("%f", &r);	
	
	printf("Enter a time :");
	scanf("%f", &t);
	
	interest= (p*r*t)/100;
	
	printf("%f", interest);
}
