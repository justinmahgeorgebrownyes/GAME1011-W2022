#include "Creaturee.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;


Creaturee::Creaturee(string texts) {




    string line;
    string space;
    int n = 0;


    cout << "test";
    ifstream myfile(texts);
    if (myfile.is_open())
    {

        

        vector<string> vector1 = {};
        creatures = {};
        emptyLine = 1;

        while (getline(myfile, line))
        {
            vector1.push_back(line);
            if (line.empty())
            {
                emptyLine++;
            }

                cout << line << '\n';
        }

        for (int i = 0; i < emptyLine; i++)
        {
            AnimationFramee frame1(vector1[0 + i * 4], vector1[1 + i * 4], vector1[2 + i * 4]);
            creatures.push_back(frame1);
        }

    
    


        

        myfile.close();
    } else cout << "Unable to open file";


    


}

void Creaturee::Animate() {
    
    int numFrame = 0;

    while (numFrame != emptyLine) {
        system("cls");



        for (int i = 0; i < 1; i++)
        {
            cout << creatures[numFrame].getLine1() << endl;
            cout << creatures[numFrame].getLine2() << endl;
            cout << creatures[numFrame].getLine3() << endl;

            

        }
        numFrame++;
        this_thread::sleep_for(chrono::milliseconds(1000));



    }



}
