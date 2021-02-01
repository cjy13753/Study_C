#include <stdio.h>
#include <float.h>

int main()
{
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(long double));

    float f = 123.456f;
    double d = 123.456;

    float f2 = 123.456;
    double d2 = 123.456f;

    int i = 3;
    float f3 = 3.f;
    double d3 = 3.;

    float f4 = 1.234e10f;

    float f5 = 0xb.ap1;
    double d5 = 1.0625e0;

    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);

    return 0;
}