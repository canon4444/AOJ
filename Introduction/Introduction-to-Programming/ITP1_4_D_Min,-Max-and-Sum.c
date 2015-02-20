// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D

#include <stdio.h>
 
int main()
{
    int i;
 
    int n;
    scanf("%d", &n);
    int a[n];
    for( i = 0; i < n; ++i ){
        scanf("%d", &a[i]);
    }
 
    int min = 0, max = 0;
    long int sum = 0;
    for( i = 0; i < n; ++i ){
        min = a[i] < a[min] ? i : min;
        max = a[i] > a[max] ? i : max;
        sum += a[i];
    }
 
    printf("%d %d %ld\n", a[min], a[max], sum);
 
    return 0;
}
