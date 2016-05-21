#include <stdio.h>
#define NOTBLANK 'a';

int main(){
  int c, lastc = NOTBLANK;

  while ((c = getchar()) != EOF){
    if (c != ' ')
      putchar(c);
    else if (c == ' '){
      if (lastc != ' ')
        putchar(c);
    }

    lastc = c;
  }
}
