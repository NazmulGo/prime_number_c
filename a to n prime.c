#include<stdio.h>
int main()
{
   int a, b;
   scanf("%d%d", &a, &b);
   int i, j, prime = 0;

   for(i=a; i<=b; i++)
   {
       int gg = 0;
       for(j=2; j<i; j++)
       {
           if(i%j == 0)
           {
               gg++;  // break dile ekbar vag gelei gg++ kore off, then i ek barbe
                      // abar loop ghurabe
                      // break na dile gg baraitei thakbe
               break;
           }
       }
       if(gg == 0 && i != 1)
       {
           prime++;
       }

   }
       printf("%d", prime);

    return 0;
}

