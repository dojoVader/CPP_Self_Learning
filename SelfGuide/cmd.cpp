#include <iostream>
using namespace std;
int main(int argc, char **argv) {
    std::cout << "Welcome to KDE Self learn Fast Track Application" << std::endl;
    //We will print the number of arguments
    cout<< "Number of Arguments:"<< argc << endl;
    for(int i=0; i < argc; i++){
        cout << "Argument at ["<<i<<"] is ("<< argv[i] <<")"<< endl;
    }
    return 0;
}
