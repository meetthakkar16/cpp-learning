#include <iostream>

using namespace std; 

int main() {
    char initial;
    int age;
    float height;
    
    cout << "Please enter you age" << endl; //endl is used to end the line so that the cursor goes to the next line
    cin >> age;
    cout << "Please enter you initial" << endl; 
    cin >> initial;
    cout << "Please enter you height" << endl;
    cin >> height;

    cout << "Hi! " << initial << " of " << age << " age and " << height << "m height. "; 

    return 0;

}

// this program takes input of height age and initial and prints it