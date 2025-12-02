#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)",
           s[topperIndex].name,
           s[topperIndex].marks);

    return 0;
}
