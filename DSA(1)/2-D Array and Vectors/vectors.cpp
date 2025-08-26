#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//*****dynamic memeory allocaltion *//
/*int main(){
	int size;
	cout<<"enter a size of an array";
	cin>>size;
	int *arr = new int[size];  //new memory allocation stores inn heap
int x =1;
for(int i=0;i<size;i++){
	arr[i]=x;
	cout<<arr[i]<<" ";
	x++;
}
cout<<endl;

	return 0;
}*/
//****DMA in function*******//
/*void fun(){
		int size;
	cout<<"enter a size of an array";
	cin>>size;
	int *arr = new int[size];  //new memory allocation stores inn heap
int x =1;
for(int i=0;i<size;i++){
	arr[i]=x;
	cout<<arr[i]<<" ";
	x++;
}
delete [] arr; // its necessary to delete allocated memory.bcs it is stored in the form of heap dosent get destroyed even after functoin return causes a memory leak.
}
int main(){
	fun();
	return 0;
}*/
//*********dynamic memory allocation of 2D array******/
/*int main(){
	int row,col;
	cout<<"enter rows and col\n";
	cin>>row>>col;
	int **matrix = new int*[row];
	for(int i=0;i<row;i++){
		matrix[i]=new int[col];
	}
	//datastore
	int x=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			matrix[i][j] = x++;
			cout<<matrix[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<matrix[2][2]<<endl;// both are same ..
	cout<<*(*(matrix+2)+2)<<endl;
	return 0;
}*/
//**** create vector*******/
/*int main(){
	vector<int> vec1;
	cout<<vec1.size()<<"\n"; // it returns no. of elements
	vector<int> vect={1,2,3,4,5};
	cout<<sizeof(vect)<<"\n"; //internal structure
	vector<int> vec2(10,-1);
	for(int i=0;i<vec2.size();i++){
		cout<<vec2[i]<<" ";
	}
	cout<<endl;
	return 0;
}*/

/*int main(){
	vector<int> vec ={1,2,3,4};
	cout<<"size :"<<vec.size()<<endl;
	cout<<"capacity:"<<vec.capacity()<<endl;
	vec.push_back(5);
	cout<<"size :"<<vec.size()<<endl;
	cout<<"capacity:"<<vec.capacity()<<endl;
	vec.pop_back();
	cout<<"size :"<<vec.size()<<endl;
	cout<<"capacity:"<<vec.capacity()<<endl;

		return 0;
}*/

//****pair sum *******/#include <iostream>#include <iostream>
/*vector<int> pairsum(vector<int> arr,int target){ //return vector
	int st=0,end=arr.size()-1;
	int currsum=0;
	vector<int> ans;
	while(st<end){
		currsum = arr[st]+arr[end];
		if(currsum == target){
		ans.push_back(st);
		ans.push_back(end);
		return ans;
		}else if(currsum > target){
			end--;
		}else{
			st++;
		}
	}
return ans;
}
int main(){
	vector<int> vec={2,7,11,15};
	int target =9;
	cout<<"vector target:";
	vector<int> arr=pairsum(vec,target);
	cout<<arr[0]<<","<<arr[1];
	return 0;
}*/

//********2D vector********//

/*int main(){
	vector<vector<int>> matrix ={{1,2,3},{4,5},{6}};
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/

/*int main()
{
	vector<int> vec;
	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	return 0;
}*/
