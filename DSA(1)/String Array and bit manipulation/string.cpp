#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std ;
/*int main(){
	char ch='a';
	cout<<(int)ch<<endl;
	ch = 'f';
	int position =ch -'a';
	cout<<"position :"<<position<<endl;
	return 0;
}*?
//****char array*****/
/*int main(){
	char arr[5]={'a','b','c','d','\0'};
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}*/
/*char work[]="code"; 
cout<<work<<endl;
char wor[5]="code";
cout<<wor;
string a ="money";
cout<<a;
a[0] = 'M';
cout<<a;
	return 0;
}*/
//input of character 
/*int main(){
char arr[30];
cout<<"1.entera a name :";
cin>>arr; // cin ignore white space;
cout<<"the name we stored:"<<arr<<endl;
cout<<"strlen:"<<strlen(arr)<<endl;*/
/*char sen[60];
cout<<"2,entera a name :"<<endl;
cin.getline(sen,50,'*');
cout<<"the name we stored:"<<sen<<endl;
cout<<"strlen:"<<strlen(sen);
	return 0;
}
*/
/*void tolow(char word[],int n){
for(int i=0;i<n;i++){
	char ch = word[i];
	if(ch>='a'&& ch<='z'){
		continue;
	}else{
		word[i]=ch-'A'+'a';
	}
}
cout<<"upper case:"<<word;
}
int main(){
char word[]="ApPle";
tolow(word,strlen(word));

	return 0;
}*/

/*int main(){
	char arr[10]="gadag";
	string a =arr;
	int st =0,end =strlen(arr)-1;
	while(st<end){
		swap(arr[st++],arr[end--]);
		}
	cout<<"reversed value :"<<arr<<endl;
	if(arr == a){
		cout<<"valid palindrome";
	}
	else{
		cout<<"invalid palindrome";
	}
	return 0;
}*/
/*int main(){
	   char str1[100]="zbc" ;
	   char str2[100]= "abc";
	  // str1="apna collage"; assignment of variable is not posiible for string
	  //strcpy(str1,str2);
	   //cout<<str1<<endl;
	 // strcat(str1,str2);
	  // cout<<str1<<endl;
	  cout<< strcmp(str1,str2)<<endl;	
	return 0;
}*/

/*#include <iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
	string str;
	getline(cin,str);
	cout<<str[0];
	return 0;
}
*/
//for each loop method to get acess each character from the string

/*int main(){
	string str ="apna college!";
	// noraml method
	for(int i=0; i<str.length();i++){
		cout<<str[i]<<"_";
	}
	cout<<"\n";
	
for(char ch : str){
	cout<<ch<<",";
}
cout<<endl;
	return 0;
}*/

//String member function

/*int main(){
	string str = "apna nam";
	cout<<str.length()<<endl;// length of string 
	cout<<str.at(3)<<endl; // the array element
	cout<<str.substr(0,4)<<endl; //substring
	cout<<str.find("na");//position of first found char
	return 0;
}*/
// valid Anagram TC :0(n)
/*bool isanagram(string str1,string str2){
	if(str1.length() != str2.length()){
		cout<<"not valid anagrams";
		return false;
	}
	int count[26]={0};
		for(int i=0; i<str1.length();i++){
			int idx =str1[i]-'a';
			count[idx]++;
		}
		int idx;
		for(int i=0;i<str2.length();i++){
				idx =str2[i]-'a';
			if(count[idx] == 0){
			cout<<"invalid anagram";
				return false;
			}
         	count[idx]--;
		}
	
		cout<<"valid anagram";
		}


int main(){
	string str1 ="anagram";
	string str2 ="nagaram";
	isanagram(str1, str2);
	return 0;
}*/

//using operators to compare the variables

/*int main(){
	string str = "aar";
	string str1 ="car";
	cout<<(str ==str1)<<endl;
	cout<<(str > str1)<<endl;
	cout<<(str < str1)<<endl;
	return 0;
}
*/