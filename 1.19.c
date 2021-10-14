#include <stdio.h>

#define N 10

int main(int argc, char *argv[]){
    FILE *fi = fopen(argv[1], "r");
    FILE *fo = fopen(argv[2], "w");
    char buff[N];
    while(fgets(buff, N, fi) != NULL){
        fputs(buff, fo);
    }
    fclose(fi);
    fclose(fo);
    return 0;
}