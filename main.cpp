#include <iostream>
#include "Task.h"


using namespace std;

int main(int argc, char** argv) {
//    ofstream f("data.txt", ios_base::app, ios::app);

    for (int taskNumber = 0; taskNumber < 8; taskNumber++) {
        auto task = new Task(taskNumber);
        cout << task->description << endl
             << task->solution << endl;
    }

    return 0;
}
