#include <bits/stdc++.h>
using namespace std ;

/*int prntsubarr(int a[],int n){
	cout<<"the subarrays are "<<endl ;
	for(int st=0;st<n;st++){
		for(int end=st;end<n;end++){
			//cout<<"("<<st<<","<<end<<")";
              for(int i=st;i<=end;i++){
			  cout<<a[i];
			}
			cout<<",";
		}
		cout<<endl;
	}
	
}
int main(){
	int a[]={1,2,3,4,5};
	int n=5;
	prntsubarr(a,n);
	return 0;
}*/

//Brute force approach
/*void fun2(int a[],int n){
int maxsum =INT_MIN;
	for(int st=0;st<n;st++){
		for(int end=st;end<n;end++){
			int cursum=0;
			for(int i=st;i<=end;i++){
             cursum+=a[i];
			}
			cout<< cursum<<",";
			maxsum = max(maxsum,cursum); //function:max( )
		}
		cout<<endl;
	}
	cout<<"max subarray sum is : "<<maxsum;
}
int main(){
int a[6]={2,-3,6,-5,4,2}	;
int n=sizeof(a)/sizeof(int);
fun2(a,n);
	return 0;
}*/

//optimized
/*void fun2(int a[],int n){
int maxsum =INT_MIN;
	for(int st=0;st<n;st++){
			int cursum=0;
		for(int end=st;end<n;end++){
		
			cursum+=a[end];
			maxsum = max(maxsum,cursum); //function:max( )
		}
	
	}
	cout<<"max subarray sum is : "<<maxsum;
}
int main(){
int a[6]={2,-3,6,-5,4,2}	;
int n=sizeof(a)/sizeof(int);
fun2(a,n);
	return 0;
}*/
//kadan's algorithm
/*void fun2(int a[],int n){
int maxsum =INT_MIN;
int cursum =0;
	for(int i=0;i<n;i++){
			cursum+=a[i];
			maxsum = max(maxsum,cursum); //function:max( )
	if(cursum<0){
	    cursum=0;
	}
	
	}
	cout<<"max subarray sum is : "<<maxsum;
} 
int main(){
int a[]={2,-3,6,-5,4,2}	; // out put max subarray sum 
int n=sizeof(a)/sizeof(int);
fun2(a,n);
	return 0;
}*/

//buy and sell stock
/*void maxprofit(int *prices,int n){
	int bestbuy[n]; // the 100000 value is given in leetcode constraints (in c++ we cant't do dynamic sizeing in function)
	bestbuy[0]= INT_MAX;  //maxvalue
	for(int i=1;i<n;i++){
		bestbuy[i]=min(bestbuy[i-1],prices[i-1]); 
    cout<<bestbuy[i]<<",";
		}
		cout<<endl;
int maxprofit = 0; 
for (int i=0;i<n;i++){
int currprofit = prices[i]-bestbuy[i];
maxprofit =max(maxprofit,currprofit);
}
		cout<<"max profit"<<maxprofit<<endl;
}
	
int main(){
	int prices[6]={7,4,5,3,6,1};
	int n= sizeof(prices)/sizeof(int);
maxprofit(prices,n);
	return 0;
}*/
/*void trap(int *height,int n){
int leftmax[20000],rightmax[20000];//given qna 
leftmax[0]=INT_MIN;
for(int i=1;i<n;i++){
	leftmax[i]=max(leftmax[i-1],height[i-1]);
	cout<<leftmax[i]<<",";
}
cout<<endl;
rightmax[n-1]=INT_MIN;
for(int i=n-2;i>=0;i-- ){
	rightmax[i]=max(rightmax[i+1],height[i+1]);
	cout<<rightmax[i]<<",";
}
cout<<endl;
int mini[n],water,totalwater =0;
for(int i=1;i<n-1;i++){
mini[i] =min(leftmax[i],rightmax[i]) ;
 water = mini[i]-height[i];
 if(water >0)
  totalwater+=water ;
  }
cout<<"water collected is:"<<totalwater;
}
int main(){
int height[7]={4,2,0,6,3,2,5};
int n = sizeof(height)/sizeof(int);
trap(height,n);
	return 0;
}*/

