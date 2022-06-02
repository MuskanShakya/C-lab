/*#include <stdio.h>
int main()
{
	printf("%6.3f,%06.3f,%09.3f,%9.3f,%6.0f,%6.0f", 45.6,45.6,45.6,45.6,45.4,45.6);
return 0;
}*/

/*#include <stdio.h>
int main()
{
printf("%d %d %d %d\n",15,015,0x15,0X15);
return 0;
}*/

/*#include <stdio.h>
int main()
{
	printf("%d %c",'A','A');
return 0;
}*/

/* #include <stdio.h>
int main()
{
printf("%d %o %x %X\n",15,15,15,15);
return 0;
}*/

/*#include <stdio.h>
int main()
{
    //Assume sizeof character is 1 byte and sizeof integer is 4 bytes
printf("%d", sizeof(printf("Anand")));
return 0;
}*/

/*#include <stdio.h>
int main()
{
printf("size of '9'= %d \n", sizeof('9'));
printf("size of  9 = %d \n", sizeof(9));
return 0;
}*/

/*#include <stdio.h>
int main()
{
printf("%d %d %d %d %d\n",sizeof(032),sizeof(0x32),sizeof(32),sizeof(32U),sizeof(32L));
printf("%d %d %d",sizeof(32.4),sizeof(32.4f),sizeof(32.4F));
return 0;
}*/

#include <stdio.h>
int main()
{
char p=307;
printf("%d %d %c\n",2147483649,p,p);
return 0;
} 