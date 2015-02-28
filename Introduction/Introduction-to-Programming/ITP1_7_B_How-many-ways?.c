// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int n, x;
    struct node *next;
} node;

int main()
{
    int i, j, k;

    node *head = NULL, *cur = NULL;
    while( 1 ){
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) exit(-1);
        scanf("%d%d", &new->n, &new->x);
        if( new->n == 0 && new->x == 0 ){
            free(new);
            break;
        }
        new->next = NULL;
        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }

    int kind;
    cur = head;
    while( cur ){
        kind = 0;
        for( i = 1; i <= cur->n; ++i )
            for( j = i+1; j <= cur->n; ++j )
                for( k = j+1; k <= cur->n; ++k )
                    if( i + j + k == cur->x ) ++kind;
        cur = cur->next;
        printf("%d\n", kind);
    }

   return 0;
}
