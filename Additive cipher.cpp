//Aditive cipher
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
void encrypt()
{ 
	string s;
	cout<<"Enter the input plain text :";
	
	cin.ignore();
	getline(cin,s);
	int flag;
	
	
	for(int i=0;i<s.length();i++)
	{
		if(isalpha(s[i]) || s[i]==' ')  flag=0;
		else
		{
			flag=1;
			cout<<"Error only alphabetic message is allowed";
			break;
		}
	}
	if(flag==0)
	{
	
		int k;
		cout<<"Enter the secret key :";
		cin>>k;
		cout<<"\n";
		int z;
		for(int i=0;i<s.length();i++)
		{ 
			 if(isspace(s[i]))
			 {
			 	cout<<s[i];
			 }
			 else
			 {
			 
			  if(islower(s[i])) s[i]=toupper(s[i]);
			  
				z=((s[i]-65)+k)%26+65;   // formula
		
				cout<<(char)z;
			}
		
	
		}
	}


}
void decrypt()
{
	string s1;
	cout<<"Enter the input cipher  text : ";
	cin.ignore();
	getline(cin,s1);
	
	int flag1;
	
	for(int i=0;i<s1.length();i++)
	{
		if(isalpha(s1[i]) || s1[i]==' ')
		flag1=0;
		else
		{
			flag1=1;
			cout<<"Error only alphabetic message is allowed";
			break;
		}
	}
	if(flag1==0)
	{
		int k1;
		cout<<"Enter the secret key :";
		cin>>k1;
		int z1;
		char c;
	 	char arr[]={   'A','B','C','D','E',
		 				'F','G','H','I','J',
						'K','L','M','N','O',
						'P','Q','R','S','T',
						'U','V','W','X','Y',
						'Z'
				};
		for(int i=0;i<s1.length();i++)
		{ 
			 if(islower(s1[i])) s1[i]=toupper(s1[i]); 
			  
			 z1=(s1[i])-65-k1;   //revert back character 
			 
			if(z1>=0)
			{	
				z1=z1%26;
			}
			else
			{ 
				z1=26-(-z1);
			}
			
			c=arr[z1];
			c=tolower(c);
			cout<<c;

	   	}
	
	}
	
	
}

int bruteforce()
{
	string s1,s2;
	cout<<"Enter the plain text : ";
	cin.ignore();
	getline(cin,s1);
	cout<<"Enter the cypher text: ";
	
	getline(cin,s2);
	s1[0]=toupper(s1[0]);
	cout<<s2[0]-s1[0];
}





int main()
{ 
	char re;
	int input1;
	input1=1;
	
	while(input1)
	{
	
		char input;
		cout<<"Enter 'e' to encrypt and 'd' to decrypt and 'b' for brute force = ";
		cin>>input;
		
		if(input=='e')
		encrypt();
		
		if(input=='d')
		decrypt();
		
		if(input=='b')
		bruteforce();
		
		cout<<"\n Do you want to exit program write 0:";
		cin>>re;
		
		if(re=='0')
		input1=0;
		
	}
	return 0;

}

