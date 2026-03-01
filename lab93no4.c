#include <stdio.h>
#define MAX 50

int countVowel(char []);
void countEachVowel(char []);

void main() {
    char text[MAX];
    int cVowel;

    printf("Enter text : ");
    scanf("%s", text);

    cVowel = countVowel(text);

    printf("Text : [%s] has %d vowels\n", text, cVowel);
    countEachVowel(text);
}

int countVowel(char t[]) {
    int i = 0, count = 0;

    while (i < MAX && t[i] != '\0') {
        if (t[i]=='A' || t[i]=='a' || t[i]=='E' || t[i]=='e' || t[i]=='I' || t[i]=='i' || t[i]=='O' || t[i]=='o' || t[i]=='U' || t[i]=='u')
            count++;
        i++;
    }
    return count;
}

void countEachVowel(char t[]){
    int i = 0;
    int a=0, e=0, iV=0, o=0, u=0;

    while (t[i] != '\0') {
        switch (t[i]) {
            case 'A':
            case 'a': a++; break;
            case 'E':
            case 'e': e++; break;
            case 'I':
            case 'i': iV++; break;
            case 'O':
            case 'o': o++; break;
            case 'U':
            case 'u': u++; break;
        }
        i++;
    }

    printf("A/a = %d\n", a);
    printf("E/e = %d\n", e);
    printf("I/i = %d\n", iV);
    printf("O/o = %d\n", o);
    printf("U/u = %d\n", u);
}
