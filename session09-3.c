#include <stdio.h>

int main()
{
	// khai bao  
	int arr[100];
	int location;
	int n=0;
	int i; 
	// yeu cau nguoi dung nhap so phan tu muon nhap 
	printf("Ban muon nhap bao nhieu phan tu(nho hon 100):");
	scanf("%d",&n);
	// kiem tra dieu kien 
	if(n<=0||n>100){
		printf("So ban nhap khong hop le");
		return 1; 
	} 
	
	printf("Nhap %d phan tu:\n",n);
	// yeu cau nhap cac phan tu cua mang ban dau 
	for(i=0;i<n;i++) {
	printf("Phan tu thu %d:",i+1);
	scanf("%d",&arr[i]);
}
    // hien thi mang ban dau
    printf("Mang ban dau:"); 
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
	printf("\n");
	 
	// yeu cau nhap vi tri muong xoa
	printf("Moi ban nhap vi tri muon xoa:");
	scanf("%d",&location);
	
	// kiem tra xem vi tri hop le khong 
	if(location<1||location>n){
		printf("Vi tri ban muon xoa khong hop le");
		return 1;
	}
	// xoa vi tri ma nguoi dung yeu cau
	for(i=location-1;i<n-1;i++){
	arr[i]=arr[i+1];	
	} 
	n--; 
	
    // hien thi mang sau khi chen
    printf("Mang sau khi xoa:");
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
	printf("\n");

	 return 0;

 }

