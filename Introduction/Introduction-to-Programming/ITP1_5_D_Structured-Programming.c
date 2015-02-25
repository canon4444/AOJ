// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_D

#include <stdio.h>

void CHECK_NUM(const int i, int *x)
{
    *x = i;
}

int INCLUDE3(const int i, const int x)
{
    if( x % 10 == 3 ){
        printf(" %d", i);
        return 1;
    }

    return 0;
}

/* 1からn以下の自然数のうち
   + 3で割り切れるもの
   + 下一桁が3であるもの
   + 再帰した商の下一桁が3であるもの
   を出力する
*/
void call(int n)
{
    int i = 1, x;

    do{
        CHECK_NUM(i, &x); // x = i
        if( x % 3 == 0 ){ // xは3の倍数
            printf(" %d", i);
            continue;
        }
        if( INCLUDE3(i, x) ) continue; // xの一の位が3
        while( x /= 10, x ) // xを10で割った商が0でない（xが1桁でない）
            if( INCLUDE3(i, x) ) break; // xの一の位が3
    }while( ++i <= n );

    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    call(n);

    return 0;
}
