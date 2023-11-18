#include <stdio.h>

int main()
{   
    // The string 
    char Strings[100];
    printf("Input the first string: ");
    scanf("%s", Strings);

    // Now we need to reverse the string 
    // We get the size of the string 
    int sizeofS = 0;
    for(int i = 0; Strings[i] != '\0'; i++) {
        sizeofS++;
    }

    char reversedString[100];
    // Now we need to reverse the string  by starting at the end and going to the beginning 
    for(int i = 0; i < sizeofS; i++) {
        reversedString[i] = Strings[sizeofS - i - 1];
    }

    printf("\nThe reversed string: %s\n", reversedString);

    return 0;
}
