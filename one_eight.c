#include<stdio.h>
int main(){
  int c, blanks, tabs, lines;
  blanks = 0;
  tabs = 0;
  lines = 0;
  while ((c = getchar()) != EOF ){
    if (c == ' ' )
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++lines;
  }
  printf("blanks: %d\n", blanks);
  printf("tabs: %d\n", tabs);
  printf("lines: %d\n", lines);
}
