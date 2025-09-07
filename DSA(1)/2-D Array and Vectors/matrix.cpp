#include <bits/stdc++.h>
using namespace std ;
//2D arrays......
//*********************************************************spiral matrix**********************************//
//spiral matrix ( while passing function elements to void in matrix coloum dimension compalsory mentioned)
/*void spiralmatrix(int mat[][4],int n,int m){
int srow = 0, scol = 0;
int erow = n-1, ecol=m-1;
while(srow<=srow && scol<=ecol ){
	//top
for(int j=scol; j<=ecol;j++){
	cout<<mat[srow][j]<<" ";
} 
	//right
for(int i=srow+1 ;i<=erow;i++){
	cout<<mat[i][ecol]<<" ";
}
	//bottom
	for(int j=ecol-1 ;j>=scol;j--){
		if(srow == erow){
			break;
		}
	cout<<mat[erow][j]<<" ";
}
//left
 for(int i=erow-1 ;i>=srow+1;i--){
	if(srow == erow){
			break;
		}
	cout<<mat[i][scol]<<" ";
}
srow++ ;scol++;
erow--;ecol--;
}
cout<<endl;
}
int main(){ 
	int matrix[4][4]={{1,2,3,4},// even matrix
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};
	int matrix2[3][4]={{1,2,3,4},// even matrix
	{5,6,7,8},
	{9,10,11,12},
	};
	spiralmatrix(matrix,4,4);
	spiralmatrix(matrix2,3,4);
		return 0;
}*/
//*********************************************************digonal matrix**********************************//

/*int digonalsum(int mat[][3],int n){
int sum =0;
for(int i=0;i<n;i++){// timecomplexity = O(n^2)
	for(int j=0;j<n;j++){
		if(i==j){
			sum+=mat[i][j];
		}else if(j == n-i-1){
           sum+=mat[i][j];
		}
	}
}
cout<<"sum of digonal elemnts is:"<<sum;
}

int main(){
	int mat[3][3]={{1,2,3},
	{5,6,7},
	{9,10,11},
};
digonalsum(mat,3);
	return 0;
}*/
//optimized digonal sum
/*void digonalsum(int mat[][3],int n){
	int sum =0;
	for(int i=0;i<n;i++){
		sum+=mat[i][i];//pd
		if(i!=n-i-1){
			sum+=mat[i][n-i-1];//sd
		}
	}
	cout<<"sum of digonal elements:"<<sum;
}
int main(){
	int mat[3][3]={{1,2,3},
	{5,6,7},
	{9,10,11}};
digonalsum(mat,3);
	return 0;
}*/

//******************search in sorted matrix ************//
/*bool search(int mat[][4],int n,int m,int key){
	int i=0,j = m-1;
	while(i<n && j>=0){
		if(mat[i][j]==key){
			cout<<"found at cell("<<i<<","<<j<<")\n";
			return true;
		}else if(mat[i][j]>key){
			//left
			j--;
		}else{
			//down
			i++;
		}
	}
	cout<<"key not found\n";
	return false;
}
int main(){
	int matrix[4][4]={{10,20,30,40},
	{15,25,35,45},
	{27,29,37,48},
	{32,33,39,50}};
search(matrix,4,4,50);
	return 0;
}*/

/*int main(){
	int mat[4][4]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<mat<<"="<<&mat[0][0]<<"\n";
	cout<<mat+1<<" != "<<&mat[0][1];
	return 0;
}*/

//matrix pointes in function
/*int fun(int mat[][4],int n,int m){
cout<<"0th row ptr:"<<mat<<endl;
cout<<"1th row ptr:"<<mat+1<<endl; //row pointers
cout<<"2th row ptr:"<<mat+2<<endl;
cout<<"3th row ptr:"<<mat+3<<endl;

cout<<"0th row value:"<<*mat<<endl;  //coloum pointers
cout<<"1th row value"<<*mat+1<<endl;
cout<<"2th row value"<<*mat+2<<endl;
cout<<"3th row value"<<*mat+3<<endl;

cout<<*(*(mat+2)+2);
}
int main(){
	int mat[4][4]={{1,2,3},{4,5,6},{7,8,9}};
	fun(mat,4,4);
	return 0;
}*/

