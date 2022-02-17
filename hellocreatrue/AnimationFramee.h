#pragma once
#include <string>

using namespace std;

class AnimationFramee
{
private:
	string line1;
	string line2;
	string line3;



public:
	void setLine1(string line1) {
		this->line1 = line1;
	}
	string getLine1() {
		return line1;
	}

	void setLine2(string line2) {
		this->line2 = line2;
	}
	string getLine2() {
		return line2;
	}

	void setLine3(string line3) {
		this->line3 = line3;
	}
	string getLine3() {
		return line3;
	}

	AnimationFramee(){}

	AnimationFramee(string line1, string line2, string line3);


};

