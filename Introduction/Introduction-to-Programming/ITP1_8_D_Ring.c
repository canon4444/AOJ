// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_D

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;

    char s[101], p[101];
    scanf("%s%s", s, p);

    int len_s = strlen(s);
    for( i = 0, j = 0, k = i; s[i]; k = ++i, j = 0 ){
        while( s[k] == p[j] ){
            k = (k + 1) % len_s;
            if( p[++j] == '\0' ){ printf("Yes\n"); return 0; }
        }
    }

    printf("No\n");

    return 0;
}
