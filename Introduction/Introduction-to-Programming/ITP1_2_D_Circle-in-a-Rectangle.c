// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_D

#include <stdio.h>
 
int main()
{
    int W, H, x, y, r;
    scanf("%d%d%d%d%d", &W, &H, &x, &y, &r);
 
    int flag = 1;
    if( y-r < 0 || H < y+r ) flag = 0;
    if( x-r < 0 || W < x+r ) flag = 0;
 
    if( flag ) printf("Yes\n");
    else printf("No\n");
 
    return 0;
}
