#include <iostream>
#include <string>
#include <cstring>
#include <cmath>


using namespace std;

int main()
{
	string input;
	int length = 0;

	cout << "Input Sequence\n>>";
	cin >> input;

	system("CLS");

	length = input.size() / 3;
	
	if(input.size() % 3 > 0)
	{
		length += 1;
	}
	
	string sequence[length][3];
	
	int j = 2;
	
	for(int i = 0; i < length; ++i)
	{	
		sequence[i][0] = input[j - 2];
		sequence[i][1] = input[j - 1];
		sequence[i][2] = input[j];
		
		j += 3;
	}
	
	for(int i = 0; i < length; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			cout << sequence[i][j];
		}
		
		cout << endl;
	}
	
	system("pause");

	return 0;
}
