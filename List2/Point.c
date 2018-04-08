#include <stdio.h>
#include <stdlib.h>
#include "Point.h"

void ShowPointPos(Point *p){
    printf("[%d, %d]\n", p->x, p->y);
}

void SetPointPos(Point *p, int x, int y){
    p->x = x;
    p->y = y;
}
