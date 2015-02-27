// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_B

#include <stdio.h>

int main()
{
    int i;

    //標準入力
    int n, S[13], H[13], C[13], D[13], rank;
    char ch[256];
    for( i = 0; i < 13; ++i ) S[i] = H[i] = C[i] = D[i] = 0; //初期化
    scanf("%d", &n);
    for( i = 0; i < n; ++i ){
        scanf("%s%d", ch, &rank);
        switch( ch[0] ){
        case 'S': S[rank-1] = 1; break;
        case 'H': H[rank-1] = 1; break;
        case 'C': C[rank-1] = 1; break;
        case 'D': D[rank-1] = 1; break;
        default: printf("default switch( ch[0] )\n"); break;
        }
    }

    //標準出力
    for( i = 0; i < 13; ++i )
        if( S[i] == 0 ) printf("S %d\n", i+1);
    for( i = 0; i < 13; ++i )
        if( H[i] == 0 ) printf("H %d\n", i+1);
    for( i = 0; i < 13; ++i )
        if( C[i] == 0 ) printf("C %d\n", i+1);
    for( i = 0; i < 13; ++i )
        if( D[i] == 0 ) printf("D %d\n", i+1);

    return 0;
}
