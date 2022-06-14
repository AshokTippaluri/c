#include<stdio.h>

int main()
{
    int a, b, Add, sub, Multi;
    float div;
    printf("Enter the first letter \n");
    scanf("%d", &a);

    printf("Enter the secound letter \n");
    scanf("%d", &b);

    Add=a+b;
    sub=a-b;
    Multi=a*b;
    div = a/b;
            
    printf("The addition of two number\n %d\n", Add);
    printf("The subtraction of two number\n %d\n", sub);
    printf("The The subtraction of two number\n %d\n", Multi);
    printf ("The division of two number \n %f \n",div);
    
    return 0;
}
