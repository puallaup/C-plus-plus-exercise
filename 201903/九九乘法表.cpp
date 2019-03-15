#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j;
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= i; j++)
			{
				cout << j << "*" << i <<"="<<j * i <<'\t';
			}
			cout << endl;
		}

		cout<<"Test Pull Requst in Github"<<endl;
		return 0;
}
