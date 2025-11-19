#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {95, 81, 97, 89, 86};
    int i, highest = 0, sum = 0;
    float average;

    printf("Student Marks:\nName\tMarks\n");
    printf("-----------\n");

    for(i = 0; i < 5; i++) {
        printf("%s\t%d\n", names[i], marks[i]);
        sum += marks[i];
        if(marks[i] > marks[highest]) {
            highest = i;
        }
    }

    average = sum / 5.0;

    printf("\n\nHighest Scorer: %s with %d marks\n", names[highest], marks[highest]);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

