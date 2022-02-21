#pragma once
#include <string>
#include <vector>

using namespace std;

class AnimationFramee
{
private:
	vector<string> m_lines;

public:
	void setLines(vector<string> lines) 
	{
		this->m_lines = lines;
	}
	vector<string> getLines() 
	{
		return m_lines;
	}
	string getLine(int i) 
	{
		return m_lines.at(i);
	}
	int size() 
	{
		return m_lines.size();
	}

	AnimationFramee(){}

	AnimationFramee(vector<string> lines);
};

