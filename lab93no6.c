#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str_rem[100];
    int i, j, k;
    int count; 

    printf("Enter the First string:\n");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the Second string:\n");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        k = 0;
        count = 0;

        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                count++; 
            } else {
                str_rem[k++] = str2[j];
            }
        }
        str_rem[k] = '\0';
        strcpy(str2, str_rem);

        if (count > 0)
            printf("'%c' removed %d character(s)\n", str1[i], count);
        else
            printf("'%c' not found\n", str1[i]);
    }
    printf("Result string: %s\n", str2);

    return 0;
}
