// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_C

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int i, n = 1;

    for( i = 'a'; i < 'z'; ++i ) ++n;
    int ch, sum[n];
    for( i = 0; i < n; ++i ) sum[i] = 0;
    while( ch = getchar(), ch != EOF ){
        if( isalpha(ch) ){
            ch = tolower(ch);
            sum[ch-'a'] += 1;
        }
    }

    for( i = 0; i < n; ++i )
        printf("%c : %d\n", 'a'+i, sum[i]);

    return 0;
}
