// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_D

#include <stdio.h>
#include <string.h>

void print(char *str, const int a, const int b)
{
    int i;

    for( i = a; i < b+1; ++i )
        printf("%c", str[i]);
    printf("\n");
}

void reverse(char *dst, const int a, const int b)
{
    int i, j;
    char src[1001];

    strcpy(src, dst);

    for( i = a, j = b; i < b+1; ++i, --j )
        dst[i] = src[j];
}

void replace(char *dst, const int a, const int b)
{
    int i, j;

    char p[1001];
    scanf("%s", p);

    for( i = a, j = 0; i < b+1; ++i, ++j )
        dst[i] = p[j];
}

int main()
{
    int i;

    char str[1001], op[256];
    int q, a, b;
    scanf("%s%d", str, &q);
    for( i = 0; i < q; ++i ){
        scanf("%s%d%d", op, &a, &b);
        if( strcmp("print", op) == 0 ) print(str, a, b);
        else if( strcmp("reverse", op) == 0 ) reverse(str, a, b);
        else if( strcmp("replace", op) == 0 ) replace(str, a, b);
    }

    return 0;
}
