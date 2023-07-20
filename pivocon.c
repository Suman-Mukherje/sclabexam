#include<stdio.h>
#include<math.h>
int main()
{
	float a[10][10],det,ratio;
	int i,j,k,n;
	printf("\n Enter the order of the matrix...");
	scanf("%d",&n);
	
	printf("\nEnter the matrix row-wise\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		scanf("%f",&a[i][j]);
		printf("\n");}	
	
	for(k=1;k<=n-1;k++)
		{for(i=k+1;i<=n;i++)
			{ratio=a[i][k]/a[k][k];
				for(j=1;j<=n;j++)
				a[i][j]=a[i][j]-ratio*a[k][j];	
			}
			det=1.0;	
		}	
	for(i=1;i<=n;i++)
		det=det*a[i][i];
		printf("\n Determinant of the given matrix=%f",det);
		printf("\n");
	return 0;
}
