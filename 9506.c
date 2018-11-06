#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int n, sum=0;
	int i;
	
	do{
		scanf("%d",&n);
		if(n>2 && n<100000){
			for(i=1; i<n; i++) {
				if(n%i==0)
					sum+=i;
			}
	
			if(sum==n) {
				printf(" = 1");
				for(i=2; i<n; i++) {
					if(n%i==0)
						printf(" + %d", i);
				}
				printf("\n");
			}
			else
				printf(" is NOT perfect\n", &n);
		}
		else
			printf("\n");
		sum=0;
	}while(n!=-1);
	return 0;
}
