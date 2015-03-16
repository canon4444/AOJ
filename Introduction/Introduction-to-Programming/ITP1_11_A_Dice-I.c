// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_A

#include <stdio.h>

typedef enum { top, south, east, west, north, bottom, NUM_SIDES } sides;

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

    int dice[NUM_SIDES];
    char operator[101];
    for( i = 0; i < NUM_SIDES; ++i )
        scanf("%d", &dice[i]);
    scanf("%s", operator);

    for( i = 0; operator[i]; ++i ){
        switch( operator[i] ){
        case 'E': roll(dice, east); break;
        case 'N': roll(dice, north); break;
        case 'S': roll(dice, south); break;
        case 'W': roll(dice, west); break;
        }
    }

    printf("%d\n", dice[top]);

    return 0;
}
