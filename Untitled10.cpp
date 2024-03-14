#include<stdio.h>

int main(){
	
	char ch='A';
	int k=1;
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
			if(j<=i+k){
				printf("%c",ch);
			}
			else{
				printf(" ");
			}
			k++;
		}
		printf("\n");
	}
	
	
	return 0;
}


