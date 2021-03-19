#include <iostream>
#include <ncurses.h>

int main()
{
    // initialises a screen and clears it
    // allocates memory
    initscr();
    // Disables line buffering
    raw();
    // Enables the user to use F, arrow, and pad keys.
    keypad(stdscr, TRUE);
    // Don't echo the input (no idea what it means though)
    noecho();

    // Prints a string to the screen
    printw("Enter a key!\n\n");

    // Refreshes the screen to show new screen
    refresh();

    // Waits for user input, returns the key in int form
    int input = getch();


    printw("\nYou entered\nCharacter: %c\nChar Val: %d\n", input, input);
    refresh();
    getch(); // so the user gets to see the output
    // stops ncurses screen
    // deallocates its memory
    endwin();

    return 0;
}
