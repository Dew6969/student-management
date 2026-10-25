#include <stdio.h>
#include <stdbool.h>

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

int findStudent(int* id);
void sortStudent();

int main() {
    findStudent(NULL);

    return 0;
}

int findStudent(int* id) {
    int searchId;
    int low = 0, mid, high = studentCount - 1;
    bool flag = false;

    if (!(studentCount > 0)) {
        printf("There are no student in record.\n");
        return -1;
    }

    if (id == NULL) {
        printf("Find student ID: ");
        scanf("%d", &searchId);
        id = &searchId;
    }

    sortStudent();

    while (low <= high && !flag) {
        mid = (low + high) / 2;

        if (students[mid].id == *id) {
            flag = true;

            printf("Student ID: %d\n", students[mid].id);
            printf("Student Name: %s\n", students[mid].name);
            printf("Student Score: %.2f\n", students[mid].score);

            return mid;

        } else if (students[mid].id < *id) {

            low = mid + 1;

        } else {

            high = mid - 1;

        }
    }

    if (!flag) {
        printf("Student ID %d not found.\n", *id);
    }
    
    return -1;
}

void sortStudent() {
    struct Student temp;
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
