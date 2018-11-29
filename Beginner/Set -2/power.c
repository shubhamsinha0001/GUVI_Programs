/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int arr[2],i, n,power=1;
    double result;
    for( i=0;i<2;i++)
    {
        scanf("%d",&arr[i]);
    }
    result = pow(arr[0],arr[1]);
    printf("%f", result);
}
