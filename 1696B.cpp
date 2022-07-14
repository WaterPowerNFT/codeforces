#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	ifstream fin("input.txt");
	int n;
	fin >> n;
	for (int i = 0; i < n; i++)
	{
		int size_mas;
		fin >> size_mas;
		//vector <int> massive;
		int temp=0;
		int result = 0;
		bool zeros = true;
		for (int j = 0; j < size_mas; j++)
		{
			fin >> temp;
			//massive.push_back(temp);
			if (temp != 0)
			{
				if (zeros == true)//was zeros, nonzeros right now
				{
					zeros = false;
					result += 1;
				}
			}
			else {//temp==0
				if (zeros == false)
				{
					zeros = true;
				}
			}

		}
		cout << result << endl;
	}
	fin.close();
	return 0;
}