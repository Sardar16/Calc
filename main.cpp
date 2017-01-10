#include <iostream>
using namespace std;
int main()
{
    int userDecision = 1;
    int choiceNumber1 = 1;  //1 This is the First option variable.
    int choiceNumber2 = 2;  // This is the Second option variable.
    int choiceNumber3 = 3;  // This is the Third option variable.
    int choiceNumber4 = 4;  // This is the Fourth option variable.
  //int choiceNumber5 = 5;  // This is the Fifth option variable.
    int usrInput1;          // This variable is for the user input.
    int usrInput, usrNext_Input;
    int result;

    cout <<"\n";
    cout << "Which Operator do you want to use ?\n";
    cout << "Remember: You don't need to enter the oprators, you just enter the number.\n";
    cout << "\n";

    cout << "0) Quit Application.\n";
    cout << "1) Addition: +\n";
    cout << "2) Subtract: -\n";
    cout << "3) Multiply: *\n";
    cout << "4) Divide:   /\n";
//  cout << "5) Multiply By: \n";
    cin >> usrInput1;
    cout << "";

    while(userDecision != 2){
    if(usrInput1 == choiceNumber1){
        cout << "Enter the number that want to add with: ";
        cin >> usrInput;

        cout << "Enter the next number: ";
        cin >> usrNext_Input;

        result = usrInput + usrNext_Input;

        cout << "Here's your answer: ";
        cout << result <<endl;

        /*
        I was going to create a variable which would take the input from the
        User and then add to the next input which
        */
    }
    if(choiceNumber2 == usrInput1){
        cout << "Enter the number that want to subtract with: ";
        cin >> usrInput;

        cout << "Enter the next number: ";
        cin >> usrNext_Input;

        result = usrInput - usrNext_Input; // Here we are doing addition.

        cout << "Here's your answer: ";
        cout << result <<endl;
    }
    if(choiceNumber3 == usrInput1){
        cout << "Enter the number that want to multiply with: ";
        cin >> usrInput;

        cout << "Enter the next number: ";
        cin >> usrNext_Input;

        result = usrInput * usrNext_Input; // Here we are doing subtraction.

        cout << "Here's your answer: ";
        cout << result <<endl;
    }
    if(choiceNumber4 == usrInput1){
        cout << "Enter the number that want to divide with: ";
        cin >> usrInput;

        cout << "Enter the next number: ";
        cin >> usrNext_Input;

        result = usrInput / usrNext_Input; // Here we are doing subtraction.

        cout << "Here's your answer: ";
        cout << result <<endl;
    }
    /*
    if (choiceNumber5 == usrInput1)
    {
        cout << "Enter the number: ";
        cin >> usrInput;

        cout << "Enter the times you want to multiply the number: ";
        cin >> usrNext_Input;

        result = usr Input * usrNext_Input;

        cout << "Here's your answer: ";
        cout << result <<endl;
    }
    */
    if (usrInput1 < 1 || usrInput1 > 5) // This option is for the quiting the application.
    {
        return 0;
    }
}
}
// Fifth Operator is going to be the next up coming feature of this application.
