#include <stdio.h>

// ฟังก์ชันรับค่าคะแนน
void inputScores(float arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);

        printf("Math: ");
        scanf("%f", &arr[i][0]);

        printf("Physics: ");
        scanf("%f", &arr[i][1]);

        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

// ฟังก์ชันแสดงตารางคะแนน
void printTable(float arr[3][3]) {
    printf("\nStudent Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%.0f\t", arr[i][j]); 
        }
        printf("\n");
    }
}

// ฟังก์ชันแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[3][3]) {
    float sumMath = 0, sumPhysics = 0, sumChemistry = 0;
    
    for (int i = 0; i < 3; i++) {
        sumMath += arr[i][0];
        sumPhysics += arr[i][1];
        sumChemistry += arr[i][2];
    }

    printf("\nAverage scores of each subject:\n");
    printf("Math: %.2f\n", sumMath / 3.0);
    printf("Physics: %.2f\n", sumPhysics / 3.0);
    printf("Chemistry: %.2f\n", sumChemistry / 3.0);
}

int main() {
    float scores[3][3]; // 3 คน × 3 วิชา

    inputScores(scores);     // รับข้อมูล
    printTable(scores);      // แสดงตาราง
    printAverage(scores);    // แสดงค่าเฉลี่ย

    return 0;
}