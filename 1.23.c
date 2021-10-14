#include <stdio.h>
#include <string.h>

// print pages... print pages... print pages... print pages...print pages...print pages... print pages... print pages... print pages... print pages...
#define N 80
int main(int argc, char *argv[]){
    int count = 0;
    FILE *fi = fopen(argv[1], "r");
    char buff[N];
    while(fgets(buff, N, fi)){
        count++;
        if(argc == 3){
            if(strcmp(argv[2], "-p") == 0){
                if(count == 10){
                    printf("\nEnter to see more\n");
                    if(getchar() == 13){
                        fputs(buff, stdout);
                    }
                    count = 1;
                    continue;
                }
            }
        }
        else if(argc == 2){
            fputs(buff, stdout);
        }
        if(argc == 3){
            fputs(buff, stdout); 
        }
    }
    if(fgets(buff, N, fi) == NULL){
        printf("\nTHE END OF THE DOCUMENT\n");
    }
    fclose(fi);
    return 0;
}