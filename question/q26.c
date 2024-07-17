#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toUpper(char *new)
{
    for (int i = 0; new[i] != '\0'; i++)
    {
        new[i] = tolower(new[i]);
    }
}
int main()
{
    char sentence[100];
    printf("enter the sentence\n");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    toUpper(sentence);
    printf("%s\n", sentence);
    return 0;
}