#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

typedef struct _point {
    int x,y;
} Point;

void ShowPointPos(Point *p);
void SetPointPos(Point *p, int x, int y);

//비교하는 함수 넣기

#endif // POINT_H_INCLUDED
