#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j, len;
    
    printf("Enter a string: ");
    scanf("%s", str);
    strlwr(str);
    len = strlen(str);

    // bubble sort algorithm
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("The sorted string is: %s\n",str);

    return 0;
}
