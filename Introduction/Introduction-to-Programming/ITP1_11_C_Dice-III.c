// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { top, south, east, west, north, bottom, NUM_SIDES } sides;

int checkDice(const int dice0[], const int dice1[])
{
    int i, flag = 1;

    for( i = 0; i < NUM_SIDES && flag; ++i )
        if( dice0[i] != dice1[i] )
            flag = 0;

    return flag;
}

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

    int dice0[NUM_SIDES], dice1[NUM_SIDES];
    for( i = 0; i < NUM_SIDES; ++i )
        scanf("%d", &dice0[i]);
    for( i = 0; i < NUM_SIDES; ++i )
        scanf("%d", &dice1[i]);

    sides operator = getOperator();
    while( dice0[top] != dice1[top] || dice0[south] != dice1[south] ){
        roll(dice1, operator);
        operator = getOperator();
    }

    if( checkDice(dice0, dice1) ) printf("Yes\n");
    else printf("No\n");

    return 0;
}
