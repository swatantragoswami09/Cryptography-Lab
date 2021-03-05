//Euclid's algo

#include <iostream>
using namespace std;

//int gcd(int a, int b)
//{
//  if (b==0) return a;
//  return gcd(b,a%b);
//}

int gcd (int a, int b) 
{
  int r1=a,r2=b;
  while (r2>0) 
  {
    int q=r1/r2;
    int temp=r1-q*r2;
    r1=r2;
    cout<<"r1="<<r1<<"\tr2="<<r2<<"\tr="<<temp<<"\n";
    r2=temp;
    
  }
  return r1;
}

int main () {
  int x, y;
  cout << "Enter two integers: ";
  if (!(cin >> x >> y)) {
    cout << "Please enter only integers" << endl;
  } else {
    cout << "gcd(" << x << ", " << y << ") = " << gcd(x,y) << endl;
  }
  return(0);
}
