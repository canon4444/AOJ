// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_D

#include <stdio.h>
#include <math.h>

int main()
{
    int i;

    int n;
    scanf("%d", &n);
    int x[n], y[n];
    for( i = 0; i < n; ++i )
        scanf("%d", &x[i]);
    for( i = 0; i < n; ++i )
        scanf("%d", &y[i]);

    int p;
    double D;
    for( p = 1; p < 4; ++p ){
        D = 0;
        for( i = 0; i < n; ++i )
            D += (double)(pow(fabs(x[i] - y[i]), p));
        D = (double)pow(D, 1.0/p);
        printf("%lf\n", D);
    }

    D = 0;
    for( i = 0; i < n; ++i ){
        double tmp = (double)(fabs(x[i] - y[i]));
        D = D < tmp ? tmp : D;
    }
    printf("%lf\n", D);

    return 0;
}
