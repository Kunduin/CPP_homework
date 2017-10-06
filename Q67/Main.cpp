#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	istringstream spliter;
	string newLine;
	string word;
	vector<string> collector;
	getline(cin, newLine);
	spliter.str(newLine);
	while (spliter>>word)
	{
		collector.push_back(word);
	}
	cout << collector[collector.size() - 1].length();
}