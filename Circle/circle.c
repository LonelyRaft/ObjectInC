
#include "circle.h"

const double circle_pi = 3.1415926;

static double spr_area(Circle *_circle)
{
    if (0 == _circle)
        return 0;
    return circle_pi * _circle->r * _circle->r;
}

static double spr_prim(Circle *_circle)
{
    if (0 == _circle)
        return 0;
    return 2 * circle_pi * _circle->r;
}

static double spr_diam(Circle *_circle)
{
    if (0 == _circle)
        return 0;
    return 2 * _circle->r;
}

static double spr_volu(Circle *_circle)
{
    return 0;
}

static const PointFunc func_circle = {
    (double (*)(Point *))spr_area,
    (double (*)(Point *))spr_prim,
    (double (*)(Point *))spr_diam,
    (double (*)(Point *))spr_volu,
};

void circle_init(Circle *_circle, double x, double y, double r)
{
    if (0 == _circle)
        return;
    _circle->p.x = x;
    _circle->p.y = y;
    _circle->p.spr = &func_circle;
    _circle->r = r;
}
