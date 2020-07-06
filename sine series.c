/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
# define pi 3.14
void main()
{
    int i,p;
    float temp,ar,ad,sum;
    printf ("enterbthe angle in degree \n");
    scanf("%f",&ad);
    printf("enter the number of termss up to which you want to calculate the sum\n");
    scanf("%d",&p);
    ar=ad*(pi/180.0);
    temp=ar;
    printf("%f\n",ar);
    sum=ar;
    for(i=2;i<=2*p;i=i+2)
    {
        temp=(temp*(-1)*ar*ar)/(i*(i+1));
        sum=sum+temp;
    }
    printf("sin(%f)=%f",ar,sum);
    getch();
    
    }

