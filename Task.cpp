#include "Task.h"
#include <fstream>
#include <iostream>


std::string Task::getContentFromFile(std::fstream &file) {
    std::string content;
    if (file.is_open()) {
        std::string line;
        while(getline(file, line)) {
            content += line + "\n";
        }
        file.close();

//        istreambuf_iterator<char> inputIt(file), emptyInputIt;
//        back_insert_iterator<string> stringInsert(content);
//
//        copy(inputIt, emptyInputIt, stringInsert);
//
//        cout << content << endl;
//        file.close();
    } else std::cout << "Unable to open description file" << std::endl;

    return content;
}

Task::Task(int number) {
    this->number = number;

    std::string descriptionsDirectory = "descriptions/";
    std::string solutionsDirectory = "solutions/";

    std::string descriptionFileName = descriptionsDirectory + std::to_string(number + 1) + ".txt";
    std::fstream descriptionFile(descriptionFileName, std::fstream::in);

    this->description = getContentFromFile(descriptionFile);

    std::string solutionFileName = solutionsDirectory + std::to_string(number + 1) + ".txt";
    std::fstream solutionFile(solutionFileName, std::fstream::in);

    this->solution = getContentFromFile(solutionFile);
}
