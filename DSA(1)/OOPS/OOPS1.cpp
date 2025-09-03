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

//friend function

/*class Employee {
  private:
    int salary;

  public:
    Employee(int s) {
      salary = s;
    }

    // Declare friend function
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
  cout << "Salary: " << emp.salary;
}

int main() {
  Employee myEmp(50000);
  displaySalary(myEmp);
  return 0;
}*/


//Inheritence

// Base class
/*class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}*/

//multilevel inheritence
// Base class (parent)
/*class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}*/

//multiple inheritence
// Base class
/*class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}*/

//protected data access
// Base class
/*class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}*/

//polymorphism
/*#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}*/