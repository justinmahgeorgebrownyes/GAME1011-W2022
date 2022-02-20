#pragma once
#include <string>
#include <vector>

using namespace std;

class AnimationFramee
{
private:
	vector<string> lines;



public:
	void setLines(vector<string> lines) {
		this->lines = lines;
	}
	vector<string> getLines() {
		return lines;
	}
	string getLine(int i) {
		return lines.at(i);
	}
	int size() {
		return lines.size();
	}

	AnimationFramee(){}

	AnimationFramee(vector<string> lines);


};

