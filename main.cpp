#include <iostream>
#include <fstream>
#include <string>
#include<vector>
using namespace std;

void readLines(){

    
}

void showLines(const vector<string>& vec){
for (const auto& str : vec) {
    cout << str << endl;   
}

void linesOut(){
    ofstream out2("2.txt");
    string str1 = out1.str();
    out2.write(str1.c_str(), str.size());
    out2.close();
    return 0;  
}


int main()
{
    cout << "Hello world!" << endl;
    readLines();
    showLines();
    linesOut();    
    return 0;
}
