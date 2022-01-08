
#ifndef POINT_H
#define POINT_H

typedef struct Point Point;

#define sparrow_area(x) (((Point*)x)->spr->spr_area((Point*)x))
#define sparrow_prim(x) (((Point*)x)->spr->spr_prim((Point*)x))
#define sparrow_diam(x) (((Point*)x)->spr->spr_diam((Point*)x))
#define sparrow_volu(x) (((Point*)x)->spr->spr_volu((Point*)x))

typedef struct
{
    double (*spr_area)(Point *); // 面积
    double (*spr_prim)(Point *); // 周长
    double (*spr_diam)(Point *); // 直径
    double (*spr_volu)(Point *); // 体积
} PointFunc;

typedef struct Point
{
    double x;
    double y;
    const PointFunc *spr;
} Point;

void point_init(Point *_point, double x, double y);

#endif
