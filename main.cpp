#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


vector<string> readLines(string& filename) {
  vector<string> lines;
  std::ifstream inputFile(filename);

  if (inputFile.is_open()) {
    std::string line;
    while (std::getline(inputFile, line)) {
      lines.push_back(line);
    }
    inputFile.close();
  } 

  return lines;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
