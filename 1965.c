// ������ �ڽ���������� �������� ��� ��. ���عڽ� �����ʿ� ū ������ �ڽ��� 0�̸� ������ �� �ڽ��� ����.
// ���عڽ� �����ʿ� ū ������ �ڽ��� 1���� ������ ���.
// �ִ� ����Ͽ�, ���عڽ��� �ִ񰪰��� �ڽ����� ������ �ִ�++ 
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, j;
	int box[1000]={0};
	int count[1000]={0};
	int max;
	scanf("%d", &n);
	if(n>=1 && n<=1000){
		for(i=0; i<n; i++)
			scanf("%d", &box[i]);

	for(i=n-1; i>=0; i--){
		count[i]=1;
		for(j=i+1; j<n; j++){
			if(box[i]<box[j]){
				if(count[i]<=count[j])
					count[i]=count[j]+1;
			}	
		}
	}
	
	max=count[0];
	for(i=1; i<n; i++){
		if(max<count[i])
			max=count[i];
	}
	printf("%d", max);
	}
	return 0;
}
