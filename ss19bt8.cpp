#include<stdio.h>
#include<string.h>
int size;
struct student{
	int id;
	char name[20];
	int age;
	char phoneNumber[20];
};
void bubbleSort(struct student sinhvien[]){
	char temp[20];
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-j;j++){
			if(strcmp(sinhvien[j].name,sinhvien[j+1].name)>0){
				strcpy(temp,sinhvien[j+1].name);
				strcpy(sinhvien[j+1].name,sinhvien[j].name);
				strcpy(sinhvien[j].name,temp);
			}
		}
	}
	printf("da sap xep theo ten:\n");
	for(int i=0;i<size;i++){
		printf("-----------------------\n");
		printf("id: %d\n",sinhvien[i].id);
		printf("ten: %s\n",sinhvien[i].name);
		printf("tuoi: %d\n",sinhvien[i].age);
		printf("so dien thoai: %s\n",sinhvien[i].phoneNumber);
	}
	
}
int main(){
	struct student sinhvien[5]{
		{1,"cuong le",18,"0908070605"},
		{2,"con meo",18,"0708070604"},
		{3,"con voi",18,"0608070603"},
		{4,"con chim",18,"0508070602"},
		{5,"ca tim",18,"0408070601"},
	};
	size=sizeof(sinhvien)/sizeof(sinhvien[0]);
	bubbleSort(sinhvien);
}
