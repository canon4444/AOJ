// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C

#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int a, b;
    char op;
    struct node *next;
} node;
 
int main()
{
    node *head = NULL, *cur = NULL;
    while( 1 ){
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) exit(-1);
        scanf("%d%*c%c%*c%d%*c", &new->a, &new->op, &new->b);
        new->next = NULL;
 
        if( new->op == '?' ) break;
 
        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }
 
    cur = head;
    while( cur ){
        switch( cur->op ){
        case '+': printf("%d\n", cur->a + cur->b); break;
        case '-': printf("%d\n", cur->a - cur->b); break;
        case '*': printf("%d\n", cur->a * cur->b); break;
        case '/': printf("%d\n", cur->a / cur->b); break;
        default : printf("default operand\n");
        }
        cur = cur->next;
    }
 
    return 0;
}
