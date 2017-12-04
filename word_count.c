#include<stdio.h>
#define IN 1 /*inside a word*/
#define OUT 0 /*outside a word*/

int main(){
    int c, state, lines, word, character;
    state = OUT;
    lines = word = character = 0;
    while ((c = getchar()) != EOF){
        ++character;
        if (c == '\n')
            ++lines;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++word;
        }
    }
    printf("word:%d\nlines:%d\ncharacter:%d\n", word, lines, character);
}
