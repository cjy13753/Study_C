#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    // round-off errors (ex1)
    float c, d;
    c = 1.0E20f + 1.0f;
    d = c - 1.0E20f;
    printf("%F\n", d);

    // round-off erros (ex2)
    float a = 0.0f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;
    a = a + 0.01f;

    printf("%f\n", a);

    // overflow
    float max = FLT_MAX;
    printf("%f\n", max);
    max = max * 100.0f;
    printf("%f\n", max);

    // underflow
    float f = __FLT_DENORM_MIN__;
    printf("%e\n", f);
    f = f / 100.0f; // subnormal
    printf("%e\n", f);

    // divide by 0
    float e = 10.40f;
    printf("%f\n", e);
    e = e / 0.0f;
    printf("%f\n", e);

    // asinf
    float g = asinf(1.0f);
    printf("%f\n", g);

    g = asinf(2.0f);
    printf("%f\n", g);
    
    return 0;
}