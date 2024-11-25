#include<stdio.h>
#include<math.h>
//#include<conio.h>
void main()
{
	float a,b,c,d,r1,r2;
	//clrscr();
	printf("Enter the 3 coefficients:\n");
	scanf("%f%f%f",&a,&b,&c);
	if((a*b*c)==0)
	{
	printf("Roots cannot beDetermined:\n");
            //exist(0);				
	}
	d=(b*b)-(4*a*c);
	if(d==0)
	{
	printf("Roots are real and equal\n");
	        r1=r2=-b/(2*a);
	printf("The roots are %f and %f",r1,r2);			
	}
    else if(d>0)
    {
    printf("Roots are real and distinc\n");
	        r1=(-b+sqrt(d))/(2*a);
		    r2=(-b-sqrt(d))/(2*a);
	printf(" The roots are %f and %f",r1,r2);
	}
	else
	{
	printf("Roots are imaginary\n");
            r1=-b/(2*a);
			r2=sqrt(fabs(d))/(2*a);
	printf("The roots are %f +i %f",r1,r2);
	printf("The roots are %f +i %f",r1,r2);				
	}
//	getch();
}
