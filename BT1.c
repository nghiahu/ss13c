#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char str[100];
    int length,i; 
    int count;
	do{
		printf("*****************MENU*****************\n");
		printf("1. Nhap vao chuoi ky tu\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap\n");
		printf("3. In ra chuoi dao nguoc\n");
		printf("4. In ra so luong chu cai trong chuoi\n");
		printf("5. In ra so luong chu so trong chuoi\n");
		printf("6. IN ra so luong ky tu dac biet trong chuoi\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban : ");
		
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao chuoi ky tu: ");
				scanf("%s",str);
				fflush(stdin);
				break;
			case 2:
				puts(str);
				length = strlen(str);
				printf("Do dai cua chuoi la : %d",length);
				printf("\n");
				break;
			case 3:
				printf("Chuoi dao nguoc : ");
				for ( i = length ;i>=0;i-- ){
					printf("%c",str[i]);
				}
				printf("\n");
				break;
			case 4:
				 count = 0;
				for ( i = 0 ;i<=length;i++ ){
				if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
					count ++;
				}
				}
				printf("So luong chu cai trong chuoi: %d\n", count);
				break;
			case 5:
				 count = 0;
                    for ( i = 0; i<=length ; i++) {
                        if (str[i] >= '0' && str[i] <= '9') {
                            count++;
                        }
                    }
                    printf("So luong chu so trong chuoi: %d\n", count);
				break;
			case 6:
				 count = 0;
                    for ( i = 0; i < strlen(str); i++) {
                        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
                            count++;
                        }
                    }
                    printf("So luong ki tu dac biet trong chuoi: %d\n", count);
				break;
			case 7:
				exit(0);
			default:
				printf("Vui long chon tu 1 - 7\n");
		}
	}while (1 == 1);
	return 0 ;
}
