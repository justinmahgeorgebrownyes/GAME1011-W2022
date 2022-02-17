#include "Creature1.h"
#include <iostream>
#include <fstream>
using namespace std;


Creature1::Creature1() {

    
        string line;
        ifstream myfile("C:\\Users\\newjb\\source\\repos\\GAME1011-W2022\\milestone 1\\creaturz1.txt");
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                cout << line << '\n';
            }
            myfile.close();
        }

        else cout << "Unable to open file";

    



}
