#include<stdio.h>
int main(){
    int c, count=0;
    while ((c = getchar()) != EOF){
        if (c != ' '){
            if (count >= 1)
                putchar(' ');
            count = 0;
            putchar(c);
        }
        if (c == ' ')
            ++count;
    }
}
