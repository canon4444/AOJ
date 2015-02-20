// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D

#include <stdio.h>
 
int main()
{
    int S;
    scanf("%d", &S);
 
    int h = 0, m = 0;
    while( !(S < 60) ) S -= 60, ++m;
    while( !(m < 60) ) m -= 60, ++h;
 
    printf("%d:%d:%d\n", h, m, S);
 
    return 0;
}
