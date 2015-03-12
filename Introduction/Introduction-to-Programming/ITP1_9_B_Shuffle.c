// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_B

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char ch[201];
    struct node *next;
} node;

void func(char *dst, const int n)
{
    int i, j;
    char src[201];

    strcpy(src, dst);

    for( i = 0, j = n; src[j]; ++i, ++j ) //残ったカード
        dst[i] = src[j];

    for( j = 0; j < n; ++i, ++j ) //取り出したカード
        dst[i] = src[j];

    dst[i] = '\0';
}

int main()
{
    int i;

    node *head = NULL, *cur = NULL;
    while( 1 ){
        node *new = (node *)malloc(sizeof(node));
        scanf("%s", new->ch);
        if( new->ch[0] == '-' ) break;
        new->next = NULL;

        int m;
        scanf("%d", &m);

        int h;
        for( i = 0; i < m; ++i ){
            scanf("%d", &h);
            func(new->ch, h);
        }

        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }

    cur = head;
    while( cur ){
        printf("%s\n", cur->ch);
        cur = cur->next;
    }

    return 0;
}
