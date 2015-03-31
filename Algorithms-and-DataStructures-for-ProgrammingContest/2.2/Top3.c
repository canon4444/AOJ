//10個の整数から上位3個を出力

#include <stdio.h>

void Algorithm1(int score[])
{
    int i, j;

    int A[10];
    for( i = 0; i < 10; ++i ) A[i] = score[i];

    for( i = 0; i < 3; ++i ){
        int max = 0;
        for( j = 0; j < 10; ++j ) max = A[max] < A[j] ? j : max; //最大値の添字を保存
        printf("%d", A[max]);
        if( i != 2 ) printf(" ");
        A[max] = 0; //再度最大値として選ばないように
    }
    printf("\n");
}

void Algorithm2(int score[])
{
    int i, j;

    int A[10];
    for( i = 0; i < 10; ++i ) A[i] = score[i];

    //ソート
    for( i = 0; i < 10; ++i )
        for( j = i+1; j < 10; ++j )
            if( A[i] < A[j] ){
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }

    printf("%d %d %d\n", A[0], A[1], A[2]);
}

void Algorithm3(int score[])
{
    int i, j;

    int C[101];
    for( i = 0; i < 101; ++i ) C[i] = 0;
    for( i = 0; i < 10; ++i ) ++C[score[i]]; //i点の人数

    int cnt = 0;
    for( i = 100; -1 < i; --i ){
        if( 0 <  C[i] ) //i点の人が1人以上いたら
            for( j = 0; j < C[i]; ++j ){ //人数分だけ出力
                printf("%d", i);
                if( ++cnt == 3 ) break;
                printf(" ");
            }
        if( cnt == 3 ) break;
    }

    printf("\n");
}

int main()
{
    int i;

    int score[10];
    for( i = 0; i < 10; ++i )
        scanf("%d", &score[i]);

    printf("Algorithm1: "); Algorithm1(score);
    printf("Algorithm2: "); Algorithm2(score);
    printf("Algorithm3: "); Algorithm3(score);

    return 0;
}
