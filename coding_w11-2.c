#include <stdio.h>

// ฟังก์ชันหาค่าเฉลี่ย
float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chemistry;
    float avg;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    avg = average(math, physics, chemistry);

  
    printf("Math = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}