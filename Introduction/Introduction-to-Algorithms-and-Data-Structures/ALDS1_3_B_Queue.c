// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B&lang=jp

#include <stdio.h>


// キューの構造体
typedef struct {
    char name[11];
    int time;
} Queue;


int main()
{
    //入力
    int n, q;
    scanf("%d%d", &n, &q);

    int size = 2 * n; //キューのサイズ
    Queue Queue[size];
    int pre = 0, rear = 0, cnt = 0; //pre:enqueue, rear:inqueue, cnt:経過時間
    for( rear = 0; rear < n; ++rear )
        scanf("%s %d", Queue[rear].name, &Queue[rear].time);


    //処理と出力
    while( pre != rear ){
        if( Queue[pre].time <= q ){ // if( Queue[pre].time == q ){ inqueueしない }
            cnt += Queue[pre].time;
            printf("%s %d\n", Queue[pre].name, cnt);
        } else {
            cnt += q;
            Queue[pre].time -= q;
            Queue[rear] = Queue[pre]; //inqueue
            rear = (rear + 1) % size; //次のinqueue先
        }

        //次のdequeue先
        pre = (pre + 1) % size;
    }


    return 0;
}
