#include <stdio.h>

int main()
{
	// khai bao 
	int choose,n,i;
	int arr[100];
	 
	// hien thi menu
	while(choose!=8) {
		
	printf("\nMENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly\n");
	printf("3.In ra cac phan tu chan va tinh tong\n");
	printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5.In ra cac phan tu là so nguyen to va tinh tong\n");
	printf("6.Nhap vao 1 so va kiem tra trong mang co bao nhieu phan tu do\n");
	printf("7.Them 1 phan tu vao vi tri chi dinh\n");
	printf("8.Thoat\n");
    printf("Lua chon cua ban la:");
	scanf("%d",&choose);
	//Xu ly lua chon cua nguoi dung
	switch(choose){	
	case 1:{
		
	
        // nhap gia tri vao mang 
     	printf("Ban muon nhap bao nhieu phan tu:");
	    scanf("%d",&n); 
        printf("Nhap %d phan tu:\n",n);
	    for(i=0;i<n;i++) {
        printf("Phan tu thu %d:",i+1);
        scanf("%d",&arr[i]);	 
		}
		int max = arr[0], min = arr[0];
		break;
		}
		 
	case 2:
		{	
	    // hien thi mang 
		for(i=0;i<n;i++) {
		printf("%d ",arr[i]); 
	    }
	    printf("\n");
		break;
		} 
		
    case 3:{
	    // In ra cac phan tu chan va tinh tong
		int total=0;
	    for(i=0;i<n;i++) {
	    	if(arr[i]%2==0) {			
		    printf("%d ",arr[i]);		     
			total =total +arr[i]; 
			}
	    }
	    if(total!=0){	 
	    printf("Tong cac phan tu la so chan la:%d",total);
		break;
    }
        else{
        	printf("Mang khong co so chan");
	    break; 
		}
		}
		
	case 4:{
	    // In ra gia tri lon nhat va nho nhat trong mang
        int max = arr[0], min = arr[0];
        for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        }
        printf("Gia tri lon nhat: %d\n", max);
        printf("Gia tri nho nhat: %d\n", min);
        break;
		}
		
    case 5:{	
	    // In ra cac phan tu là so nguyen to va tinh tong
		int total=0;
	    for(i=0;i<n;i++) {
	    	if(arr[i]>1 && arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0 && arr[i]%7!=0 && arr[i]%9!=0 && arr[i]%8!=0 ||arr[i]==3 || arr[i]==7 || arr[i]==5 || arr[i]==2) {			
		    printf("%d ",arr[i]); 
			total =total +arr[i]; 
			}
	    }
	    if(total!=0){	 
	    printf("Tong cac phan tu la so nguyen to la:%d",total);
		break;
    }
        else{
        	printf("Mang khong co so nguyen to");
	    break; 
		}
		}
		
	case 6:{
        // Nhap vao 1 so va kiem tra trong mang co bao nhieu phan tu do
		int check=0;
		int num; 
		printf("Moi ban nhap phan tu ban muon kiem tra:");
		scanf("%d",&num);
		for(i=0;i<n;i++) {
			if(arr[i]==num){
				check++;				 
			}
		}
			if(check!=0) {
				printf("Co %d phan tu %d",check,num);
				break; 
			}
			else{
				printf("khong co phan tu ban muon kiem");
				break;
	    	}
		}
	case 7: {	
	    // Them 1 phan tu vao vi tri chi dinh
		int num,location; 
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
		}
		
	case 8:
	//thoat 
		break; 

	    }
	}
	printf("HEN GAP LAI");	 
	return 0; 
	
	}
