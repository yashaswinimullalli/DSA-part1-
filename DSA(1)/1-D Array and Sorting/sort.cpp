#include <bits/stdc++.h>
using namespace std ;


//bubble sort
/*void fun(int *arr,int n){
	int temp;
for(int i=0;i<n-1;i++){// number of turns 
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
         
		}
	}
}
cout<<"sorted elemnts are :";
for(int i=0;i<n;i++){
	cout<<arr[i]<<",";
}
}
int main(){
int arr[5]={5,4,1,3,2};
int n=sizeof(arr)/sizeof(int);
fun(arr,n);
	return 0;
}*/ 
//selection sort
/*d fun(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) { // Selection Sort turns
        int minidx = i;

        for (int j = i + 1; j < n; j++) { // Corrected loop condition
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }
        }

        // Swap elements
        int temp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Corrected size calculation

    fun(arr, n);

    return 0;
}*/

//insertion sort

/*void selectsort(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr =arr[i];
        int prev =i-1;
    
    while(prev>=0 && arr[prev]>curr){
    arr[prev+1]=arr[prev];
    prev--;
    }
    arr[prev+1]=curr;//placing the curr element in its correct position
}
for(int i=0;i<n;i++){
cout<<arr[i]<<",";
}
}



int main(){
    int n =5;
    int arr[]={4,2,5,1,3};
    selectsort(arr,n);
    return 0;
}*/

//counting sort

void countsort(int *arr,int n){
int freq[100000];//range 
int min_val=INT_MAX,max_val=INT_MIN;
for(int i=0;i<n;i++){
    min_val=min(min_val,arr[i]);
    max_val=max(min_val,arr[i]);
}
//first step O(n)
for(int i=0;i<n;i++){ 
    freq[arr[i]]++;
}
//2nd step O(range) max -min
for(int i=min_val,j=0;i<=max_val ;i++){
    while(freq[i]>0){
        arr[j++] = i;
        freq[i]--;
    }
}
cout<<"sorted array :";

for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
    
}
}

int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=8;
    countsort(arr,n);
    return 0;

}