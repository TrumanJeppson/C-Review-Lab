#include <iostream>
#include <fstream>
#include <string>
#include "TodoList.h"


using namespace std;

int main(int argc, char *argv[]) {
    TodoList myList;

    for(int i = 0; i < argc; i++) {
        cout << "argv[" << i << "] = " << argv[i] << endl;
    }

    string firstArg = argv[1];
    if (firstArg.compare("add") == 0) {
        cout << "Doing an add" << endl;
        string date = argv[2];
        string task = argv[3];
        cout << "date " << date << " task " << task << endl;

        myList.add(date, task);
    }
    else if (firstArg.compare("remove") == 0) {
        cout << "Doing a remove" << endl;
        string task = argv[2];
        cout << "task " << task << endl;

        myList.remove(task);
    }
    else if (firstArg.compare("printList") == 0) {
        cout << "Doing a printList" << endl;

        myList.printTodoList();
    }
    else if (firstArg.compare("printDay") == 0) {
        cout << "Doing a printDay" << endl;
        string date = argv[2];
        cout << "date to print " << date << endl;

        myList.printDaysTasks(date);

    }
    return 0;
}
