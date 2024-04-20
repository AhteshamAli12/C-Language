#include<stdio.h>

typedef struct student_detail
{
    char name[100];
    int age;
    int roll;
}std;
  


int main()
{
    std student[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter student %d name: ", i+1);
        char name[100];
        scanf("%s", name);
        strcpy(student[i].name,name);
        printf("Enter student %d age: ", i+1);
        scanf("%d", &student[i].age);
        printf("Enter student %d Roll no: ", i+1);
        scanf("%d", &student[i].roll);

    }
    for (int i = 0; i < 2; i++)
    {
        printf("name: %s\n", student->name);
        printf("age: %d\n", student->age);
        printf("roll: %d\n", student->roll);
    }
    
    return 0;
}