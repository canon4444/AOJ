// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_C

#include <stdio.h>

int main()
{
    int i, j, k;

    //標準入力
    int n, b, f, r, v;
    int resident[4][3][10];
    for( i = 0; i < 4; ++i )
        for( j = 0; j < 3; ++j )
            for( k = 0; k < 10; ++k )
                resident[i][j][k] = 0;
    scanf("%d", &n);
    for( i = 0; i < n; ++i ){
        scanf("%d%d%d%d", &b, &f, &r, &v);
        resident[b-1][f-1][r-1] += v;
    }

    //標準出力
    for( i = 0; i < 4; ++i ){
        for( j = 0; j < 3; ++j ){
            for( k = 0; k < 10; ++k ){
                printf(" %d", resident[i][j][k]);
            }
            printf("\n");
        }
        if( i < 3 ) printf("####################\n");
    }

    return 0;
}
