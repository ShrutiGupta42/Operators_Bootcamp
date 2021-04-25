#include<iostream>
using namespace std;

int main()
{
	char a;
	cout<<"enter the character:";
	cin>>a;
	(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')? cout<<"it is a vowel":cout<<"not a valid";
	return 0;
}
