#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string demo = "VG101";
	string demo2 = "C++";
	string space = " ";
	
	//size
	cout<<demo<<": "<<demo.size()<<endl;
	
	//append
	space = space.append(demo2);
	cout<<demo.append(space)<<endl;
		//notice here demo has already been changed
		//into "VG101 C++"
	space = " ";
	
	//find
	cout<<"G are in "<<demo.find("G")<<endl;
	//cout<<"G are in "<<demo.find("G",3)<<endl;
		//from 2 to the end of the string
		if (demo.find("G",3) == demo.npos)
		{
			cout<<"This character is not in the string."<<endl;
		}
		else
		{
			cout<<"G are in "<<demo.find("G",3)<<endl;
		}
	cout<<"G are in "<<demo.rfind("G",2)<<endl;
		//from the first components to the 2-1

	//substr
	cout<<demo.substr(2)<<endl;
		//from the 2-1st position
	cout<<demo.substr(2,3)<<endl;
		//the 3 characters from the 2-1st postino 
	//cout<<demo<<endl;

	//replace
	string test = demo;
	cout<<test<<endl;
	cout<<test.replace(2,2,"lk")<<endl;
		//from the 2+1st position to the 2-1 bits after 
	cout<<test.replace(2,3,"abcd",3)<<endl;
		//3 means the first three characters

	//insert
	test = demo;
	cout<<demo.insert(2,"iii")<<endl;

	//pushback
	test = demo;
	test.push_back('i');
		//add a character
	cout<<test<<endl;
	//cout<<test.push_back('i')<<endl;
	//cannot do this

	//swap
	string str1 = "abc";
	string str2 = "efg";
	string str3 = "hijk";
	str1.swap(str2);
	cout<<str1<<endl;
	str1.swap(str3);
	cout<<str1<<endl;//no length limits

	//compare
		//if two strings are the same 
		//return 0

	string com1,com2;
	cin>>com1>>com2;
	int a = com1.compare(com2);
	cout<<a<<endl;
}