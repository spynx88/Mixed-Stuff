#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	cout << "Enter a number " << endl;
	unsigned short InputNum = 0;
	cin >> InputNum;
	bitset<8> InputBits (InputNum);
	cout << InputNum << " in binary is " << InputBits << endl;
	
	
	return 0;

}
