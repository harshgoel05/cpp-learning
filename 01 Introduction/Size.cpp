#include <iostream>
using namespace std;

int main()
{
	cout << "Size of char : " << sizeof(char) << " byte" << endl;
	cout << "Size of int : " << sizeof(int) << " bytes" << endl;
	cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
	cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
	cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;
	cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;
	cout << "Size of float : " << sizeof(float) << "bytes" << endl;
	cout << "Size of double : " << sizeof(double) << " ytes" << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

	return 0;
}

// Output

// Size of char : 1 byte
// Size of int : 4 bytes
// Size of short int : 2 bytes
// Size of long int : 4 bytes
// Size of signed long int : 4 bytes
// Size of unsigned long int : 4 bytes
// Size of float : 4 bytes
// Size of double : 8 bytes
// Size of wchar_t : 2 bytes