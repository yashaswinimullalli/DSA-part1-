#include <iostream>
#include<vector>
#include<algorithm>
using namespace std ;
//Bit manuplation..

//bitwise operator
/*int main(){
	cout<<(3 & 5)<<endl;
	cout<<(3|5)<<endl;
	cout<<(3^5) ;
	return 0;
}*/
//ones complement
/*int main(){
	cout<<(~5)<<endl;
	//left shift right shift
	cout<<(7<<2)<<endl;
	cout<<(7>>2)<<endl;

	return 0;
}*/
//check if odd or even

/*void oddoreven(int num){
	if(!(num & 1)){
		cout<<"even\n";
	}
	else{
		cout<<"odd\n";
	}
}

int main(){
	  oddoreven(6);  
	return 0;
}*/
/*int grtIthbit(int num,int i){
	int bitmask = 1<<i;
	if(!(num & bitmask)){
		return 0;
	}else{
		return 1;
	}
}
int main(){
cout<<grtIthbit(7,5);
	return 0;
}*/

//set ith BIT
/*int setIthbit(int num,int i){
	int bitmask = 1<<i;
	return (num | bitmask);
}
  int main(){
cout<<setIthbit(6,3);
	return 0;
  }*/
//clear ith bit
/*int clearithbit(int num,int i){
	int bitmask = ~(1<<i);
	return num & bitmask;
}
int main(){
	 cout<<clearithbit(6,1);
	return 0;
}*/
//check for power of 2:
/*bool ispowerof2(int num){
	if(!(num & num -1)){
		return true;
	}else{
		return false;
	}
}
int main(){
	cout<<ispowerof2(6);
	return 0;
}*/
//update ith bit 
/*int update(int num,int i,int val){
	num =num & ~(1<<i); // clear ith bit

	num = num | (val<<i); // set ith bit 
    cout<<num<<endl;
}
int main(){
	update(7,3,1);
	update(7,2,0);
	return 0; 
}*/
//clear last i bits 
/*void clearibit(int num,int i){
	int bitmask = (~0)<<i;
	num =num & bitmask;
	cout<<num;  
}
int main(){
	clearibit(15,3); // it clears from 0 to i-1...
	return 0;
}*/
// count set bits
/*void countsetbit(int num){
	int count =0;
	while(num >0){
		int lastdig = (num & 1);
		count += lastdig;
		num = num>>1;
	}
	cout<< count << endl;

}
int main(){
	countsetbit(31);
	return 0;
}*/
/*void fastexpo(int x,int n){
	int ans = 1;
	while( n>0){
		int lastbit = n & 1;
		if(lastbit){
			ans = ans * x;
		}
		x=x*x;
		n=n>>1; 
	}
	cout<<ans;
}
int main(){
	
	fastexpo(3,4);
	return 0;
}*/


  
 


