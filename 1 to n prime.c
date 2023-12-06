#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, count=0;

    for(i=1; i<=n; i++)
    {   int gg = 0;
        for(j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                gg++;
            }
        }

        if(gg == 0 && i != 1)
        {
            count++;
        }


    }
        printf("%d", count);

    return 0;
}
