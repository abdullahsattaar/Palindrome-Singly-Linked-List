#include<iostream>
#include<string.h>
using namespace std;

//PALINDROME
bool isPal(string str,int s, int e) 
{ 
    if (s == e) 
    return true; 
    if (str[s] != str[e]) 
    return false; 
    if (s < e + 1) 
    return isPal(str, s + 1, e - 1); 
  
    return true; 
}
bool isPalindrome(string str) 
{ 
   int n=0;
   for(int i=0;str[i]!='\0';i++)
   {
	   n++;
   }
    if (n == 0) 
        return true; 
      
    return isPal(str, 0, n - 1);   
} 

int main()
{
	//PALINDROME
	cout<<"//PALINDROME"<<endl<<endl;
	
	string st="madam";
	if (isPalindrome(st))
		cout<<"YES it is Palindrome "<<endl<<endl;
	else
		cout<<"NO it is not Palindrome"<<endl<<endl;
	
	system("pause");
	return 0;
}