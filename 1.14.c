#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fi = fopen(argv[1], "r");
    FILE *fo = fopen(argv[2], "w");
    int c;
    while((c = fgetc(fi)) != EOF){
        fputc(c, fo);
    }
    fclose(fi);
    fclose(fo);
    return 0;
}