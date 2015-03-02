// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_C

#include <stdio.h>

int main()
{
    int i, j;

    int r, c;
    scanf("%d%d", &r, &c);
    int a[r+1][c+1];
    for( i = 0; i < r+1; ++i )
        for( j = 0; j < c+1; ++j )
            a[i][j] = 0;
    for( i = 0; i < r; ++i )
        for( j = 0; j < c; ++j )
            scanf("%d", &a[i][j]);

    int sum;
    for( i = 0; i < r; ++i ){
        sum = 0;
        for( j = 0; j < c; ++j ){
            sum += a[i][j];
        }
        a[i][j] = sum;
    }
    for( i = 0; i < c+1; ++i ){
        sum = 0;
        for( j = 0; j < r; ++j ){
            sum += a[j][i];
        }
        a[j][i] = sum;
    }
    for( i = 0; i < r+1; ++i ){
        for( j = 0; j < c+1; ++j ){
            printf("%d", a[i][j]);
            if( j != c ) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
