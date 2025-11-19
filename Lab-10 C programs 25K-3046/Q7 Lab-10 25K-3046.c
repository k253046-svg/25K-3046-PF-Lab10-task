#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][5][30] = {
        {"Math", "Physics", "Chemistry", "", ""},
        {"English", "Biology", "", "", ""},
        {"Physics", "Math", "Biology", "Chemistry", ""},
        {"History", "Math", "Physics", "Chemistry", "English"}
    };
    int courseCounts[4];
    int i, j;
    char searchCourse[30];

    for (i = 0; i < 4; i++) {
        int count = 0;
        printf("%s is registered for: ", students[i]);
        for (j = 0; j < 5; j++) {
            if (strlen(courses[i][j]) > 0) {
                printf("%s ", courses[i][j]);
                count++;
            }
        }
        courseCounts[i] = count;
        printf("\n");
    }
    printf("\nEnter course to find students: ");
    fgets(searchCourse, sizeof(searchCourse), stdin);
    searchCourse[strcspn(searchCourse, "\n")] = '\0';
    
    printf("Students taking %s:\n ", searchCourse);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (strcmp(courses[i][j], searchCourse) == 0) {
                printf("%s\n ", students[i]);
                break;
            }
        }
    }
    printf("\n");
    printf("\nOverloaded students: more than 3 courses:\n ");
    for (i = 0; i < 4; i++) {
        if (courseCounts[i] > 3) {
            printf("%s\n ", students[i]);
        }
    }
    printf("\n");
    return 0;
}

