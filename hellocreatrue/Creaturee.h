#pragma once
#include "AnimationFramee.h"
#include <vector>

using namespace std;

class Creaturee
{

public:

	Creaturee(){}

	Creaturee(string texts);

	void Animate();


private:
	int emptyLine;
	vector<AnimationFramee> creatures;



};

