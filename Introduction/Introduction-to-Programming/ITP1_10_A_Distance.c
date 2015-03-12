// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_A

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    printf("%lf\n", (double)hypot(x1-x2, y1-y2));

    return 0;
}
