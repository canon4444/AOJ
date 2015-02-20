// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D

#include <stdio.h>
 
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
 
    int i, cnt = 0;
    for( i = a; i <= b; ++i )
        if( c % i == 0 )
            ++cnt;
 
    printf("%d\n", cnt);
 
    return 0;
}
