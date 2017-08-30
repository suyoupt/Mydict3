#pragma once
class Vocabulary
{
private:
	string english;
	string chinese;
	string example;

public:
	Vocabulary();
	Vocabulary(string eng, string chi, string exa) : english(eng), chinese(chi), example(exa) {}
	friend ostream& operator<<(ostream&o, Vocabulary &v);
	static Vocabulary create(string input);
	string getEnglish() { return english;  }
	string getChinese() { return chinese; }
	string getExample() { return example;  }

	~Vocabulary();
};

