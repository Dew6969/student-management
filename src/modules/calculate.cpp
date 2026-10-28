#include <stdio.h>

struct Student {
    int id;
	char name[40];
	float score;	
};

float calculatAverage(struct Student s[],int n){

    float sum = 0;
    
    if (n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sum += s[i].score;
    }

    return sum / n;
}

char calculateGrade(float score) {
    if (score >= 80)
        return 'A';
    else if (score >= 70)
        return 'B';
    else if (score >= 60)
        return 'C';
    else if (score >= 50)
        return 'D';
    else
        return 'F';
}
int main() {
    struct Student s[3] = {
        {1, "Somchai", 85},
        {2, "Somsri", 72},
        {3, "Somsak", 48}
    };

    int n = 3;

    printf("Average score: %.2f\n",
           calculatAverage(s, n));

    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Score: %.2f, Grade: %c\n",
               s[i].id,
               s[i].name,
               s[i].score,
               calculateGrade(s[i].score));
    }

    return 0;
}
