#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Establish Functions
int printOptions();
void playsGame();
int printOptions2();
int jackPlays(int user_selection2);
void scoreboard(int *wins, int *loses);

int main()
{
// Establish Variable
    int user_selection;
// Jack is a kid that wants to play rock, paper, scissors!
    printf("\nHi my name is Jack would you like to play rock, paper, scissors with me?\n");

    do
    {
        user_selection = printOptions();
        switch(user_selection)
        {
        case 0:
        {
//Jack says "Ok! Have a nice day then!" if user justs say no to him.
            printf("\n     Ok! Have a nice day then!\n");
            break;
        }
        case 1:
        {
// Jack asks "What will you first choose rock, paper, or scissors?" if you say yes to him.
            printf("\nOk! What will you first choose rock, paper, or scissors?\n\n");
            playsGame();
            exit(1);
        }
        case 2:
        {
            printf("\n\tWhen does a robot need training?\n\tWhenever it get rusty.\n\tHAHAHAHAHAHAHAHAHAHA\n\n");
            break;
        }
        case 3:
        {
            printf("\n Billy: What did the man say to his dead robot?\n Bob: What?\n Billy: Rust in peace.\n HAHAHAHAHAHA\n\n");
            break;
            ;
        }
        case 4:
        {
            printf("OK fine! I will ask someone else then!... jerk\n");
            exit(1);
        }
        default:
        {
            printf(" Invalid response entered: %d\n", user_selection);
        }
        }
    }
    while (user_selection != 0);
    return 0;
}
// Preconditions:   None
// Postconditions:  Returns user menu of options
// Actions:         Prints question and reads in and returns user input
int printOptions()
{
    int user_selection;
// Print the Menu of options
    printf("    Press 0 to say no\n");
    printf("    Press 1 to say yes\n");
    printf("    Press 2 to ask for a joke instead\n");
    printf("    Press 3 to ask for another joke\n");
    printf("    Press 4 to say NOOOOOOOO LEAVE ME ALONE\n\t\t");
    scanf("%d", &user_selection);
    return (user_selection);
}
// Preconditions:   None
// Postconditions:  None
// Actions:         Lets user play rock, paper, scissor with jack through a series of options
void playsGame()
{
    int user_selection2, jack_choose, wins = 0, loses = 0;
    do
    {
        user_selection2 = printOptions2();
        switch(user_selection2)
        {
        case 0:
        {
            printf(" I'm sorry you must leave...Have a nice day!\n");
            break;
        }
        case 1:
        {
            jack_choose = jackPlays(user_selection2);
            if(jack_choose == 1)
            {
                printf("\n My rock beats your scissors\n\n");
                loses++;
                scoreboard(wins, loses);
                break;
            }
            if(jack_choose == 0)
            {
                printf("\n I got scissors too I guess it's a tie\n\n");
                break;
            }
            if(jack_choose == 2)
            {
                printf("\n Your scissors beat my rock!!! I will beat you next time! You will see >:( \n\n");
                wins++;
                scoreboard(wins, loses);
                break;
            }
        }
        case 2:
        {
            jack_choose = jackPlays(user_selection2);
            if(jack_choose == 1)
            {
                printf("\n My scissors beats your paper\n\n");
                loses++;
                scoreboard(wins, loses);
                break;
            }
            if(jack_choose == 0)
            {
                printf("\n I got paper too ... I guess it's a tie\n\n");
                break;
            }
            if(jack_choose == 2)
            {
                printf("\n Your paper beat my rock!!! I'm so mad right now!! >:( \n\n");
                wins++;
                scoreboard(wins, loses);
                break;
            }
        }
        case 3:
        {
            jack_choose = jackPlays(user_selection2);
            if(jack_choose == 1)
            {
                printf("\n My paper beats your rock\n\n");
                loses++;
                scoreboard(wins, loses);
                break;
            }
            if(jack_choose == 0)
            {
                printf("\n I got rock too I guess it's a tie\n\n");
                break;
            }
            if(jack_choose == 2)
            {
                printf("\n Your rock beat my scissors!!! DARN it :( \n\n");
                wins++;
                scoreboard(wins, loses);
                break;
            }
        }
        default:
        {
            printf(" Invalid response entered: %d\n", user_selection2);
        }
        }
    }
    while (user_selection2 != 0);
}

// Preconditions:   None
// Postconditions:  Returns user menu of answers
// Actions:         Prints menu and reads in and returns user input
int printOptions2()
{
    int user_selection2;
// Print the Menu
    printf("    Press 0 to say I got to go kid\n");
    printf("    Press 1 to say Scissors\n");
    printf("    Press 2 to say Paper\n");
    printf("    Press 3 to say Rock\n\t\t");
    scanf("%d", &user_selection2);
    return (user_selection2);
}
// Preconditions:   Gets the user selection
// Postconditions:  Returns a random number
// Actions:         Makes up a random number
int jackPlays(user_selection2)
{
    int jack_choose;
    jack_choose = rand()%3;
    return jack_choose;
}
// Preconditions:   Gets Wins and Loses every time the user wins or loses a point
// Postconditions:  Returns user a scoreboard
// Actions:         prints a mini scoreboard every time the user wins or loses a point
void scoreboard(int *wins, int *loses)
{
    printf("The score board is now:\n");
    printf(" Me(Jack) - You\n");
    printf(" %d         %d\n\n",loses, wins);
}


