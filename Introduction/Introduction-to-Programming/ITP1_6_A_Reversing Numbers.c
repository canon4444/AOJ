// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A

#include <stdio.h>

int main()
{
    int i;

    //標準入力
    int n;
    scanf("%d", &n);
    int a[n];
    for( i = 0; i < n; ++i )
        scanf("%d", &a[i]);

    //標準出力
    while( i-- ){
        printf("%d", a[i]);
        if( i ) printf(" ");
    }
    printf("\n");

    return 0;
}
