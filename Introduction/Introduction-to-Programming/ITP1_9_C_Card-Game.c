// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_C

#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    int n;
    scanf("%d", &n);
    char taro[101], hanako[101];
    int score_taro = 0, score_hanako = 0, judge;
    for( i = 0; i < n; ++i ){
        scanf("%s%s", taro, hanako);
        judge = strcmp(taro, hanako);
        if( judge > 0 ) score_taro += 3;
        else if( judge < 0 ) score_hanako += 3;
        else ++score_taro, ++score_hanako;
    }

    printf("%d %d\n", score_taro, score_hanako);

    return 0;
}
