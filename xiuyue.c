#include <windows.h>
#include <math.h>
__declspec(dllexport) double __stdcall
xiuyue_js(double v, int d, double step)
{
    if (v == 0.0) return 0.0;
    double ri = (d != 0) ? pow(10.0, -d) : (step > 0 ? step : 0.0/0.0);
    double m = fabs(v) / ri;
    double f = floor(m + 0.5);
    if (m - f == -0.5 && ((int)floor(m) & 1)) f -= 1.0;
    return (v < 0 ? -1 : 1) * f * ri;
}