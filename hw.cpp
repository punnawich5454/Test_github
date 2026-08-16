#include <iostream>
using namespace std;
string cal_grade(int score);
int main(){
    int choice;
    do{
        cout << "Cal Grade Demo 1\n";
        cout << "1: test function\n";
        cout << "2: Input Score\n";
        cout << "3: Exit\n";
        cout << "Please Enter Your choice [1,2,3]:";
        cin >> choice;
        if(choice == 1){
            for(int i = -2 ;i <= 102 ;i++){
                if(i >=0 && i <= 100){
                cout << "Score = "<< i<< " = " << cal_grade(i) << "\t";
                if(i%5 == 0) cout << endl;
            }else{
                cout << "\nError Score "<< i <<" out of range\n";
            }
        }
        }
        if(choice == 2){
            int score;
            cout << "Enter Score :"; cin >> score;
            cal_grade(score);
            cout << "Score "<< score<< " = " << cal_grade(score) << "\n";
            cout << " \n";
            continue;
        }

        if(choice == 3){
            cout << "End Program\n";
             break;
            }

        else cout << "Try Again\n";
    }while(true);
    return 0;
    
}

string cal_grade(int score){
    string grade="F";
    if(score >= 90) grade ="A";
    else if(score >= 80) grade="B";
    return grade;
}