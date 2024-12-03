#include <stdio.h>

int main()
{
	// khai bao  
	int arr[100];
	int num,location;
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
	 
	// yeu cau nhap phan tu va vi tri muong chen
	printf("Moi ban nhap so muon chen:");
	scanf("%d",&num); 
	printf("Moi ban nhap vi tri muon chen:");
	scanf("%d",&location);
	
	// kiem tra xem vi tri hop le khong 
	if(location<1||location>n+1){
		printf("Vi tri ban muon chen khong hop le");
		return 1;
	}
	// chen gia tri vao vi tri ma nguoi dung yeu cau
	for(i=n;i>=location-1;i--){
	arr[i]=arr[i-1];	
	} 
	arr[location-1]=num;
	n++; 
	
    // hien thi mang sau khi chen
    printf("Mang sau khi chen:");
	for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
	printf("\n");

	 return 0;

 }

