#include<stdio.h>
#include<stdlib.h>

void show(int);
int main(void){
	int x;
	printf("輸入一個數字");
	scanf("%c",&x);
	switch(x){
		case'1':
			printf("一\n");
			break; 
			case'2':
				printf("二\n");
			break; 
			case'3':
			printf("三\n");
			break; 
			case'4':
				printf("四\n");
			break; 
			case'5':
			printf("五\n");
			break; 
			case'6':
				printf("六\n");
			break; 
			case'7':
				printf("七\n");
			break;
			case'8':
			printf("八\n");
			break; 
			case'9':
				printf("九\n");
			break; 
			case'0':
				printf("零\n");
			break;
			default:
			printf("無\n");  
	}system("pause");
	return 0;
}
