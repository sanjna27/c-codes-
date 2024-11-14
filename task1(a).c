#include<stdio.h>
int main(){
	int i,j,N;
	int row;
	int column;
	printf("Enter value of N:");
	scanf("%d", &N);
	row = 2*N + 1;

    for (i=0; i<row;i++) {
        for (j=0; j<row; j++) {
      if (i <= N) {
            if (j >= N - i && j <= N + i) {
                    printf("o");
      } else {
      if(j>N)
        printf("    ");
        else
		printf(" . ");              
    }
        } else {
        if (j >= N-(row-1-i) && j <= N+(row-1-i)) {
      printf("o");
                } else if(j>N){
        printf("    ");
       }else{
          printf(" . ");
        }
            }
        }
        printf("\n");
    }
}

