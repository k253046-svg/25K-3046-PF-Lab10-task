#include <stdio.h>
#include <string.h>

int main(){
	int i, j;
	char arr[4][10]={
		"apple",
		"mango",
		"kiwi",
		"orange"
	};
	char arr2[10]="banana";
	strcpy(arr[1], arr2);
    for(i=0; i<4; i++)
	{
		puts(arr[i]);
		j=0;
		while (arr[i][j]!='\0'){
			printf("%c\n", arr[i][j]);
			j++;
		}
	}
	return 0;
}
