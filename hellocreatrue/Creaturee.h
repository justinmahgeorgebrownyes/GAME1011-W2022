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
	int m_emptyLine;
	vector<AnimationFramee> m_creatures;



};

