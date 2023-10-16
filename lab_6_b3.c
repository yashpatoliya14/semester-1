#include<stdio.h>
int main(){
	float s1,s2,s3;
	scanf("%f",&s1);
	scanf("%f",&s2);
	scanf("%f",&s3);
	
	if(s1==s2 && s2==s3){
		
		printf("equilateral triangle");
	
	}else if(s1==s2 || s2==s3 || s3==s1){
		
		printf("isosceles triangle");
		
	}else if(((s1*s1)==(s2*s2) + (s3*s3))){

		printf("right triangle");

	}else{
		printf("scalene tringle");
	}

return 0;
}

