// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B

#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int cnt, num;
    struct node *next;
} node;
 
int main()
{
    int cnt, num;
    node *head = NULL, *cur = NULL;
 
    for( cnt = 1; scanf("%d", &num), num; ++cnt ){
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) exit(-1);
        new->cnt = cnt; new->num = num; new->next = NULL;
        if( head == NULL ){ head = new; }
        else { cur->next = new; }
        cur = new;
    }
 
    cur = head;
    while( cur ){
        printf("Case %d: %d\n", cur->cnt, cur->num);
        cur = cur->next;
    }
 
    return 0;
}
