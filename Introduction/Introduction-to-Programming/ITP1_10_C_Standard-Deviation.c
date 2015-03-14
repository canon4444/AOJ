// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node {
    double alpha;
    struct node *next;
} node;

int main()
{
    int i;

    node *head = NULL, *cur = NULL;
    while( 1 ){
        //入力
        int n;
        scanf("%d", &n);
        if( n == 0 ) break;
        int s[n];
        for( i = 0; i < n; ++i )
            scanf("%d", &s[i]);

        //平均得点
        double m = 0;
        for( i = 0; i < n; ++i )
            m += s[i];
        m = (double)(m / n);

        //メモリ確保
        node *new = (node *)malloc(sizeof(node));
        if( new == NULL ) exit(-1);
        new->alpha = (double)0;
        new->next = NULL;

        //標準偏差を計算
        for( i = 0; i < n; ++i )
            new->alpha += pow(s[i]-m, 2);
        new->alpha = (double)(new->alpha / n);
        new->alpha = sqrt(new->alpha);

        //ノードを連結
        if( head == NULL ) head = new;
        else cur->next = new;
        cur = new;
    }

    //出力
    cur = head;
    while( cur ){
        printf("%lf\n", cur->alpha);
        cur = cur->next;
    }

    return 0;
}
