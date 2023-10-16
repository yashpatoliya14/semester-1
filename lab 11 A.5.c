#include<stdio.h>
void main(){
	int n,i,ans;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		ans*=i;
	}
	printf("%d", ans);
}

