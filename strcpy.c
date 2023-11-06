#include<stdio.h>
#include<string.h>

void main(){

char s1[100];
char s2[100];
printf("Enter string 1 : ");
gets(s1);
printf("Enter a string to copy in s1 :");
gets(s2);
int i;
for(i=0; s2[i] != '\0'; i++){
    s1[i]=s2[i];
}
s1[i]='\0';
printf("%s %s", s1,s2);
}
