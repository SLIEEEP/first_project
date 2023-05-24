#include<iostream>

void executor(){
    using namespace std;
    int amount;
    int expense;
    int confirmation;
    int expenseamt;
    int totalexpense;
    cout << "Enter 1 to run the program and any other keys to exit.\n";
    cin >> expense;
    while(expense == 1){
        cout << "Enter 0 to enter expense and any other keys to exit.\n";
        cin >> confirmation;
        if(confirmation == 0){
            cout << "Enter amount: ";
            cin >> amount;
            totalexpense += amount;
        }
        else{
            break;
        }
        
    }
    cout << "Press 2 to see your current expense and 3 to erase your expense. ";
    cin >> expenseamt;
    if(expenseamt == 2){
        cout << "Your current expense is: " << totalexpense;
    }
    else{
        totalexpense = 0;
        cout << "Your new expense is: " << totalexpense;
    }

}
int main(){
    executor();

    return 0;
}







