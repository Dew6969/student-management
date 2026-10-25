#include <stdio.h>

struct Student {
    int id;
    char name[40];
    float score;
};

struct Student students[100] = {
    { 690001, "Somchai", 91.0f },
    { 690002, "Somsri", 20.0f },
    { 690003, "Somsak", 59.0f },
    { 690004, "Sompong", 86.0f }
};
int studentCount = 4;

void showStudent();

int main() {
    showStudent();

    return 0;
}

void showStudent() {
    if (studentCount == 0) {
        printf("There are no student in record.\n");
        return;
    }

    printf("Student List:\n");
    printf("ID\t\tName\t\t\tScore\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d\t\t%s\t\t\t%.2f\n", students[i].id, students[i].name, students[i].score);
    }
}
