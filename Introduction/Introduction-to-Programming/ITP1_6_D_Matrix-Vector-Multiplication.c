// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D

#include <stdio.h>

int main()
{
    int i, j;

    int n, m;
    scanf("%d%d", &n, &m);
    int A[n][m], B[m];
    for( i = 0; i < n; ++i )
        for( j = 0; j < m; ++j )
            scanf("%d", &A[i][j]);
    for( i = 0; i < m; ++i )
        scanf("%d", &B[i]);

    int x[n];
    for( i = 0; i < n; ++i ) x[i] = 0;
    for( i = 0; i < n; ++i )
        for( j = 0; j < m; ++j )
            x[i] += A[i][j] * B[j];

    for( i = 0; i < n; ++i )
        printf("%d\n", x[i]);

    return 0;
}
