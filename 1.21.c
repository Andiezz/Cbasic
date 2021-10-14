#include <stdio.h>

int main(){
  FILE *fi = fopen("1.21i.txt", "r");
  FILE *fo = fopen("1.21o.txt", "w");
  char buff[80];
  int count = 1;
  while(fgets(buff, 80, fi)){
    fprintf(fo, "%d ", count);
    fputs(buff, fo);
    count++;
  }
  fclose(fi);
  fclose(fo);
  return 0;
}