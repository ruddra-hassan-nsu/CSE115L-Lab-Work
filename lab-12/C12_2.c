#include <stdio.h>

void bump_cgpa(double *cgpap);
void read_marks(int *markp);
void split_fee(double fee, double *hallp, double *tuitionp);

int main(void) {
    double cgpa = 3.21;
    int marks = 0;
    double hall = 0.0, tuition = 0.0;

    bump_cgpa(&cgpa);
    printf("cgpa %.2f\n", cgpa);

    read_marks(&marks);
    printf("marks %d\n", marks);

    split_fee(45000.0, &hall, &tuition);
    printf("hall %.2f\n", hall);
    printf("tuition %.2f\n", tuition);

    printf("address %p\n", &marks);

    return 0;
}

void bump_cgpa(double *cgpap) { *cgpap = *cgpap + 0.10; }
void read_marks(int *markp) { *markp = 88; }
void split_fee(double fee, double *hallp, double *tuitionp) {
    *hallp = fee * 0.30;
    *tuitionp = fee * 0.70;
}
