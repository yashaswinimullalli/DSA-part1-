#include <iostream>
#include<vector>
#include<algorithm>
using namespace std ;
//polymorphism
class print{
public:
	void show(int x){
		cout<<"int :"<<x<<endl;
	}
	void show(string str){
		cout<<"string :"<<str<<endl;
	}


};
int main(){
	print ob1;
	ob1.show("apna collage");
	ob1.show(25);
	return 0;
}
