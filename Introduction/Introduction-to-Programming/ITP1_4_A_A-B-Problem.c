// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A

#include <stdio.h>
 
int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
 
    printf("%d %d %f\n", (int)a / (int)b, (int)a % (int)b, a / b);
 
    return 0;
}
