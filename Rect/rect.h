
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

typedef struct
{
    Point p;
    double width;
    double height;
} Rect;

void rect_init(Rect *_rect,
               double x, double y,
               double width, double height);

#endif
