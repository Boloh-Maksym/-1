#include <stdio.h>

int main() {
    double t1, t2, t3;

    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double rate1 = 1.0 / t1;
    double rate2 = 1.0 / t2;
    double rate3 = 1.0 / t3;


    double total_rate = rate1 + rate2 + rate3;

    double time_needed = 1.0 / total_rate;


    printf("%.2lf\n", time_needed);

    return 0;
}
