#include<iostream>
#include<conio.h>
using namespace std;
void nhapmang(int a[],int n){
	for(int j=0;j<n;j++){
		cout<<"gia tri phan tu thu a["<<j<<"] la : ";
		cin>>a[j];
	}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
	    cout<<a[i];
		cout<<" ";	
	}
}
/*void heap(int a[],int n,int i){
    int max=i;//gia tri lon nhat la o goc
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && a[l]>a[max]){
	    max=l;
	}
	
	if(r<n && a[r]>a[max]){
	    max=r;
	} 
	
	if(max!=i){//neu max khong o vi tri i thi doi cho 
	    swap(a[i],a[max]);
	    heap(a,n,max); 
	}
	     
}

int sort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){//khoi tao nut 
	   heap(a,n,i);
	}
	
	for(int i=n-1;i>0;i--){
	   swap(a[0],a[i]);//dua gia tri max ve cuoi day
	   heap(a,n,0);
	}
}*/
void heapify(int a[], int n, int i)
{
    int max = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
    if (l<n && a[l]>a[max])
        max=l;
 
    
    if (r<n && a[r]>a[max])
        max=r;
 
    if (max!=i) {//gia tri lon nhat se dat o vi tri i
        swap(a[i],a[max]);
 
        heapify(a,n,max);
    }
}
 

void heapSort(int a[],int n)
{
   
    for (int i =n/2-1;i>=0;i--)//tao nut
        heapify(a,n,i);
 
    for (int i=n-1;i>0;i--) {
        
        swap(a[0],a[i]);
        
        heapify(a,i,0);
    }
}
int main(){
    int n;
    int a[n];
    cout<<"nhap n: ";
    cin>>n;
    nhapmang(a,n);
    heapSort(a,n);
    xuatmang(a,n);
}
