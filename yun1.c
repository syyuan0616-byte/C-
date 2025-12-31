#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100][100];
    int count=1,flat;
    for(int flat=n;flat>0;flat--)
    {
    	if(flat==n) 
    	{
    		for(int i=0;i<n;i++)
    		{
    			a[n-flat][i]=count;
    			count++;
			}
		}
		else if((n-flat)%2!=0)
		{
			for(int i=(n-flat)/2+1;i<n-(n-flat)/2;i++)
			{
				a[i][n-(n-flat)/2-1]=count;
				count++;
			}
			for(int j=n-(n-flat)/2-2;j>(n-flat)/2-1;j--)
			{
				a[n-(n-flat)/2-1][j]=count;
				count++;
			}
		}
		else if((n-flat)%2==0)
		{
			for(int i=n-(n-flat)/2-1;i>(n-flat)/2-1;i--)
			{
				a[i][(n-flat)/2-1]=count;
				count++;
			}
			for(int j=(n-flat)/2;j<n-(n-flat)/2;j++)
			{
				a[(n-flat)/2][j]=count;
				count++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf(" ");
		for(int j=0;j<n;j++)
		{
			if(j==n-1&&a[i][j]<10) printf(" %d",a[i][j]);
			else if(j==n-1&&a[i][j]>=10) printf("%d",a[i][j]);
			else if(a[i][j]<10) printf(" %d ",a[i][j]);
			else if(a[i][j]>=10) printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}