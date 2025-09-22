/*
  Name=Vardaan Sharma
  Group=1A32
  Date=7-9-2025
  Roll No.=1025040028
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,D;
	 printf("Choose your desired value of a,b,c:");
	 scanf("%lf %lf %lf",&a,&b,&c);
	 D=b*b-4*a*c;
	 if(D>0){
	double root1=(-b+sqrt(D))/(2*a);
	double root2=(-b-sqrt(D))/(2*a);
	printf("The value of first root is %lf\n",root1);
	printf("The value of second root is %lf",root2);
}
else if	(D==0){
	printf("The roots are real and equal");
}
else
printf("Roots are imaginary");


return 0;
}
