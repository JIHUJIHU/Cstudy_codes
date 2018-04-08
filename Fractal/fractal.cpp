#include <windows.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14159

void drawSierpinskiTrialgle(HDC hDC, POINT points[])
{
    //시어핀스키 삼각형을 그리는 재귀함수를 정의하시오.
    //그려지는 삼각형의 한 변의 길이가 15 픽셀 이상일 때까지 그립니다.
    if(points[2].x-points[1].x<15)return;
    POINT newPoints[]={{(points[0].x+points[1].x)/2,(points[1].y+points[0].y)/2},
                        {points[0].x,points[1].y},
                        {(points[0].x+points[2].x)/2,(points[1].y+points[0].y)/2},
                        };
    //Sleep(10);
    Polygon(hDC,newPoints,3);
    POINT up[]={points[0],newPoints[0], newPoints[2]};
    POINT left[]={newPoints[0],points[1],newPoints[1]};
    POINT right[]={newPoints[2],newPoints[1],points[2]};
    drawSierpinskiTrialgle(hDC,up);
    drawSierpinskiTrialgle(hDC,left);
    drawSierpinskiTrialgle(hDC,right);

}

void SierpinskiTrialgle(HDC hDC, PAINTSTRUCT* ps, RECT* rect)
{
    HPEN hPen, hOldPen;
    HBRUSH hBrush, hOldBrush;
    POINT points[3];
    int xsize, ysize;

    xsize = rect->right - 20;
    ysize = xsize * sin(PI/3);

    points[0].x = rect->right/2;
    points[0].y = (rect->bottom - ysize)/2;
    points[1].x = (rect->right - xsize)/2;
    points[1].y = (rect->bottom + ysize)/2;
    points[2].x = (rect->right + xsize)/2;
    points[2].y = (rect->bottom + ysize)/2;

    hPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    hBrush = CreateSolidBrush((RGB(255, 255, 255)));
    hOldPen = (HPEN)SelectObject(hDC, hPen);
    hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

    Polygon(hDC, points, 3);

    DeleteObject(hPen);
    DeleteObject(hBrush);

    hPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    hBrush = CreateSolidBrush((RGB(255, 0, 0)));
    SelectObject(hDC, hPen);
    SelectObject(hDC, hBrush);

    drawSierpinskiTrialgle(hDC, points);

    SelectObject(hDC, hOldPen);
    SelectObject(hDC, hOldBrush);
    DeleteObject(hPen);
    DeleteObject(hBrush);
}

