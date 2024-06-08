#include <iostream>
using namespace std;

// Algorithm:
/* 
    1. Creating c++ boilerplate (preprocessing command!)
    2. declearing while loop for the continuety of the code!
    3. declearing variables to store the values to from the user!
    4. prompting user to enter data
    5. Switch statement to watchdog operators
    6. conditions to check the values for division
    7. showing final result to user
*/

int main(){

    while (true){  

        double num1, num2, result;
        char op;

        cout<<endl; // endline for new calculation
        
        cout<<"Enter your 1st number: ";
        cin>> num1;

        cout<<"Choose a operator: + - * /" << endl;
        cin>>op;

        cout<<"Enter your 2nd number: ";
        cin>> num2;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
        break;
        case '*':
            result = num1 * num2;
        break;

        case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout<<"Error: Division is not possible with 0";
        }
        break;

        default:

        cout<< "Invalid operator"<< endl;
            return 1;
        }
        
        cout<< "Your answer is: "<< result << endl;
    }
}
// int main ()
// {
//     double num1, num2, result;
//     char op;

//     cout<<"Enter your 1st number: ";
//     cin>> num1;
//     cout<< "Pick a operator: + - * / " << endl;
//     cin>> op;
//     cout<<"Enter your 1st number: ";
//     cin >> num2;

//     switch (op)
//     {
//     case '+':
//         result = num1 + num2;
//         break;
//     case '-':
//         result = num1 - num2;
//         break;
//     case '*':
//         result = num1 * num2;
//         break;

//     case '/':
//     if (num2 != 0)
//     {
//         result = num1 / num2;
//     }
//     else
//     {
//         cout<< "Error: Divivsion by zero is not allowed " << endl;
//     }
//         break;

//     default:
//         cout<< "Invalid operator"<< endl;
        
//         return 1;
//     }

//     cout << "Your answer is: "<< result <<endl;
// }
