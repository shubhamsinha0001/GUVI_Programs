/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        c++;
    }
    printf("%d",c);

    return 0;
}
