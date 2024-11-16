#include <iostream>
using namespace std;
int main()
{
int n, count = 0, limit;

cout << "Introduce el valor para encontrar la tabla de multiplicar: ";
cin >> n;

cout << "Introduce el valor para hallar la tabla de multiplicar: ";
cin >> limit;
do
{
cout << n << "*" << count << " = " << n*count <<endl;
count++;
}
while(count <= limit);
return 0;
}

