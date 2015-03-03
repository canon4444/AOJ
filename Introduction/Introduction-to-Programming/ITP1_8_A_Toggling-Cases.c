// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_A

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;

    //Input
    int ch;
    char s[1200];
    for( i = 0; (ch = getchar()); ++i ){
        if( ch == '\n' ){ s[i] = '\0'; break; }
        else s[i] = ch;
    }

    //Processing
    for( i = 0; s[i]; ++i ){
        if( isalpha(s[i]) ){
            if( islower(s[i]) ) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }

    //Output
    printf("%s\n", s);

    return 0;
}
