#include <iostream>
#include <iomanip>
#include <memory>
#include <string>
#include <vector>
#include <string_view>

using namespace std;
using Words = vector<shared_ptr<string>>;

void swap(Words& words, size_t first,size_t second);
void sort(Words& words);
void sort(Words& words,size_t start, size_t end);
void extract_words(Words& words, string text, string separators);
void show_words (const Words& words);
size_t max_word_length(const Words& words);


int main()
{
	Words words; // string to be sorted
	string text; // string to be stored
	const auto separators{" ,.!?\"\n"}; // word delimiters

	// read the string to be searched from the keyboard
	cout<<"enter a string terminated by *:\n";
	getline(cin,text,'*');

	extract_words(words, text,separators);
	if(words.empty())
	{
		cout<<"no words in text.\n";
		return 0;
	}
	sort(words); // sort the words
	show_words(words);  // output the words
	return 0;
}