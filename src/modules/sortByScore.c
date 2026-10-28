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

void sortByScore(struct Student S[], int n, int t);	
void Showstudents();
int main() {
    sortByScore(students, studentCount, 1);
    printf("\n===== Sorted by Score (Low  High) =====\n");
    Showstudents();
      sortByScore(students, studentCount, 0);
    printf("\n===== Sorted by Score (High  Low) =====\n");
    Showstudents();
    
    
    

    return 0;
}
void Showstudents(){
	int i;
     for(i = 0; i < 4; i++){
    
	    
     printf("%s %.1f\n", students[i].name, students[i].score);
 }
}
  
     

void sortByScore(struct Student S[], int n, int t) {
    int i, j;
    struct Student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            
            if (t == 0 && S[j].score <S[j + 1].score){
			
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
                
            }else
                 if (t == 1 && S[j].score >S[j + 1].score){
				 
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
                 
            }
        }
}
}
    
    


