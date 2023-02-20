/*
To perform file processing in C++, header files <iostream> and <fstream> must be included in your C++ source file.
standard C++ library called fstream, which defines three new data types
1. ofstream = This data type represents the output file stream and is used to create files and to write information to files.
2. ifstream = This data type represents the input file stream and is used to read information from files.
3. fstream = This data type represents the file stream generally, and has the capabilities of both ofstream and ifstream which means it can create files, write information to files, and read information from files.

A file must be opened before you can read from it or write to it. Either ofstream or fstream object may be used to open a file for writing. And ifstream object is used to open a file for reading purpose only.
*/
#include <fstream>
#include <iostream>
using namespace std;

int main(){
    char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   // write the data at the screen.
   cout << data << endl;
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();

   return 0;

}



//https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm