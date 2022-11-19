#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int index=n-(k%n);
		for(int i=index;i<n;i++)
			printf("%d ",a[i]);
		for(int i=0;i<index;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}              	                  // 
}
