#include "my.hpp"

int main(int ac, char **av) {
    std::string city;
    Tile *tile = new Tile(0, 0);

    std::cout << "hello office word, name your city" << std::endl;
    while (city.length() <= 0)
        std::cin >> city;
    std::cout << "You just built " << city << std::endl;

    initscr();                  /* Start curses mode                */
    printw(city.c_str());       /* Print Hello World                */
    refresh();                  /* Print it on to the real screen   */
    getch();                    /* Wait for user input              */
    endwin();                   /* Close the window                 */
    
    return 0;
}