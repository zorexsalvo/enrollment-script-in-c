#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main()
{
    printf("\033[2J");
    struct student {
        char student_name[50];
        char course[50];
    };
    struct student student_arr[10];

    char student_name[20];
    char action;
    char course;
    int student_id = 0;
    int i;

    while(action != '3'){
        printf("------------------\n");
        printf("Enrollment System\n");
        printf("------------------\n\n");

        printf("Menu:\n");
        printf("[1]: Enroll a student\n");
        printf("[2]: View enrolled student\n");
        printf("[3]: Exit\n\n");

        printf("Choose an action from the menu: ");
        scanf(" %c", &action);

        switch(action) {
            case '1':
                system("clear");
                printf("-----------------\n");
                printf("Enrollment Form\n");
                printf("-----------------\n\n");

                printf("Input student name: ");
                scanf(" %[^\n]s", student_name);

                printf("Courses:\n");
                printf("[1]: Information Technology and Computing Studies\n");
                printf("[2]: BS Mathematics\n");
                printf("[3]: BS Applied Mathematics\n\n");

                printf("Select course: ");
                scanf(" %c", &course);

                printf("\033[2J");
                printf("-----------------------------------\n");
                printf("Registration Certificate\n");
                printf("-----------------------------------\n");
                printf("Student Name | %20s\n", student_name);
                printf("Course       | %20c\n", course);
                printf("-----------------------------------\n\n");

                strcpy(student_arr[student_id].student_name, student_name);
                if (course == '1') {
                    strcpy(student_arr[student_id].course, "Information Technology and Computing Studies");
                } else if (course == '2') {
                    strcpy(student_arr[student_id].course, "BS Mathematics");
                } else {
                    strcpy(student_arr[student_id].course, "BS Applied Mathematics");
                }

                student_id += 1;
                break;
            case '2':
                printf("\033[2J");
                printf("-----------------------------------------------------------\n");
                printf("Students Masterlist\n");
                printf("-----------------------------------------------------------\n");
                for (i=0; i < student_id; i++) {
                    printf("%20s | %20s \n", student_arr[i].student_name, student_arr[i].course);
                    printf("-----------------------------------------------------------\n\n");
                }
                break;
            default:
                break;
        };
    };
}

