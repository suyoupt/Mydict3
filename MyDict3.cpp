// MyDict3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Dictionary.h"
#include "Vocabulary.h"

int main()
{
	Vocabulary v("abc","中文","例子2");
	Vocabulary v2("abcd", "中文", "例子");
	Dictionary d;
	d.add(v);
	d.add(v2);

	d.save();
	
	if (d.search("abc") != nullptr)
	{
		cout << "found" << endl;
		cin.get();
	}


    return 0;
}

