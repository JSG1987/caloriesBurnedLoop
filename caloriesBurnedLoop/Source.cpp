#include<iostream>
#include <fstream>
#include<iomanip>
#include<cmath>



using namespace std;


float burn = 3.6;
int n;
int sum = 0;

int main()
{
	ofstream outfile;
	outfile.open("calories.txt");

	cout << "Calories burned " << "========" << "Time\n";
	outfile<< "Calories burned " << "========" << "Time\n";
	for (int j=5; j <= 30; j = j +5)
	{
		//float burn = 3.6;
		sum += (j*burn);
		cout << sum << "===========" << j << endl;
		outfile << sum << "===========" << j << endl;
	}







	system("PAUSE");
	return 0;
}
