//m個の整数から上位n個を出力

#include <stdio.h>
#include <math.h>

void Algorithm1(const int score[], const int m, const int n)
{
    int i, j;

    int A[m];
    for( i = 0; i < m; ++i ) A[i] = score[i];

    for( i = 0; i < n; ++i ){
        int max = 0;
        for( j = 0; j < m; ++j ) max = A[max] < A[j] ? j : max; //最大値の添字を保存
        printf("%d", A[max]);
        if( i != n-1 ) printf(" ");
        A[max] = 0; //再度最大値として選ばないように
    }
    printf("\n");
}

void Algorithm2(const int score[], const int m, const int n)
{
    int i, j;

    int A[m];
    for( i = 0; i < m; ++i ) A[i] = score[i];

    //ソート
    for( i = 0; i < m; ++i )
        for( j = i+1; j < m; ++j )
            if( A[i] < A[j] ){
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }

    //printf("%d %d %d\n", A[0], A[1], A[2]);
    for( i = 0; i < n; ++i ){
        printf("%d", A[i]);
        if( i != n-1 ) printf(" ");
    }
    printf("\n");
}

void Algorithm3(const int score[], const int m, const int n)
{
    int i, j;

    int a = (int)pow(10, 6);
    int C[a+1];
    for( i = 0; i < a+1; ++i ) C[i] = 0;
    for( i = 0; i < m; ++i ) ++C[score[i]]; //i点の人数

    int cnt = 0;
    for( i = a; -1 < i; --i ){
        if( 0 <  C[i] ) //i点の人が1人以上いたら
            for( j = 0; j < C[i]; ++j ){ //人数分だけ出力
                printf("%d", i);
                if( ++cnt == n ) break;
                printf(" ");
            }
        if( cnt == n ) break;
    }

    printf("\n");
}

int main()
{
    int i;

    int m, n;
    scanf("%d%d", &m, &n);
    int score[m];
    for( i = 0; i < m; ++i )
        scanf("%d", &score[i]);

    printf("Algorithm1: "); Algorithm1(score, m, n);
    printf("Algorithm2: "); Algorithm2(score, m, n);
    printf("Algorithm3: "); Algorithm3(score, m, n);

    return 0;
}
