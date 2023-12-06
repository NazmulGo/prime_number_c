#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int i, j, hum=0, count=0;

    for(i=2; i<m; i++)
    {
        if(m%i == 0)
        {
            hum++;
            break;
        }
    }
    if(hum == 1)
    {
        printf("NO");
    }
    // m is prime -- --- - -- ---
    else
    {
        for(i=n+1; i<m; i++)
        {
            int gg = 0;
            for(j=2; j<i; j++)
            {
                if(i%j == 0)
                {
                    gg++;
                    break;
                }
            }

            if(gg == 0)  //jodi prime hoy
            {
                count++;
            }


        }

        if(count == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }


    }



    return 0;
}

