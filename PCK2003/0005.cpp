// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0005&lang=jp

#include <iostream>
#include <cstdio>
using namespace std;
 
 
long long int gcd(long long int a, long long int b)
{
    long long int ret;
     
    if( a < b ){
        long long int tmp = a;
        a = b;
        b = tmp;
    }
     
    if( b == 0 ) return a;
     
    ret = a % b;
    ret = gcd(b, ret);
     
    return ret;
}
 
 
long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a, b);
}
 
 
int main()
{
    while( 1 ){
        long long int a, b;
        if( scanf("%lld%lld", &a, &b) == EOF ) break;
        printf("%lld %lld\n", gcd(a, b), lcm(a, b));
    }
 
    return 0;
}
