#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


main()
{
    char a[501];
    int i,j,k,l,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        getchar();
        if(i!=1)
        {
            printf("\n");
        }
        printf("Case %d:\n",i);
        while(n--)
        {
            gets(a);
            if(a[0]!='\0')
            {
                printf("%c",a[0]);
            }
            for(j=1;a[j]!='\0';j++)
            {
                if(a[j]==' ' && a[j-1]==' ')
                {
                    continue;
                }
                else
                {
                    printf("%c",a[j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
