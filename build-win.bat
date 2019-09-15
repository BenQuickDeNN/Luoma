echo "print g++ version"
g++ --version

echo "set path of main source files"
SET path_src=src
SET srcname_cli_main=cli_main.cpp

echo "set path of include files"
SET path_bin=bin/win
SET filename_luoma_cli=luoma_cli.exe

SET path_common_map=include/common/map
SET srcname_prov_map=province_map.cxx

SET path_history=include/history
SET srcname_prov_his=province_history.cxx

echo "execute compiler"
g++ %path_src%/%srcname_cli_main% -o %path_bin%/%filename_luoma_cli% -I %path_include% -std=c++11