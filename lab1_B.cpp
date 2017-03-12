#include <iostream>
using namespace std;

int main()
{
 int n;

 cout << "Enter a number: ";
 cin >> n;
 print:
 cout << n << " ";
 if (n==1) return 0;
 if (n%2==1) n=3*n+1;
 else n=n/2;
 goto print;
}
