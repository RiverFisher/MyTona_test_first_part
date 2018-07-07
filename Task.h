#ifndef MYTONATEST_TASK_H
#define MYTONATEST_TASK_H

#include <string>

struct Task {
    int number;

    std::string description;

    std::string solution;

    explicit Task(int number);

    std::string getContentFromFile(std::fstream &);
};

#endif //MYTONATEST_TASK_H
