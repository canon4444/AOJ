// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D

#include <stdio.h>

int main()
{
    int i;

    //入力
    int n;
    scanf("%d", &n);
    int R[n];
    for( i = 0; i < n; ++i )
        scanf("%d", &R[i]);

    //minが最小になるようにmaxを選ぶ
    int min = R[0], max = R[1] - R[0];
    for( i = 1; i < n; ++i ){
        max = max < R[i] - min ? R[i] - min : max;
        min = min > R[i] ? R[i] : min; //minは後から更新しないと R[i]-min == min-min になる
    }

    printf("%d\n", max);

    return 0;
}
