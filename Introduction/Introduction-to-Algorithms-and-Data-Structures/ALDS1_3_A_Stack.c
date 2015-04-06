// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int value[100];
int sp = 0;

void push(const int val)
{
    value[sp++] = val;
}

int pop()
{
    return value[--sp];
}

void operand(const char operand[])
{
    push(atoi(operand));
}

void operator(const char operator)
{
    int tmp1 = pop(), tmp2 = pop();

    switch( operator ){
    case '+': push(tmp2 + tmp1); break;
    case '-': push(tmp2 - tmp1); break;
    case '*': push(tmp2 * tmp1); break;
    default : break;
    }
}

int main()
{
    while( 1 ){
        char ch[256];
        if( scanf("%s", ch) == EOF ) break;
        if( strcmp(ch, "\n") == 0 ) continue;
        
        switch( ch[0] ){
        case '+': case '-': case '*': operator(ch[0]); break;
        default : operand(ch); break;
        }
    }

    printf("%d\n", pop());

    return 0;
}
