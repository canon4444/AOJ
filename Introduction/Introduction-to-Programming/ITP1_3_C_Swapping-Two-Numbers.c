// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C

#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int a, b;
    struct node *next;
} node;
 
int main()
{
    int a, b;
    node *head = NULL, *cur = NULL;
 
    while( scanf("%d%d", &a, &b), a | b ){
        //確保と格納
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) exit(-1);
        if( a < b ){ new->a = a; new->b = b; }
        else { new->a = b; new->b = a; }
        new->next = NULL;
 
        //連結
        if( head == NULL ){ head = new; }
        else { cur->next = new; }
        cur = new;
    }
 
    cur = head;
    while( cur ){
        printf("%d %d\n", cur->a, cur->b);
        cur = cur->next;
    }
 
    return 0;
}
