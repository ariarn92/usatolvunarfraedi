//
//  main.cpp
//  HW03
//  Author: Ari Arnaldsson

#include <iostream>
#include "list.h"
#include "loadfile.h"
#include "book.h"
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <iterator>

using namespace std;



//int main( int argc, const char * argv[] ) {
int main(){
    using namespace std;
    ifstream fin;
    fin.open("C:/Users/Ari/ClionProjects/HW03/data/test_subsets.tsv");
    if (fin.is_open() == false)
    {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) // while input is good
    {
        ++count;
        cout << count <<": " << item << endl;
        getline(fin, item,':');
    }
    cout << "Input size is now " << count << "\n";
    fin.close();
    return 0;

 /*     std::ifstream file("C:/Users/Ari/ClionProjects/HW03/data/test_subsets.tsv");
      std::string str;
      std::string file_contents;
      while (std::getline(file, str))
      {
        file_contents += str;
        file_contents.push_back('\n');
          while(file>>file_contents){
              cout << file_contents << ' ';
          }
      }

    return 0;*/


    /*ifstream file("C:/Users/Ari/ClionProjects/HW03/data/test_subsets.tsv");
    string content;

    while(file >> content) {
        cout << content << ' ';
    }
    return 0;*/


    /*    vector<string> input;
    ifstream readFile("C:/Users/Ari/ClionProjects/HW03/data/test_subsets.tsv");
    copy(istream_iterator<string>(readFile), {}, back_inserter(input));
    cout << "Vector Size is now " << input.size();*/
}