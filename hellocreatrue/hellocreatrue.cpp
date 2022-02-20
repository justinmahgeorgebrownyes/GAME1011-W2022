 //hellocreatrue.cpp : this file contains the 'main' function. program execution begins and ends there.


#include <iostream>
#include "Creaturee.h"
using namespace std;

int main()
{


    Creaturee hi1("c:\\users\\newjb\\source\\repos\\game1011-w2022\\hellocreatrue\\creaturez1.txt");
    Creaturee hi2("c:\\users\\newjb\\source\\repos\\game1011-w2022\\hellocreatrue\\creaturez2.txt");
    Creaturee hi3("c:\\users\\newjb\\source\\repos\\game1011-w2022\\hellocreatrue\\creaturez3.txt");
    Creaturee hi4("c:\\users\\newjb\\source\\repos\\game1011-w2022\\hellocreatrue\\creaturez4.txt");
    Creaturee hi5("c:\\users\\newjb\\source\\repos\\game1011-w2022\\hellocreatrue\\creaturez5.txt");
    Creaturee hi6("c:\\users\\newjb\\source\\repos\\game1011-w2022\\hellocreatrue\\creaturez6.txt");


    for (int i = 0; i < 1; i++)
    {
        hi6.Animate();

    }

    


    
    


    std::cout << "hello world!\n";
    



}

// run program: ctrl + f5 or debug > start without debugging menu
// debug program: f5 or debug > start debugging menu

// tips for getting started: 
//   1. use the solution explorer window to add/manage files
//   2. use the team explorer window to connect to source control
//   3. use the output window to see build output and other messages
//   4. use the error list window to view errors
//   5. go to project > add new item to create new code files, or project > add existing item to add existing code files to the project
//   6. in the future, to open this project again, go to file > open > project and select the .sln file
