// create and write to files 

// to create a file using ofsteam or fstream

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream myFile("file.txt");

    myFile << " files are tricky, but it is fun enough";

    myFile.close();
}