echo "print g++ version"
g++ --version

echo "set path of main source files"
SET path_src=src
SET srcname_cli_main=CLI_main.cpp
SET srcname_gui_main=GUI_main.cpp

echo "set path of include files"
SET path_bin=bin/win
SET filename_luoma_cli=luoma_cli.exe
SET filename_luoma_gui=luoma_gui.exe

SET path_include=include

SET path_lib=lib

echo "execute compiler"
g++ %path_src%/%srcname_cli_main% -o %path_bin%/%filename_luoma_cli% -I %path_include% -std=c++11