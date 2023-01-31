#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("info.txt");

  // Write to the file
  MyFile << "My Name is Abhsihek kumar Singh \nI am a Student at IIT Roorkee";

  // Close the file
  MyFile.close();
}