#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Creat by Tuan Linh 00569, date: 2/9/2017.
int main(){
	int a;
	char ten[20];
	while (true){
		printf("   MENU CONSOLE \n");
    	printf("--------------------------- \n");
    	printf("1.Them sinh vien. \n");
    	printf("2.Hien thi danh sach sinh vien. \n");
    	printf("3.Sua sinh vien. \n");
    	printf("4.Xoa sinh vien. \n");
    	printf("5.Thoat. \n");
		printf("Nhap lua chon cua ban: ");
    	scanf("%d", &a);
    	switch(a){
		case 1:	
			printf("Nhap ten sinh vien: ");
    		gets(ten);
    		if(sizeof(ten) < 3){
				printf("Ten qua ngan...Vui long nhap ten trong khoang tu 4 - 15 ky tu.");
			}else{
				printf("Ten sinh vien la: ", &ten);
				}
   			break;
		case 2:
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;
		case 3:
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;
   		case 4:
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;				
	
	}if(a == 5){
		printf("Goodbye, see you soon.");
		break;
		}
}
	


	
