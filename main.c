#include <stdio.h>

int main()
{
int x;
printf("what are marks of the student\n");
scanf("%d",&x);
if(x<=100&&x>=85)
printf("GRADE A");
if(x>=70&&x<=84)
    printf("GRADE B");
if(x>=55&&x<=69)
    printf("GRADE C");
    if(x>=40&&x<=54)
    printf("GRADE D");
    if(x<40)
    printf("GRADE F");
}

