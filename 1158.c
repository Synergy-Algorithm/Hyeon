#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, M;
	int number[5000] = {0};
	int i = 0;
	int num = 0;
	int rest = 0;
	scanf("%d %d", &N, &M);
	
	printf("<");
	do{
		if(number[i]==0){
			rest++;
			if(rest%M == 0){
				number[i]=1;
				rest = 0;
				num++;
				printf("%d, ",i+1);
			}
		}
		if(++i>=N)
			i = 0;
	}while(num<N-1);
	for(i=0;i<N;i++){
		if(number[i]!=1)
			printf("%d>",i+1);
	}
	
	return 0;
}
