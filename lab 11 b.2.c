#include<stdio.h>
void main(){
	int n,i,rem,i0=0,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,i8=0,i9=0;
	scanf("%d", &n);
	for(;n!=0;){
		rem=n%10;
		if(rem==0){
			i0++;
		}
		if(rem==1){
			i1++;
		}
		if(rem==2){
			i2++;
		}
		if(rem==3){
			i3++;
		}
		if(rem==4){
			i4++;
		}
		if(rem==5){
			i5++;
		}
		if(rem==6){
			i6++;
		}
		if(rem==7){
			i7++;
		}
		if(rem==8){
			i8++;
		}
		if(rem==9){
			i9++;
		}
		n=n/10;
	}
	printf("zero = %d\n", i0);
	printf("one = %d\n", i1);
	printf("two = %d\n", i2);
	printf("three = %d\n", i3);
	printf("four = %d\n", i4);
	printf("five = %d\n", i5);
	printf("six = %d\n", i6);
	printf("seven = %d\n", i7);
	printf("eight = %d\n", i8);
	printf("nine = %d\n", i9);
}

