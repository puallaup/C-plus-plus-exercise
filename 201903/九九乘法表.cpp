// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

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
		return 0;
}
