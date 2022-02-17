#pragma once
#include <string>
using namespace std;
class Enemy
{
protected:
	int damage = 10;
		string warcry = "Roar!";
		string attack ;

public:
	Enemy(int damage , string warcry, string attack) {
		this->damage = damage;
		this->warcry = warcry;
		this->attack = attack;

	}

};


class Skeleton : public Enemy {
	
};

class Troll : public Enemy {

};

class Orc: public Enemy {

};

class DarkOrc: public Orc{
	int magic = 50;
};


