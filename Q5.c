/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
int main(){
	int x,y,z=0;
	printf("Choose any two numbers:");
	scanf("%d %d",&x,&y);
	printf("Before swapping your values are a=%d,b=%d\n",x,y);
	z=x;
	x=y;
	y=z;
	printf("Your chosen values after swapping are a=%d,b=%d",x,y);
}
