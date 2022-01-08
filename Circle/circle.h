
#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

extern const double circle_pi;

typedef struct
{
    Point p;
    double r;
}Circle;

void circle_init(Circle * _circle, double x, double y, double r);

#endif // CIRCLE_H

