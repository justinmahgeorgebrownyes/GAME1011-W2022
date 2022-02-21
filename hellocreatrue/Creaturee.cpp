#include "Creaturee.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

//the brain of the code
//get information from the text files and create the animation frames
Creaturee::Creaturee(string texts) 
{
    string line;
    string space;
    int n = 0;
    int lineCounter = 1;

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
                //keep track of number of empty lines. this is equivalent to the number of frames 
                m_emptyLine++;
                
            }
            lineCounter++;
                cout << line << '\n';
        }

        //organize info for animation frame creation
        for (int i = 0; i < m_emptyLine; i++)
        {
            int creatureSizes = (lineCounter - m_emptyLine)  / m_emptyLine;

            vector<string> vector2 = {};
            //we are coopying the lines from one frame into a seperate vector
            for (int j = 0; j < creatureSizes; j++)
            {
                vector2.push_back(vector1[j + i * (creatureSizes + 1)]);

            }

            //create the animation frame and put it into the member variable vector for holding animation frames
            AnimationFramee frame1(vector2);
            m_creatures.push_back(frame1);

        }

        myfile.close();
    }
    else 
    {
        cout << "Unable to open file";
    }

}
//this function uses loops 
//in order to form animation 
//of the previously created 
//animation frame objects
void Creaturee::Animate() 
{
    int numFrame = 0;

    while (numFrame != m_emptyLine) 
    {
        //clear any previously printed frames
        system("cls");


        //print out the lines of a frame
        for (int i = 0; i < m_creatures[numFrame].size(); i++)
        {
            cout << m_creatures[numFrame].getLine(i) << endl;

        }
        numFrame++;
        //delay for a second before moving onto the next frame
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}
