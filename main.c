#include <stdio.h>
#include <stdlib.h>
#define SENTENCE_LENGTH 15

void f(int counter, int length, char *);

int main() {
    char *wort = malloc(SENTENCE_LENGTH * sizeof(char));
    f(0, SENTENCE_LENGTH, wort);
    return 0;
}

void f(int counter, int length, char *wort) {
    if (counter + 1 == length) {
        wort[counter] = 'a';
        printf("%s\n", wort);
        wort[counter] = 'b';
        printf("%s\n", wort);
        f(--counter, length, wort);
    } else if (wort[counter] == 'a') {
        wort[counter] = 'b';
        counter = length - 1;
        f(counter, length, wort);
    } else if (wort[counter] != 'a' && wort[counter] != 'b') {
        wort[counter] = 'a';
        f(++counter, length, wort);
    } else if (wort[counter == 'b']) {
        if(counter==0)
            return;
        wort[counter] = 'a';
        f(--counter, length, wort);
    }
}