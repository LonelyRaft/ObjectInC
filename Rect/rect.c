
#include "rect.h"
#include <math.h>

static double spr_area(Rect *_rect)
{
    if (0 == _rect)
        return 0;
    return _rect->height * _rect->width;
}

static double spr_prim(Rect *_rect)
{
    if (0 == _rect)
        return 0;
    return 2 * (_rect->width * _rect->height);
}

static double spr_diam(Rect *_rect)
{
    if (0 == _rect)
        return 0;
    return sqrt(_rect->height * _rect->height +
                _rect->width * _rect->width);
}

static double spr_volu(Rect *_rect)
{
    return 0;
}

static const PointFunc func_rect = {
    (double (*)(Point *))spr_area,
    (double (*)(Point *))spr_prim,
    (double (*)(Point *))spr_diam,
    (double (*)(Point *))spr_volu,
};

void rect_init(Rect *_rect,
               double x, double y,
               double width, double height)
{
    if (0 == _rect)
        return;
    _rect->p.x = x;
    _rect->p.y = y;
    _rect->p.spr = &func_rect;
    _rect->width = width;
    _rect->height = height;
}
