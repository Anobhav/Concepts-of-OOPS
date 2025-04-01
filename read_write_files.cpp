#include <iostream>
#include <fstream>

// fstream library has useful !!! -- classes -- !!! for working with files in c++ which are 
/*
    fstreambase
    ifstream ( derived from fstreambase )
    ofstream ( derived from fstreambase )
*/
using namespace std;
int main()
{
    // opening files using constructors 
    string st="write operation";
    ofstream out("sample60.txt"); // allows to write in file named sample60.txt
    out.open("sample60.txt"); //  allows to establish a link to sample60.txt
    out<<st;
    out.close(); // terminates the out links to sample60.txt
    // opening file and reading from the files 
    string st2;
    ifstream in("sample60.txt");
    in.open("sample60.txt");
    in>>st2; // gets only the first word 
    getline(in,st2); // gets all the lines 
    cout<<st2;
    in.close();  // terminates input links to sample60.txt
    return 0;
}