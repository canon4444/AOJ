// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_B

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { top, south, east, west, north, bottom, NUM_SIDES } sides;

sides getOperator()
{
    return rand() % north + 1;
}

void roll(int *dice, const sides operator)
{
    int anti_op;
    switch( operator ){
    case south: anti_op = north; break;
    case east: anti_op = west; break;
    case west: anti_op = east; break;
    case north: anti_op = south; break;
    default: break;
    }

    int tmp = dice[operator];
    dice[operator] = dice[top];
    dice[top] = dice[anti_op];
    dice[anti_op] = dice[bottom];
    dice[bottom] = tmp;
}

int main()
{
    int i;

    srand(time(0));

    int q, dice[NUM_SIDES];
    for( i = 0; i < NUM_SIDES; ++i )
        scanf("%d", &dice[i]);
    scanf("%d", &q);

    for( i = 0; i < q; ++i ){
        int up, front;
        scanf("%d%d", &up, &front);
        sides operator = getOperator();
        while( dice[top] != up || dice[south] != front ){
            roll(dice, operator);
            operator = getOperator();
        }
        printf("%d\n", dice[east]);
    }

    return 0;
}
