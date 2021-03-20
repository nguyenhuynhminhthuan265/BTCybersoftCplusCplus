#include <iostream> 
using namespace std;


class Word {
private:
	string word;
	string type;
	string pronunciation;
	string example;

public:
	Word() {

	}

	Word(string word, string type, string pronunciation, string example) {

		this->word = word;
		this->type = type;
		this->pronunciation = pronunciation;
		this->example = example;
	}

	string getWord() {
		return word;
	}

	void setWord(string word) {
		this->word = word;
	}

	string getType() {
		return type;
	}

	void setType(string type) {
		this->type = type;
	}

	string getPronunciation() {
		return pronunciation;
	}

	void setPronunciation(string pronunciation) {
		this->pronunciation = pronunciation;
	}

	string getExample() {
		return example;
	}

	void setExample(string example) {
		this->example = example;
	}

	string toString() {
		return "Word [word=" + word + ", type=" + type + ", pronunciation=" + pronunciation + ", example=" + example
			+ "]";
	}

};
