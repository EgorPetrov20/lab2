#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;



vector<string> readLines(string& filename) {
  vector<string> lines;
  ifstream inputFile("1.txt");

  if (inputFile.is_open()) {
    string line;
    while (getline(inputFile, line)) {
      lines.push_back(line);
    }

  }

  return lines;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
