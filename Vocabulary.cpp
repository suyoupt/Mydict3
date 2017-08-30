#include "stdafx.h"
#include "Vocabulary.h"


Vocabulary::Vocabulary()
{
}


ostream & operator<<(ostream & o, Vocabulary & v)
{
	o << v.english << ":" << v.chinese << ":" << v.example << endl;
	return o;
}

Vocabulary Vocabulary::create(string input)
{
	vector<string> list;	
	stringstream ss(input);
	string token;
	while (!ss.eof())
	{
		getline(ss, token, ' ');
		if (token.length() > 0)
		{
			list.push_back(token);
		}
	}
	
	return Vocabulary(list[0], list[1], list[2]);
}

Vocabulary::~Vocabulary()
{
}
