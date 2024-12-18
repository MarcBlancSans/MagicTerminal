#include <iostream>
#include <notcurses/notcurses.h>

int main(int, char**){
    //notcurses_options* ncurses_opt;
    
    struct notcurses* notcurses = notcurses_init(NULL, stdout);
    
    if (!notcurses) {
        std::cout << "Failed To initialize NotCurses\n";
    }
    const char* ncurses_version = notcurses_version();
    std::cout << "NotCurses version: " << ncurses_version << '\n';
    notcurses_stop(notcurses);
    return 0;
}
