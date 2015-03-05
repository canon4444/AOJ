// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_B

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char x[10001];
    struct node *next;
} node;

int main(void) {
    int i;

    node *head = NULL, *cur = NULL;
    while( 1 ){
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) exit(-1);
        scanf("%s", new->x);
        new->next = NULL;
        if( new->x[0] == '0' ) break;
        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }

    int sum;
    cur = head;
    while( cur ){
        sum = 0;
        for( i = 0; cur->x[i]; ++i ){
            sum += cur->x[i] - '0';
        }
        printf("%d\n", sum);
        cur = cur->next;
    }
  
    return 0;
}
