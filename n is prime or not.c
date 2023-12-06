#include<stdio.h>
int main()
{
    int n, i, temp = 0;
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            temp++;
            break;
        }
    }
    if(temp == 0 && n != 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}


