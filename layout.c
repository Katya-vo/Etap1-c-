#include <math.h>
#include "layout.h"

void circle_layout(double *x, double *y, int n) {
  double R = 10.0;

    for (int i = 0; i < n; i++)
    {
        x[i] = R * cos(2 * M_PI * i / n);
        y[i] = R * sin(2 * M_PI * i / n);
    }
}



