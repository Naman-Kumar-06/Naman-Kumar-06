#include <iostream>
using namespace std;

class Student {
    int scores[5]; // Array to store 5 exam scores

public:
    // Method to input scores
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    // Method to calculate total score
    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n; 
    cout<<"Enter number of students:"<<endl;
    cin >> n;

    Student students[n]; 
    cout<<"Enter number of  anna:"<<endl;
    students[0].input(); 

    int annaTotalScore = students[0].calculateTotalScore(); 
    cout<<"Total score of anna"<<annaTotalScore<<endl;

    int count = 0; 

    
    for (int i = 1; i < n; i++) {
        cout<<"Enter number of "<<i+1<<"student"<<endl;
        students[i].input();
        if (students[i].calculateTotalScore() > annaTotalScore) {
            count++; 
        }
    }
    cout<<"Number of students having number greater than anna"<<endl;
    cout << count << endl;

    return 0;
}
