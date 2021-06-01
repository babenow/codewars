// The goal of this exercise is to convert a string to a new string where each character in the new string
// is "(" if that character appears only once in the original string, or ")"
// if that character appears more than once in the original string.
// Ignore capitalization when determining if a character is a duplicate.

// Examples
// "din"      =>  "((("
// "recede"   =>  "()()()"
// "Success"  =>  ")())())"
// "(( @"     =>  "))(("
// Notes

// Assertion messages may be unclear about what they display in some languages.
// If you read "...It Should encode XXX", the "XXX" is the expected result, not the input!

#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>
using namespace std;

const string lBr = "(";
const string rBr = ")";
const char space = char(32);

bool has_unique_symbol(char c, const string &word)
{
	int count = 0;

	for (size_t i = 0; i < word.length(); i++)
	{
		if (word[i] == c)
			count++;
	}

	if (count == 0)
	{
		throw("char does not exists in word");
	}

	return count < 2;
}

string duplicate_encoder(const string &word)
{
	string w = *&word;
	string result = "";
	transform(w.begin(), w.end(), w.begin(), [](unsigned char c)
			  { return tolower(c); });

	for (size_t i = 0; i < word.length(); i++)
	{
		if (has_unique_symbol(w[i], w))
		{
			result += lBr;
		}
		else
		{
			result += rBr;
		}
	}

	return result;
}

int main()
{
	string word = "";
	std::cout << "Enter Word: " << std::endl;
	cin >> word;

	// cout << "-> Word length: " << word.length() << endl;
	// for (size_t i = 0; i < word.length(); i++)
	// {
	// 	cout << "-> " << word[i] << endl;
	// }
	cout << "-> Result: " << duplicate_encoder(word) << endl;

	return 0;
}
