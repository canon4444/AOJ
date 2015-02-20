// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B

#include <stdio.h>
#include <math.h>
 
int main()
{
    double r;
    scanf("%lf", &r);
 
    printf("%f %f\n", M_PI * r * r, 2 * M_PI * r);
 
    return 0;
}
