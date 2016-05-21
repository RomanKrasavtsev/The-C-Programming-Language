#include <stdio.h>

int main(){
  int c, nt = 0, nl = 0, ns = 0;

  while ((c = getchar()) != EOF){
    if (c == '\t')
      nt++;
    else if (c == '\n')
      nl++;
    else if (c == ' ')
      ns++;
  }

  printf("%d, %d, %d\n", nt, nl, ns);
}
