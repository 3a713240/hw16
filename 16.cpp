#include<stdio.h>
#include<stdlib.h>

void show(int);
int main(void){
	int x;
	printf("��J�@�ӼƦr");
	scanf("%c",&x);
	switch(x){
		case'1':
			printf("�@\n");
			break; 
			case'2':
				printf("�G\n");
			break; 
			case'3':
			printf("�T\n");
			break; 
			case'4':
				printf("�|\n");
			break; 
			case'5':
			printf("��\n");
			break; 
			case'6':
				printf("��\n");
			break; 
			case'7':
				printf("�C\n");
			break;
			case'8':
			printf("�K\n");
			break; 
			case'9':
				printf("�E\n");
			break; 
			case'0':
				printf("�s\n");
			break;
			default:
			printf("�L\n");  
	}system("pause");
	return 0;
}
