#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

typedef struct _point {
    int x,y;
} Point;

void ShowPointPos(Point *p);
void SetPointPos(Point *p, int x, int y);

//���ϴ� �Լ� �ֱ�

#endif // POINT_H_INCLUDED
