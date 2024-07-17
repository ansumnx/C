#include<stdio.h>
#include<string.h>

struct info {
    char name[20];
    int roll;
    float height;
};

int main() {
    struct info s;

    // Get name
    printf("Enter your name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';  // Remove the newline character

    // Get roll
    printf("Enter your roll: ");
    scanf("%d", &s.roll);

    // Get height
    printf("Enter your height: ");
    scanf("%f", &s.height);

    // Print information
    printf("Information\nName: %s\nRoll: %d\nHeight: %.1f\n", s.name, s.roll, s.height);

    // Print size of name and height fields
    printf("Size of name: %lu\nSize of height: %lu\n", sizeof(s.name), sizeof(s.height));

    return 0;
}


