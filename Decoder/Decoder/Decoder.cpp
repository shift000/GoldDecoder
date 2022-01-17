// Decoder.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Mother.h"

int main()
{
    //init satellites
    vector<Mother> satellites;
    satellites.push_back(Mother(1, 2, 6, 5));
    satellites.push_back(Mother(2, 3, 7, 6));
    satellites.push_back(Mother(3, 4, 8, 7));
    satellites.push_back(Mother(4, 5, 9, 8));
    satellites.push_back(Mother(5, 1, 9, 17));
    satellites.push_back(Mother(6, 2, 10, 18));
    satellites.push_back(Mother(7, 1, 8, 139));
    satellites.push_back(Mother(8, 2, 9, 140));
    satellites.push_back(Mother(9, 3, 10, 141));
    satellites.push_back(Mother(10, 2, 3, 251));
    satellites.push_back(Mother(11, 3, 4, 252));
    satellites.push_back(Mother(12, 5, 6, 254));
    satellites.push_back(Mother(13, 6, 7, 255));
    satellites.push_back(Mother(14, 7, 8, 256));
    satellites.push_back(Mother(15, 8, 9, 257));
    satellites.push_back(Mother(16, 9, 10, 258));
    satellites.push_back(Mother(17, 1, 4, 469));
    satellites.push_back(Mother(18, 2, 5, 470));
    satellites.push_back(Mother(19, 3, 6, 471));
    satellites.push_back(Mother(20, 4, 7, 472));
    satellites.push_back(Mother(21, 5, 8, 473));
    satellites.push_back(Mother(22, 6, 9, 474));
    satellites.push_back(Mother(23, 1, 3, 509));
    satellites.push_back(Mother(24, 4, 6, 512));

    //start input
    string path;
    std::cin >> path;

    //read file with name from input
    //file needs to be inside the source data folder
    //current name is gps_sequence_1.txt
    string file_content;
    std::fstream sumsignal_file;
    sumsignal_file.open(path, ios::in); //open a file to perform read operation using file object
    if (sumsignal_file.is_open()) {   //checking whether the file is open
        getline(sumsignal_file, file_content);
        sumsignal_file.close();   //close the file object.
    }

    //split file content by ' ' and then convert the values to int
    std::stringstream values(file_content);
    string single_value;
    vector<int> converted_values;
    while (getline(values, single_value, ' ')) {
        converted_values.push_back(stoi(single_value));
    }
    cout << file_content << endl;
}
