#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
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
int main(){
	   char str1[100] ;
	   char str2[100]= "hello world";
	  // str1="apna collage"; assi
	  strcpy(str1,str2);
	   cout<<str1<<endl;
	return 0;
}

