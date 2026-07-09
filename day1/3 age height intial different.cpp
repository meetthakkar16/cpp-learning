#include <iostream> 

using namespace std;

int main() {
    int age;
    cout << "what is your age? ";
    cin >> age; // here instead of (<<) (>>) is used
    cout << "Hi, your age is --> " << age; // here to add multiple variables or string use << again

    return 0;
}

// this program asks the user for his age and prints it but int is used


#include <iostream> 

using namespace std;

int main() {
    float height; 
    cin >> height;
    cout << "so your height is " << height << "meters";  
    return 0;
}

// this program ask the user for their height and prints it but float is used


#include <iostream> 

using namespace std;

int main() {
    char initial;
    cin >> initial;
    cout << "Initial letter of your name is " << initial;
    
    return 0;
}