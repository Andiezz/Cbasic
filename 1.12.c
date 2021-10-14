#include <stdio.h>

int main(){
    FILE *fi = fopen("lab1.txt", "r");
    FILE *fo = fopen("lab1-copy.txt", "w");
    int c;
    c = fgetc(fi);
    while(!feof(fi)){
      fputc(c, fo);
      c = fgetc(fi);
    }
    fclose(fo);
    fclose(fi);
    return 0;
}