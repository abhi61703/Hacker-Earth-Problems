#include <stdio.h>

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,i,j;
		scanf("%d",&n);
		int a[n][n];
		for (i = 0;i<n;i++) {
			for (j=0;j<n;j++) {
				scanf("%d",&a[i][j]);
			}
		}
		int count=0;
		int x,y;
		for (i=0;i<n;i++) {
			for (j=0;j<n;j++) {
				for (x=i;x<n;x++) {
					for (y=j;y<n;y++) {
						if (a[x][y]<a[i][j]) 
							count++;
					}
				}
			}
		}
		printf("%d\n",count);
	}
}