void drawSierpinskiCarpet(HDC hDC, int x, int y, int width, int height)
{
    int w=(width-x)/3;
    int h=(height-y)/3;
    if(w<5)return;
    Rectangle(hDC,x+w, y+h, width-w, height-h);

    drawSierpinskiCarpet(hDC, x, y, x+w, y+h);
    drawSierpinskiCarpet(hDC, x+w, y, width-w,y+h);
    drawSierpinskiCarpet(hDC, x+w+w,y, width,y+h);
    drawSierpinskiCarpet(hDC, x, y+h, x+w,y+h+h);
    drawSierpinskiCarpet(hDC, width-w,y+h, width ,y+h+h);
    drawSierpinskiCarpet(hDC, x,height-h, x+w,height);
    drawSierpinskiCarpet(hDC, x+w,height-h,width-w,height);
    drawSierpinskiCarpet(hDC, width-w,height-h,width,height);

}
int counts=3;
void drawothers(HDC hDC, int x, int y, int width, int height)
{
    int w=(width-x)/3;
    int h=(height-y)/3;
    if(w<5)return;
    Rectangle(hDC,x+w, y+h, width-w, height-h);

    drawothers(hDC, x, y, x+w, y+h);
    drawothers(hDC, x+w, y, width-w,y+h*2);
    drawothers(hDC, x+w+w,y, width,y+h);
    drawothers(hDC, x, y+h, x+w*2,y+h+h);
    drawothers(hDC, width-w*2,y+h, width ,y+h+h);
    drawothers(hDC, x,height-h, x+w,height);
    drawothers(hDC, x+w,height-h*2,width-w,height);
    drawothers(hDC, width-w,height-h,width,height);


}
/*void drawothers(HDC hDC, POINT points[]){
    if(points[2].x-points[1].x<15)return;
    POINT newPoints[]={{(points[0].x+points[2].x)/3,(points[0].y+points[2].y)/3},
                        {points[2].x,(points[0].y+points[2].y)/3},
                        {(points[0].x+points[2].x)/3*2,(points[0].y+points[2].y)/3*2},
                        };
    //Sleep(10);
    Polygon(hDC,newPoints,3);
    POINT one[]={points[0],newPoints[0], newPoints[2]};
    POINT two[]={newPoints[0],points[1],newPoints[1]};
    POINT three[]={newPoints[2],newPoints[1],points[2]};
    drawSierpinskiTrialgle(hDC,one);
    drawSierpinskiTrialgle(hDC,two);
    drawSierpinskiTrialgle(hDC,three);
}*/
void SierpinskiCarpet(HDC hDC, PAINTSTRUCT* ps, RECT* rect)
{
    HPEN hPen, hOldPen;
    HBRUSH hBrush, hOldBrush;

    hPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    hBrush = CreateSolidBrush((RGB(0, 0, 0)));
    hOldPen = (HPEN)SelectObject(hDC, hPen);
    hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

    Rectangle(hDC, 0, 0, rect->right, rect->bottom);

    DeleteObject(hPen);
    DeleteObject(hBrush);

    hPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    hBrush = CreateSolidBrush((RGB(255, 0, 0)));
    SelectObject(hDC, hPen);
    SelectObject(hDC, hBrush);

    drawSierpinskiCarpet(hDC, 0, 0, rect->right, rect->bottom);

    SelectObject(hDC, hOldPen);
    SelectObject(hDC, hOldBrush);

    DeleteObject(hPen);
    DeleteObject(hBrush);
}


void OtherFractal(HDC hDC, PAINTSTRUCT* ps, RECT* rect)
{
    HPEN hPen, hOldPen;
    HBRUSH hBrush, hOldBrush;

    hPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    hBrush = CreateSolidBrush((RGB(0, 0, 0)));
    hOldPen = (HPEN)SelectObject(hDC, hPen);
    hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

    Rectangle(hDC, 0, 0, rect->right, rect->bottom);

    DeleteObject(hPen);
    DeleteObject(hBrush);

    hPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    hBrush = CreateSolidBrush((RGB(255, 0, 90)));
    SelectObject(hDC, hPen);
    SelectObject(hDC, hBrush);

    drawothers(hDC, 0, 0, rect->right, rect->bottom);

    SelectObject(hDC, hOldPen);
    SelectObject(hDC, hOldBrush);

    DeleteObject(hPen);
    DeleteObject(hBrush);
    /*HPEN hPen, hOldPen;
    HBRUSH hBrush, hOldBrush;
    POINT points[3];
    int xsize, ysize;

    xsize = rect->right - 20;
    ysize = xsize * sin(PI/3);

    points[0].x = rect->right/2;
    points[0].y = (rect->bottom - ysize)/2;
    points[1].x = (rect->right - xsize)/2;
    points[1].y = (rect->bottom + ysize)/2;
    points[2].x = (rect->right + xsize)/2;
    points[2].y = (rect->bottom + ysize)/2;

    hPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
    hBrush = CreateSolidBrush((RGB(255, 255, 255)));
    hOldPen = (HPEN)SelectObject(hDC, hPen);
    hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

    Polygon(hDC, points, 3);

    DeleteObject(hPen);
    DeleteObject(hBrush);

    hPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    hBrush = CreateSolidBrush((RGB(255, 0, 0)));
    SelectObject(hDC, hPen);
    SelectObject(hDC, hBrush);

    drawothers(hDC, points);

    SelectObject(hDC, hOldPen);
    SelectObject(hDC, hOldBrush);
    DeleteObject(hPen);
    DeleteObject(hBrush);*/

}
