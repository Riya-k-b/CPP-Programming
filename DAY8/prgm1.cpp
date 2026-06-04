#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream outfile("example.txt");
    if(outfile.is_open())
    {
        outfile << "Hello, File!" << endl;
        outfile << "This is line 2." << endl;
        outfile << "C++ file handling is easy!" << endl;
        outfile.close();
        outfile << "File written sucessfully! "<< endl;
    } else {
        outfile << "Error: Could not open file for writting!" << endl;
    }

    ifstream infile("example.txt");
    if(infile.is_open())
    {
        string line;
        cout << "\nFile contents"<< endl;
        while(getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    } else{
        cout << "Error: Could not oprn file for reading!" << endl;
    }
    return 0;
}