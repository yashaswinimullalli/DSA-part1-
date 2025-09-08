#include <iostream>
#include<vector>
#include<algorithm>
using namespace std ;
//class and object
//creating classes
/*class student{
	//properties
	string name;
	float cgpa;
	//member function
	void getpercentage(){
		cout<< (cgpa * 10)<<"% \n";
	}
};
class user{
int id;
string username;
string password;
string bio;
void deactivate(){
	cout<<"deleting account\n";
}
void editbio(string newbio){
	bio = newbio;

}
};
int main(){
	student s1; // object
	cout<<sizeof(s1)<<endl;
	return 0;
}*/

//access modifier

/*class student{
	//properties
public:
	string name;
	float cgpa;
	//member function
	void getpercentage(){
		cout<< (cgpa * 10)<<"% \n";
	}
};
int main(){
	student s1;//(s1 object)
	s1.name = "yashaswini";
	s1.cgpa =9.4;
	cout<<s1.name<<endl;
	s1.getpercentage();
	return 0;
}*/

// even though the data is in private mode we can access and edit it indirectly using getters and setters 
/*class student{
	//properties
	string name;
	float cgpa;
public:
	//member function
	void getpercentage(){
		cout<< (cgpa * 10)<<"% \n";
	}
	//setters
	void setname(string nameval){
		name = nameval;
	}
	void setcgpa(float cgpaval){
		cgpa=cgpaval;
	}
	//getters
	string getname(){
		return name;
		
	}
	float getcgpa(){
		return cgpa;
	}
};
int main(){
	student s1;
	s1.setname("yashaswini");
	s1.setcgpa(9.4);
	cout<<s1.getname()<<endl;
	cout<<s1.getcgpa()<<endl;
	return 0;
}*/

//encapsulation
/*class car{
	string name;
	string colour;
	public: 
	// constructor
	// constructor overloding
	//non parametarized constructor
	car (){
		cout<<"constuctor without parameter"<<endl;
	}
	//parameterized constuctor
	car(string namevalue,string colour){
	cout<<"constructor is called. object being created..\n";
	name =	namevalue; 
	this->colour = colour;           
	}
	void start(){
		cout<<"Car has started"<<endl;
	}
	void stop(){
		cout<<"Car has stopped";
	}
	//getter
	string getname(){
		return name;
		
	}
		string getcolour(){
		return colour;
	}

};
int main(){
	car c0;// non parametrized constructor is called
	car c1("maruti 800","white");
	car c2("breza","gold");
	//cout<<"carname:"<<c1.getname()<<endl;
	//cout<<"carcolour:"<<c1.getcolour()<<endl;
	return 0;
}*/
//practice QNA
/*class user{
int ID;
string password;
public:
string username;
	user(int ID){
		this->ID =ID;
	}
	string getpassword(){
		return password;
	}
	void setpassword(string password){
		this->password =password;
	}
};
int main(){
	user c1(111);
	c1.username="yashaswini";
	c1.setpassword("yashu");
	cout<<"password :"<<c1.getpassword()<<endl;
	cout<<"Username :"<<c1.username<<endl;
	return 0;
}*/

//copy constructor
/*class car{
		public:
		string name;
		string color;
		car(string name,string color){
			this->name = name;
			this->color=color;
		}

	};
int main(){
	car c1("maruti","white");
	car c2(c1);
	cout<<c2.name<<endl;
	cout<<c2.color<<endl;
	return 0;
}
*/

/*class car{
		public:
		string name;
		string color;
		car(string name,string color){
			cout<<"original car";
			this->name = name;
			this->color=color;
		}
		car(const car &original){
			cout<<"copiying original to new.\n";
			name = original.name;
			color = original.color;
		}

	};
int main(){
	car c1("maruti","white");
	car c2(c1);// custom copy constructor
	cout<<c2.name<<endl;
	cout<<c2.color<<endl;
	return 0;
}*/
//default constructor
/*#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor (no arguments)
    Student() {
        name = "Not given";
        age = 0;
        cout << "Default constructor called.\n";
    }
};

int main() {
    Student s1;   // default constructor is called

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}
*/

//shallow and deep copy
//shallow copy

/*class car{
		public:
		string name;
		string color;
		int *mileage;
		car(string name,string color){
			cout<<"original car";
			this->name = name;
			this->color=color;
			mileage = new int; // dynamic allocation
			*mileage =12;
		}
		car(const car &original){
			cout<<"copiying original to new.\n";
			name = original.name;
			color = original.color;
			mileage = original.mileage;
		}

	};
int main(){
	car c1("maruti","white");
	car c2(c1);// custom copy constructor
	cout<<c2.name<<endl;
	cout<<c2.color<<endl;
	cout<<*c2.mileage<<endl;
	*c2.mileage = 10;
	cout<<*c1.mileage<<endl ;
	return 0;
}*/

//deep copy (it requires a custom copy constructor)

/*class car{
		public:
		string name;
		string color;
		int *mileage;
		car(string name,string color){
			cout<<"original car";
			this->name = name;
			this->color=color;
			mileage = new int; // dynamic allocation
			*mileage =12;
		}
		car(const car &original){
			cout<<"copiying original to new.\n";
			name = original.name;
			color = original.color;
			mileage = new int;
			*mileage = *original.mileage;
		}

	};
int main(){
	car c1("maruti","white");
	car c2(c1);// custom copy constructor
	cout<<c2.name<<endl;
	cout<<c2.color<<endl;
	cout<<*c2.mileage<<endl;
	*c2.mileage = 10;
	cout<<*c1.mileage<<endl ;
	return 0;
}*/

//deconstructor
/*class car{
		public:
		string name;
		string color;
		int *mileage;
		car(string name,string color){
			cout<<"original car"<<endl;
			this->name = name;
			this->color=color;
			mileage = new int; // dynamic allocation
			*mileage =12;
		}
		car(const car &original){
			cout<<"copiying original to new."<<endl;
			name = original.name;
			color = original.color;
			mileage = new int;
			*mileage = *original.mileage;
		}
		~car(){
			cout<<"deleting object"<<endl;
			if(mileage != NULL){
				delete mileage;
				mileage =NULL;
			}

		}
	};
int main(){
	car c1("maruti","white");
	car c2(c1);// custom copy constructor
	cout<<c2.name<<endl;
	cout<<c2.color<<endl;
	cout<<*c2.mileage<<endl;
	*c2.mileage = 10;
	cout<<*c1.mileage<<endl ;
	return 0;
}*/

//Inheritece
//single level of inheritence 
/*class Animal{
	public:
	string color;
	void eat(){
		cout<<"eats"<<endl;
	}
	void breathe(){
		cout<<"breaths"<<endl;
	}
};
class fish : public Animal{ // try wiht protected ,private
	public:
	int fins;
	void swim(){
		eat();
		cout<<"swim"<<endl;
	}
	
};
int main(){
		fish f1;
		f1.fins = 3;
		//cout<<f1.fins<<endl;
	//	f1.swim();
	//	f1.breathe();
	//	f1.eat();
	return 0;
}*/
/*class Animal{
	public:
	void eat(){
		cout<<"eats\n";
	}
	void breathe(){
		cout<<"breathe\n";
	}
};
class Mammal : public Animal{
	public:
	string bloodtype;
	Mammal(){
		bloodtype = "warm";
	}
};
class Dog : public Mammal{
	public:
	void tailwag(){
		cout<<"a dog wags its tail\n";
	}
};
int main(){
	Dog d1;
	d1.breathe();
	d1.eat();
	d1.tailwag();
	cout<<d1.bloodtype<<endl;
	return 0;
}*/




