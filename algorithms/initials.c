#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("Name: ");
    printf("%s\n", name);
    int counter = 0;

    char initials[4];
    for (int i = 0; i < strlen(name); i++) {
        if(isupper(name[i])) {
            initials[counter] = name[i];
            counter++;
        }
    }
    initials[counter] = '\0';

    printf("%s\n", initials);
}