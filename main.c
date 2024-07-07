#include <stdio.h>

int main() {
    double t1, t2, t3;
    
    // Зчитуємо значення t1, t2, t3
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    // Визначаємо швидкість кожного гостя
    double rate1 = 1.0 / t1;
    double rate2 = 1.0 / t2;
    double rate3 = 1.0 / t3;
    
    // Визначаємо загальну швидкість
    double total_rate = rate1 + rate2 + rate3;
    
    // Визначаємо час, потрібний для з'їдання пирога разом
    double time_needed = 1.0 / total_rate;
    
    // Виводимо результат, округлений до 2 знаків після коми
    printf("%.2lf\n", time_needed);
    
    return 0;
}
