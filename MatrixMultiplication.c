	#include<stdio.h>
	int main(){
		int a[2][2],b[2][2],p[2][2];
		int i,j;
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf("Enter number for a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
			printf("Enter number for b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			}
		}
			for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				p[i][j]=a[i][j]*b[i][j];
			printf("product of p[%d][%d] is %d ",i,j,p[i][j]);
			
			}
			printf("\n");
		}
		return 0;
		}
