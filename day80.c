#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    // Ask user how many student records to store
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file for writing
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Cannot create file!\n");
        return 1;
    }

    // Take input and write to file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    printf("\nRecords saved successfully to students.txt\n");

    // Reopen file for reading
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Cannot open file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read and display records
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
