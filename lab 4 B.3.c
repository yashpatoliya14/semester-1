#include<stdio.h>
void main(){
	//f > c
	float far, convert;
	printf("Enter a f* temp. :");
	scanf("%f", &far);
	convert= ((far-32)*5)/9;
	printf("temperature is : %f", convert);
}
