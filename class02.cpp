#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

void readTxt(string file);

int main()
{
	cout << "welcome to Qibao's Class02." << endl;
	readTxt("momo.txt");
    return 0;
}

void readTxt(string file)
{
	int a=0, b=1, d=0;
	ifstream infile;
	infile.open(file.data());   //将文件流对象与文件连接起来 
	assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 
	char c;
	infile >> noskipws;
	while (!infile.eof())
	{
		infile >> c;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			a++;
		}
		if (c == '\n')
		{
			b++;
		}
		if (c != ' ' && c != '\t' && c != '\n')
		{
			d++;
		}
		cout << c ;
	}
	cout << endl;
	cout << "line:" << b << endl;
	cout << "word:" << a << endl;
	cout << "character:" << d << endl;
	cin >> d;
	infile.close();  //关闭文件输入流 
}
