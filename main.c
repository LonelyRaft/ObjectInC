

#include <stdio.h>
#include <stdlib.h>
#include "circle.h"
#include "rect.h"

int main(int argc, char const *argv[])
{
    Circle circle;
    Rect rect;
    circle_init(&circle, 1, 2, 1);
    rect_init(&rect, 3, 4, 3, 4);
    printf("\nCircle area: %.3f\nCircle diam: %.3f\n",
           sparrow_area(&circle), sparrow_diam(&circle));
    printf("\nRect area: %.3f\nRect diam: %.3f\n",
           sparrow_area(&rect), sparrow_diam(&rect));
    return 0;
}
