#include <iostream>
#include <ncurses.h>

int main() {
    initscr();
    start_color();
    use_default_colors();
    for(int i = 0; i < COLORS; i++){
        init_pair(i,0,i);
        attron(COLOR_PAIR(i));
        printw("[%d]", i);
        attroff(COLOR_PAIR(i));
    }
    noecho();
    getch();
    getch();
    getch();
    endwin();
    return 0;
}
