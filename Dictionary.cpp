#include "stdafx.h"
#include "Dictionary.h"



Dictionary::Dictionary()
{
	load();
}


Dictionary::~Dictionary()
{
}

void Dictionary::add(Vocabulary v)
{
	data[v.getEnglish()] = v;
}

Vocabulary * Dictionary::search(string english)
{
	auto found  = data.find(english);
	if (found != data.end())
	{
		return &data[english];
	}
	return nullptr;
}

void Dictionary::save()
{
	ofstream o;
	o.open("dict.dat");
	for (const auto& pair : data)
	{
		Vocabulary v = pair.second;

		o << v.getEnglish() << ' ' << v.getChinese() << ' ' << v.getExample() << '\n';
	}

	o.close();
}

void Dictionary::load()
{
	ifstream in;
	in.open("dict.dat");
	string line;
	if (!in.fail() && !in.eof())
	{
		getline(in, line);
		if (line.length() > 0)
		{
			add(Vocabulary::create(line));
		}
	}

	in.close();
}

