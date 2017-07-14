//product array
#include <stdio.h>

int main()
{
    long int a[1000],p=1,n;
    scanf("%li",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%li",&a[i]);
        //printf("%u",a[i]);
        p=(p*a[i]%1000000007);
    }
    printf("%li",p);
    return 0;
}

