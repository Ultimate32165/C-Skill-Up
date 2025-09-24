// #include <stdio.h>

// int main() {
//     char str[100];  // Declare an array to hold the input string

//     printf("Enter a string: ");
//     scanf("%s", str);  // Reads input until the first space or newline

//     printf("You entered: %s\n", str);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    
    // String variable
    char name[20];
    
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    
    printf("Hello, %s", name);
    return 0;
}