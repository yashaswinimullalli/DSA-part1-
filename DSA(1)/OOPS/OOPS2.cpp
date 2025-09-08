#include <iostream>
#include<vector>
#include<algorithm>
using namespace std ;
//polymorphism
//1.compile time polymorphism --> (1) function overloding 
/*class print{
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
}*/

//1.compile time polymorphism --> (1) operator overloding 
 
class complex{
	int real;
	int img;
	public:
	complex(int r,int i){
		real = r;
		img =i;
	}
	void showNum(){
		cout<<real<<"+"<<img<<"i\n";
	}
	void operator + (complex &c2){
		int resreal = this->real +c2.real;
		int resimg = this->img +c2.img;
		complex c3(resreal,resimg);
		cout<<"res = ";
		c3.showNum();
	}
};
int main(){
	complex c1(1,2);
	complex c2(3,4);
	c1.showNum();
	c2.showNum();
	c1 +c2;
	return 0;
}
