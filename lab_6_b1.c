#include<stdio.h>
int main(){

	 
	float u,totalBill;
	printf("Enter a units :");
	scanf("%f", &u);
	
	if(u<=50){
		totalBill = (u*0.5);
	}else if(u<=150){
		totalBill = (50*0.50)+((u-50)*0.75);
		
	}else if(u<=250){
		totalBill = (50*0.50)+(100*0.75)+(u-150)*1.2;
		
	}else if(u>250){
		totalBill = (50*0.50)+(100*0.75)+(100*1.2)+(u-250)*1.5;
	}
	
	totalBill= totalBill+(totalBill*0.2);
	
	printf("Total bill is :%f", totalBill);
return 0;
}

