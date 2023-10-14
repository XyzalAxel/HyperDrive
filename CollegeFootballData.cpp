/*
    Team Hyperdrive

    PlutoHacks 2023

    App meant to determine what the most updated, accurate, and efficient data for the top 5 college football teams.
*/

#include<iostream>
#include<string>
#include<iomanip>
#include<chrono>
#include<thread>
using namespace std;

void wait(int seconds)
{
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
int main()
{
    // Variables
    string userName, gBr, mWr, oBr, fSr, oSr, gBMVP, mWMVP, oBMVP, fSMVP, oSMVP, playAgain;
    bool validChoice = false;
    int teamChosen, dataChoice, gBtP, mWtP, oBtP, fStP, oStP;

    // Contstants in order of Ranking, Total points, and Most Valuable Player
    gBr = "First";
    mWr = "Second";
    oBr = "Third";
    fSr = "Fourth";
    oSr = "Fifth";

    gBtP = 250;
    mWtP = 224;
    oBtP = 175;
    fStP = 212;
    oStP = 271;

    gBMVP = "Stetson Bennett";
    mWMVP = "J.J. McCarthy";
    oBMVP = "Denzel Burke";
    fSMVP = "Jordan Travis";
    oSMVP = "Dillon Gabriel";

    // Introduction to application and information
    cout << "Welcome to Team Hyperdrive's Application!\n" << endl;
    cout << "What is your name? ";
    cin >> userName;

    // Description of what our goal is as a team
    cout << "\nHi, " << userName << "!";
    wait(3);
    cout << "\nOur team values the importance of updated, accurate, and useful data regardless of what topic is given!" << endl;
    wait(5);
    cout << "\nCurrently, the college football scene has a variety of types of data, rankings, and scoring; however" << endl;
    cout << "something that is currently an issue is the multitude of websites that use different data and ranking systems." << endl;
    wait(10);
    cout << "\nOur goal as a team is to reach a point where all data is kept in one place where there is no need to search in multiple places." << endl;
    cout << "At this time, we currently only have the top five teams' data." << endl;
    wait(10);

    // Info on avalible teams
    do
    {
        bool validChoice = false;
        do
        {
            wait(3);
            cout << "\nHere are the teams you can choose from: \n1. Georgia Bulldogs \n2. Michigan Wolverines \n3. Ohio Buckeyes \n4. Florida Seminoles \n5. Oklahoma Sooners \nEnter your choice (Ex. 1): ";
            cin >> teamChosen;

        if (teamChosen >= 1 && teamChosen <= 5)
        {
            validChoice = true;
        }
        else 
        {
            cout << "\nInvalid Choice. Enter a number 1-5\n\n";
        }

        } while (!validChoice);

        // Begin using the if statements
        if (teamChosen == 1)
        {
            wait(3);
            cout << "\nYou chose the Georgia Bulldogs\n" << endl;
            wait(3);
            cout << "Within all the options given: \n1. Ranking \n2. Total Points \n3. MVP \nWhich would you like to know about (Ex. 1)? ";
            cin >> dataChoice;

            if (dataChoice == 1)
            {
                cout << "\nGeorgia Bulldogs' current ranking is: " << gBr << endl;
            }
            else if(dataChoice == 2)
            {
                cout << "\nGeorgia Bulldogs' current total points are: " << gBtP << endl;
            }
            else if(dataChoice == 3)
            {
                cout << "\nGeorgia Bulldogs' current MVP is: " << gBMVP << endl;
            }
        }
        else if (teamChosen == 2)
        {
            wait(3);
            cout << "\nYou chose the Michigan Wolverines\n" << endl;
            wait(3);
            cout << "Within all the options given: \n1. Ranking \n2. Total Points \n3. MVP \nWhich would you like to know about (Ex. 1)? ";
            cin >> dataChoice;

            if (dataChoice == 1)
            {
                cout << "\nMichigan Wolverines' current ranking is: " << mWr << endl;
            }
            else if(dataChoice == 2)
            {
                cout << "\nMichigan Wolverines' current total points are: " << mWtP << endl;
            }
            else if(dataChoice == 3)
            {
                cout << "\nMichigan Wolverines' current MVP is: " << mWMVP << endl;
            }
        }
        else if (teamChosen == 3)
        {
            wait(3);
            cout << "\nYou chose the Ohio Buckeyes\n" << endl;
            wait(3);
            cout << "Within all the options given: \n1. Ranking \n2. Total Points \n3. MVP \nWhich would you like to know about (Ex. 1)? ";
            cin >> dataChoice;

            if (dataChoice == 1)
            {
                cout << "\nOhio Buckeyes' current ranking is: " << oBr << endl;
            }
            else if(dataChoice == 2)
            {
                cout << "\nOhio Buckeyes' current total points are: " << oBtP << endl;
            }
            else if(dataChoice == 3)
            {
                cout << "\nOhio Buckeyes' current MVP is: " << oBMVP << endl;
            }
        }
        else if (teamChosen == 4)
        {
            wait(3);
            cout << "\nYou chose the Florida Seminoles\n" << endl;
            wait(3);
            cout << "Within all the options given: \n1. Ranking \n2. Total Points \n3. MVP \nWhich would you like to know about (Ex. 1)? ";
            cin >> dataChoice;

            if (dataChoice == 1)
            {
                cout << "\nFlorida Seminoles' current ranking is: " << fSr << endl;
            }
            else if(dataChoice == 2)
            {
                cout << "\nFlorida Seminoles' current total points are: " << fStP << endl;
            }
            else if(dataChoice == 3)
            {
                cout << "\nFlorida Seminoles' current MVP is: " << fSMVP << endl;
            }
        }
        else if (teamChosen == 5)
        {
            wait(3);
            cout << "\nYou chose the Oklahoma Sooners\n" << endl;
            wait(3);
            cout << "Within all the options given: \n1. Ranking \n2. Total Points \n3. MVP \nWhich would you like to know about (Ex. 1)? ";
            cin >> dataChoice;

            if (dataChoice == 1)
            {
                cout << "\nOklahoma Sooners' current ranking is: " << oSr << endl;
            }
            else if(dataChoice == 2)
            {
                cout << "\nOklahoma Sooners' current total points are: " << oStP << endl;
            }
            else if(dataChoice == 3)
            {
                cout << "\nOklahoma Sooners' current MVP is: " << oSMVP << endl;
            }
        }
        wait(3);
        cout << "\nDo you want to play again (Yes/No)? ";
        cin >> playAgain;
    } while (playAgain == "Yes" || playAgain == "yes");
    
    // Outro
    cout << "\nThank you for using our application. Goodbye!" << endl;
    return 0;
}