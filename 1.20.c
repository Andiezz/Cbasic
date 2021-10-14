#include <stdio.h>

#define N 10

int main(int argc, char *argv[]){
    FILE *fi = fopen(argv[1], "r");
    FILE *fo = fopen(argv[2], "w");
    char buff[N];
    int q = 0;
    while(fgets(buff, N, fi)){
        for(int i = 0; i < N; i++){
            if(buff[i] == 10){
                q++;
            }
        }
        fputs(buff, fo);
    }
    fclose(fi);
    fclose(fo);
    printf("%d\n", ++q);
    return 0;
}