#pragma once
#include "Vocabulary.h"

class Dictionary
{
	map<string, Vocabulary> data;

public:
	Dictionary();
	~Dictionary();
	void add(Vocabulary v);
	Vocabulary* search(string english);
	void save();
	void load();
};

