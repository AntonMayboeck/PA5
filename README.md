# For windows please run these commands (SNAKE DOES NOT WORK ON WINDOWS)
$ g++  -o game.exe game.cpp tictactoe2.cpp jumble.cpp
$ ./game.exe



# For mac please run these commands
$ brew install ncurses
$ g++ -lncurses -o game.exe game.cpp tictactoe2.cpp jumble.cpp snake.cpp
$ ./game.exe


-----KNOWN BUGS ------------------------

sadly our snake game relies on the ncurses.h library which we didn't seem to make run on windows but works completely fine on mac (as long as the ncurses library is downloaded through homebrew or otherwise)


