#include<stdio.h>
#include<string.h>
int main(){
	char array[10][10]={"Alice", "Harry", "Charlie", "Diana", "Eve"};
	char name[20];
	int i,j;
	
	printf("Enter a name to search:");
	scanf("%s", &name);
	
	for(i=0;i<=10;i++){
		for(j=0;j<=10;j++){
			if(strcmp(array[i], name) == 0){
				printf("FOUND");
				return 0;
			}
		}
	}
	  	printf("NOT FOUND");
	return 0;
}

