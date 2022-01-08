
#include "point.h"

static double spr_area(Point *_point)
{
    return 0;
}

static double spr_prim(Point *_point)
{
    return 0;
}

static double spr_diam(Point *_point)
{
    return 0;
}

static double spr_volu(Point *_point)
{
    return 0;
}

static const PointFunc func_origin = {
    spr_area,
    spr_prim,
    spr_diam,
    spr_volu,
};

void point_init(Point *_point, double x, double y)
{
    if (0 == _point)
        return;
    _point->x = x;
    _point->y = y;
    _point->spr = &func_origin;
}
