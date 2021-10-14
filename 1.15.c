#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Usage: ./1.15 input.txt output.txt\n");
    }
    FILE *fi = fopen(argv[1], "a");
    if(!fi){
        printf("Opening file %s error\n", argv[1]);
        return 1;
    }
    FILE *fo = fopen(argv[2], "r");
    if(!fo){
        printf("Opening file %s error\n", argv[2]);
    }
    int c;
    while((c = fgetc(fo)) != EOF){
        fputc(c, fi);
    }
    fclose(fi);
    fclose(fo);
    return 0;
}