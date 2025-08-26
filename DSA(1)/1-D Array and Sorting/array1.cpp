#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;
#include<string>
#include<cmath>
#include <iostream>

/* void fun(int a[]){
   a[0]=10;
}*/
/*void fun2(int *ptr,int n){ // here array get converted in to pointer and we have to pass array size in function 
  
   //cout<<sizeof(*ptr)<<endl;
   for(int i=0 ;i<n;i++){
        cout<<ptr[i]<<",";
   }
}
int main(){
int a[]={1,2,3,4};
int n=sizeof(a)/sizeof(int);
fun2(a,n);
//cout<<a[0];
//cout<<sizeof(a)<<endl;
	return 0;
}*/

/*int fun(int a[],int n){
	int target;
	cout<<"enter a target elements";
cin>>target;
for(int i=0;i<n;i++){
	if(a[i]== target){
		return i;
	}
}
return -1;
}
int main(){
int n;
cout<<"enter a size of an array";
cin>>n;
int a[n];
cout<<"enter array elements";
for(int i=0;i<n;i++){
	cin>>a[i];
}
int result = fun(a,n);

if(result>0)
cout<<"target element is found at position :"<<result;
else
cout<<"the target element is not found  ";
return 0;
}*/

//reverse an array
// reverse with space
/*void printarr(int a[],int n){
  cout<<"reversed array elements are ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
int main(){
int n=4;
int a[n];
cout<<"enter a array elements";
for(int i=0;i<n;i++){
	cin>>a[i];
}
int cpya[n]; // n space is created :space complexity 
for(int i=0;i<n;i++){
int j=n-i-1;
cpya[i]= a[j];

}


for(int i=0;i<n;i++){
	a[i]=cpya[i];
}

printarr(a,n);
	return 0;
}*/

//reverse without space

/*void fun(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
int main(){
int a[] = {4,3,2,1};
int swap;
int n =sizeof(a)/sizeof(int);

for(int i=0;i<n/2;i++){
	swap = a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=swap;
}
fun(a,n);

	return 0;
}*/

//binary search

int b_ser(int a[],int n){
	cout<<"enter a target element";
	int target,st=0,end=n-1,mid;
	cin>>target;

	while(st<=end){
		mid =(st+end)/2;
		if(a[mid]<target)
		 st = mid+1;
		else if(a[mid]>target)
		end = mid-1;
		else
		return mid;
	}
	return -1;
}
int main(){

int a[]={ 1,2,3,4};
int n = sizeof(a)/sizeof(int);
int result = b_ser(a,n);
if(result!=-1)
cout<<"target element found at position : "<<result;
else
cout<<"target element not found";
	return 0;
}
//pointer arthmetic
/*void fun(int *ptr,int n){
	for(int i=0;i<n;i++){
		cout<<*ptr<<endl;
		ptr+=1;
	}
}
int main(){
	int a[]={ 1,2,3,4};
int n = sizeof(a)/sizeof(int);
fun(a,n);
	return 0;
}*/


/*int main(){
		int a[]={ 1,2,3,4};
int n = sizeof(a)/sizeof(int);
int *ptr= a;
int *ptr1 = a+2;
cout<<(ptr<ptr1)<<endl;
cout<<(ptr == a);
	return 0;
}*/


