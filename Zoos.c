#include <stdio.h>
#include <string.h>

int main(){
	char s[20];
	scanf("%s",s);
	int x=0;
	int y=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='z')
			x++;
		else
			y++;
	}
	if(2*(x)==y)
		printf("Yes\n");
	else{
		printf("No\n");
	}
		
}
