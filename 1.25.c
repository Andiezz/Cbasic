#include <stdio.h>
#include <string.h>

#define N 1024

int main(int argc, char *argv[]){
    FILE *fi = fopen(argv[1], "r");
    FILE *fo = fopen(argv[2], "w+");
    char s[2000];
    char buffer[N];
    while(fgets(buffer, N, fi)){
        sprintf(s, "%ld ", strlen(buffer));
        strcat(s, buffer);
        fputs(s, fo);
    }
    fclose(fi);
    fclose(fo);
    return 0;
}