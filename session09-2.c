#include <stdio.h>

int main()
{
	// khai bao  
	int arr[5]={20,5,31,10,66};
	int num,location;
	int n=0;
	int i; 
	
    // hien thi mang ban dau
    printf("Mang ban dau:"); 
	for(i=0;i<5;i++) {
		printf("%d ",arr[i]); 
	}
	printf("\n");
	 
	// yeu cau nhap phan tu va vi tri muong sua
	printf("Moi ban nhap so muon sua:");
	scanf("%d",&num); 
	printf("Moi ban nhap vi tri muon sua:");
	scanf("%d",&location);
	
	// kiem tra xem vi tri hop le khong 
	if(location<1||location>5){
		printf("Vi tri ban muon sua khong hop le");
		return 1;
	}
	// sua gia tri vao vi tri ma nguoi dung yeu cau`	
	arr[location-1]=num; 
	
    // hien thi mang sau khi sua
    printf("Mang sau khi sua:");
	for(i=0;i<5;i++) {
		printf("%d ",arr[i]); 
	}
	printf("\n");

	 return 0;

 }

