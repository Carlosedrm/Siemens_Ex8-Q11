# Exercise 8

This code is also pretty simple:
```
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

```
After the user types his string we create a new variable to store the reversed string. We reverse the string by starting at the end of the string from the user input and go to the beginning.
I did this exercise to complete all of them but i believe i did it wrong since i'm still using a variable to store some value from the string.

Please go to: https://onlinegdb.com and run the full code there.