#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writePersonalDetails(const string& fileName) {
    ofstream file(fileName);

    if (file.is_open()) {
        string name, address;
        int age;

        cout << "Enter your name: ";
        getline(cin >> ws, name);

        cout << "Enter your age: ";
        cin >> age;

        cout << "Enter your address: ";
        getline(cin >> ws, address);

        file << "Personal Details:" << endl;
        file << "Name: " << name << endl;
        file << "Age: " << age << endl;
        file << "Address: " << address << endl;

        file.close();
        cout << "Personal details written to " << fileName << endl;
    }
    else {
        cerr << "Unable to open the file." << endl;
    }
}

void writeProfessionalDetails(const string& fileName) {
    ofstream file(fileName);

    if (file.is_open()) {
        string job;
        int salary;

        cout << "Enter your job: ";
        getline(cin >> ws, job);

        cout << "Enter your salary: ";
        cin >> salary;

        file << "Professional Details:" << endl;
        file << "Job: " << job << endl;
        file << "Salary: " << salary << endl;

        file.close();
        cout << "Professional details written to " << fileName << endl;
    }
    else {
        cerr << "Unable to open the file." << endl;
    }
}

void displayFileContents(const string& fileName) {
    ifstream file(fileName);
    string line;

    if (file.is_open()) {
        cout << "Contents of " << fileName << ":" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
    else {
        cerr << "Unable to open the file." << endl;
    }
}

int main() {
    string personalFileName = "personal.txt";
    string professionalFileName = "professional.txt";

    writePersonalDetails(personalFileName);
    writeProfessionalDetails(professionalFileName);

    displayFileContents(personalFileName);
    cout << endl;
    displayFileContents(professionalFileName);

return 0;
}
