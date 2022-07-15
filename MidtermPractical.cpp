// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool isOn = true;

    while (isOn)
    {
        cout << "What is your favorite color?" << endl;
        cout << "1. blue (this is right)" << endl << "2. Red" << endl << "3. Black" << endl << "4. purple" << endl;
        int points = 0;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "congratulations! you got it!" << endl;
            isOn = true;
            points++;
            break;
        case 2:
            cout << "WRONG!" << endl;
            isOn = true;
            break;
        case 3:
            cout << "Wrong!!!" << endl;
            isOn = true;
            break;
        case 4:
            cout << "INCORRECT" << endl;
            isOn = true;
            break;

        }
        cout << "Now what is your favorite food?" << endl;
        cout << "1. Pizza(EW)" << endl << "2. Tacos (meh)" << endl << "3. A Healthy diet (really?)" << endl << "4. Whatever im craving (thats more like it)" << endl;

        int choice2;
        cin >> choice2;
        switch (choice2)
        {
        case 1:
            cout << "thats GROSS" << endl;
            isOn = true;
            break;
        case 2:
            cout << "good choice but still wrong" << endl;
            isOn = true;
            break;
        case 3:
            cout << ".... no comment." << endl;
            isOn = true;
            break;
        case 4:
            cout << "feels good to not conform to one thing huh??" << endl;
            isOn = true;
            points++;
            break;
        }

        cout << "Who is your favorite student in the class?" << endl;
        cout << "1. Adalberto" << endl << "2. Agustin" << endl << "3. Martin" << endl << "4. Jesse(ME)" << endl;

        int choice3;
        cin >> choice3;
        switch (choice3)
        {
        case 1:
            cout << "NOPE" << endl;
            isOn = true;
            break;
        case 2:
            cout << "REAAAALLY??" << endl;
            isOn = true;
            break;
        case 3:
            cout << "The answer should be obvious..." << endl;
            isOn = true;
            break;
        case 4:
            cout << "I would be very upset if you got this wrong." << endl;
            isOn = true;
            points++;
            break;
        }
        cout << "What is the meaning of life?" << endl;
        cout << "1. there is no meaning" << endl << "2. 42" << endl << "3. some wrong answer" << endl << "4. Another wrong answer" << endl;

        int choice4;
        cin >> choice4;
        switch (choice4)
        {
        case 1:
            cout << "Wow youre negative.." << endl;
            isOn = false;
            system("CLS");
            break;
        case 2:
            cout << "Boom! you got it!" << endl;
            isOn = false;
            points++;
            system("CLS");
            break;
        case 3:
            cout << "I practically gave you the answer..." << endl;
            isOn = false;
            system("CLS");
            break;
        case 4:
            cout << "PLEASE IT LITERALLY SAYS WRONG ANSWER" << endl;
            isOn = false;
            system("CLS");
            break;
            
        }
        if (points == 1)
        {
            cout << "25%" << endl;
        }
        else if (points == 2)
        {
            cout << "50%" << endl;
        }
        else if (points == 3)
        {
            cout << "75% SO CLOSE" << endl;
        }
        else if (points == 4)
        {
            cout << "100% ! GOOD JOB!" << endl;
        }
        else
        {
            cout << "You really bombed the easiest test of your life!" << endl;
        }
        //side note that this is probably completely off from what you wanted but my head went 
        //completely blank as I entered the room so I am sorry in advance.
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
