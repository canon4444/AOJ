// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C

#include <stdio.h>
 
int main()
{
    int i, j;
 
    int n[3];
    for( i = 0; i < 3; ++i )
        scanf("%d", &n[i]);
 
    int tmp;
    for( i = 0; i < 3; ++i )
        for( j = i+1; j < 3; ++j )
            if( n[j] < n[i] ){
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
 
    for( i = 0; i < 3; ++i ){
        printf("%d", n[i]);
        if( i < 2 ) printf(" ");
        else printf("\n");
    }
 
    return 0;
}
