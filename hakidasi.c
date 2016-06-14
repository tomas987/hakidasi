#include <stdio.h>

main(){
	short m,n,i,j,k,a,b;
	double hakidasi[4][4]={{1,2,3,4},{4,5,6,7},{6,8,9,10}};
	double hairetu[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0}};	

	m=4;
	n=4;
	a=2;

	for(i=0;i<=m-1;i++){
		hairetu[0][i]=hakidasi[0][i]/hakidasi[0][0];
		printf("%f ",hairetu[0][i]);
	}	

	printf("\n");		
	
	for(i=1;i<m;i++){
		for(j=0;j<=n-1;j++){
			hairetu[i][j]=hakidasi[i][j]-(hairetu[0][j]*hakidasi[i][0]);	
		}
		for(j=i;j<=n;j++){
		
			}
	}
	for(i=1;i<m;i++){
                for(j=0;j<=n-1;j++){
			printf("%f ",hairetu[i][j]);
		}
		printf("\n");
	}
}
