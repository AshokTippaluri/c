#include<stdio.h>

int main()
{
    int a, i, result,range;
    
    scanf("Which table you want ? - %d", &a);
    scanf("Please mention the range:\n%d", &range);


    for (int i = 1; i <= range; i++)
    {
        result =  a * i;
       printf("Entered number is %d * %d = %d\n",a,i,result);
    }
    

    
    return 0;
}
