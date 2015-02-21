// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_A

#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int H, W;
    struct node *next;
} node;
 
 
int main()
{
    node *head = NULL, *cur = NULL;
 
    while( 1 ){
        //メモリ確保
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) fprintf(stderr, "ERROR! : malloc\n"), exit(-1);
 
        //標準入力
        scanf("%d %d", &new->H, &new->W);
        new->next = NULL;
 
        //終了判定
        if( 0 == new->H && 0 == new->W ) break;
 
        //連結
        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }
 
    //標準出力
    cur = head;
    while( cur ){
        int i, j;
        for( i = 0; i < cur->H; ++i ){
            for( j = 0; j < cur->W; ++j ){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
        cur = cur->next;
    }
 
    return 0;
}
