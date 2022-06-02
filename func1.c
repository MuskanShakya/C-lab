//functions
// no argument and no return value
#include<stdio.h>
void sum(void); //void is written because no argumnet is given and it is optional
void main()
{
	sum();
	sum(); //calling function
}
void sum()  
{ 
   int a=5,b=6;
   int c=a+b;
   printf("%d ",c);
}
