#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main (int argc, char **argv){

//initializing file variable
ifstream inFile;
//initializing output file variable
ofstream outputFile;
outputFile.open("MichelleVera.txt");

//initializing variables to calculate sum and mean
string fileName;
string line;
float fileLength = 0.0;
float lineLength = 0;
float sum = 0.0;
float mean = 0.0;
float variance = 0.0;
float number_of_lines = 0.0;
bool nextFile = true;


// preparing program to ask for further files in loop
while(nextFile!= false){

  //asking the user for filename input
  std::cout << "Please enter the name of the file in which you would like to use: ";
  //getting user input into file name
  getline(cin, fileName);
  inFile.open(fileName.c_str());

//calculating sum and mean
  while (std::getline(inFile, line)){
    ++lineLength;
    ++fileLength;
    ++number_of_lines;
    for (int i = 0; i < line.length(); i++) {
        lineLength = line.length();
      }
      sum += lineLength;
        mean = (sum/fileLength);

  }

  std::cout << "The sum of the length of the DNA strings is : " << sum << " \n";
  std::cout << "The mean of the length of the DNA strings is : " << mean << " \n";

//sending to output file
outputFile << "Michelle Vera \n";
outputFile << "Student ID: 2272322 \n";
outputFile << "CPSC 350 Section 1 \n";
outputFile << "Rene German \n";
outputFile  << "The sum of the length of the DNA strings is : " << sum << " \n";
outputFile << "The mean of the length of the DNA strings is : " << mean << " \n";
outputFile.close();

}
//attempting to prepare a loop to ask the user to prompt another list
std::cout << "Would you like to enter another file? Please enter yes/no ";
string answer;
std::cin >> answer;

if(answer=="yes"){

  nextFile==true;
}
else{
  nextFile==false;
}


}
