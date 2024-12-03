#include <stdio.h>

int main()
{
	// khai bao 
	int choose,n,i,num,location; 
	int arr[i]; 
	 
	// hien thi menu
	while(choose!=6) {

	printf("\nMENU\n");
	printf("1.Nhap vao mang\n");
	printf("2.Hiem thi mang\n");
	printf("3.Them phan tu\n");
	printf("4.Sua phan tu\n");
	printf("5.Xoa phan tu\n");
	printf("6.Thoat\n");
	printf("Lua chon cua ban la:");
	scanf("%d",&choose);
	//Xu ly lua chon cua nguoi dung
	switch(choose){
		case 1:// nhap gia tri vao mang 
        	printf("Ban muon nhap bao nhieu phan tu:");
	        scanf("%d",&n); 
        	printf("Nhap %d phan tu:\n",n);
	        for(i=0;i<n;i++) {
        	printf("Phan tu thu %d:",i+1);
        	scanf("%d",&arr[i]);	 
		}
		break;
		
		case 2:// hien thi mang 
		for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
	    printf("\n");
		break;
		
		case 3:// them phan tu 
    	printf("Moi ban nhap so muon chen:");
    	scanf("%d",&num); 
    	printf("Moi ban nhap vi tri muon chen:");
      	scanf("%d",&location);
		if(location<1||location>n+1){
		printf("Vi tri ban muon chen khong hop le");
		break;
	}
	   for(i=n;i>=location-1;i--){
    	arr[i]=arr[i-1];	
	} 
    	arr[location-1]=num;
    	n++; 
        printf("Mang sau khi chen:");
    	for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
	    printf("\n");
		break;
		
		case 4:// sua phan tu 
    	printf("Moi ban nhap so muon sua:");
    	scanf("%d",&num); 
    	printf("Moi ban nhap vi tri muon sua:");
        scanf("%d",&location);
    	if(location<1||location>5){
		printf("Vi tri ban muon sua khong hop le");
		break;
	}	
    	arr[location-1]=num; 
        printf("Mang sau khi sua:");
    	for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
    	printf("\n");
    	break;
		
		case 5:// xoa phan tu 
    	printf("Moi ban nhap vi tri muon xoa:");
    	scanf("%d",&location);
    	if(location<1||location>n){
		printf("Vi tri ban muon xoa khong hop le");
		break;
	}
    	for(i=location-1;i<n-1;i++){
    	arr[i]=arr[i+1];	
	} 
    	n--; 
        printf("Mang sau khi xoa:");
    	for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	}
    	printf("\n"); 
    	break; 
    	
    	case 6://thoat 
		break; 

	    }
	}
	printf("HEN GAP LAI"); 
    return 0;

 }

