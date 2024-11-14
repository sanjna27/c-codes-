#include<stdio.h>
#include<string.h>
int main(){
	char fixusername[6]={"admin"};
	int fixpassword=1234;
	char Username[6];
	int Password;
	
	printf("Enter Username:");
	scanf("%s", &Username);
	
	printf("Enter Password:");
	scanf("%d", &Password);
	
	if(strcmp(fixusername,Username) == 0 && fixpassword == Password ){
		printf("Access granted");
	}else {
		printf("Access denied");
	}
	return 0;
	}
	
