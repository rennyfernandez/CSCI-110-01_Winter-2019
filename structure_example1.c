#include<stdio.h>
 struct student
{
    char name[100];
    int rollNumber;
    float gpa;
} record1, record2, record3;

int main(void) {
    struct student record1 = {"Jill", 45551222, 4.5};
    struct student record2 = {"Jack", 45551223, 4.5};
    struct student record3 = {"jared",45551224, 4.5};

    printf("%s\n", record1.name);
    printf("%s\n", record2.name);
    printf("%s\n", record3.name);

    return 0;
}
