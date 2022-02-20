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

    int lineCounter = 1;



    cout << "test";
    ifstream myfile(texts);
    if (myfile.is_open())
    {

        

        vector<string> vector1 = {};
        m_creatures = {};
        m_emptyLine = 1;

        while (getline(myfile, line))
        {
            vector1.push_back(line);
            if (line.empty())
            {
                m_emptyLine++;
                
            }
            lineCounter++;
                cout << line << '\n';
        }

        for (int i = 0; i < m_emptyLine; i++)
        {
            int creatureSizes = (lineCounter - m_emptyLine)  / m_emptyLine;

            vector<string> vector2 = {};

            for (int j = 0; j < creatureSizes; j++)
            {
                vector2.push_back(vector1[j + i * (creatureSizes + 1)]);

            }

            AnimationFramee frame1(vector2);
            m_creatures.push_back(frame1);

            
        }

    
    


        

        myfile.close();
    } else cout << "Unable to open file";


    


}

void Creaturee::Animate() {
    
    int numFrame = 0;

    while (numFrame != m_emptyLine) {
        system("cls");



        for (int i = 0; i < m_creatures[numFrame].size(); i++)
        {
            cout << m_creatures[numFrame].getLine(i) << endl;
            

        }
        numFrame++;
        this_thread::sleep_for(chrono::milliseconds(1000));



    }



}
