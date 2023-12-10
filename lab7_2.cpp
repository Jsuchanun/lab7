#include <iostream>
using namespace std;

int main() {
    string name, movie, freeday, messages, studentID;
    

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    cin >> name;

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n";

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n";
    cout << name << ": ";
    cin >> studentID;

    int GEAR = stoi(studentID.substr(0, 2)) - 12;  

    cout << "Fahsai: I think you may be GEAR " << GEAR << ". I have a free movie ticket for you." << "\n";
    cout << "Fahsai: Let's go to the cinema together!!!" << "\n";

    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    cin >> movie;

    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    cin >> freeday;

    cout << "Fahsai: " << freeday << "....that is OK!!! I'm looking forward to watching\n" << movie << " with you.\n";
    cout << name << ": ";
    cin >> messages;

    cout << "Fahsai: 555+ see you " << freeday << ". Bye Bye \(^ ^)/";

    return 0;

    } 
