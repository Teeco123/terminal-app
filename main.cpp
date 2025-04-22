#include <ncurses.h>

int main() {
  initscr();   // Start ncurses mode
  noecho();    // Don't echo typed characters
  cbreak();    // Disable line buffering
  curs_set(0); // Hide cursor

  int height, width;
  getmaxyx(stdscr, height, width); // Get terminal size

  // Print a message in the center
  mvprintw(height / 2, (width - 19) / 2, "Press 'q' to quit");

  refresh(); // Update the screen

  // Wait for user input
  while (getch() != 'q') {
    // You could update/redraw the screen here
  }

  endwin(); // Restore normal terminal behavior
  return 0;
}
