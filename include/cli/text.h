#include <string>
using namespace std;

///* define */
#define MAX_NUM_OPTION 2
#define MAX_LEN_OPTION 1
#define MAX_NUM_TEXT 3

///* variables */
/* options list */
const string option_list[MAX_NUM_OPTION][MAX_LEN_OPTION] = \
{
	{"--help"},
	{ "--version" }
};
/* output text */
const string outputText_list[MAX_NUM_TEXT] = \
{
	"\
Usage: Luoma_cli.exe [options] path...\r\n\
Options:\r\n\
  --help\tDisplay this information.\r\n\
  --version\tDisplay version.\r\n\
	",

	"\
Luoma - an Europa Universalis IV Mod Editor\r\n\
Copyright(C) 2019 Bin.Qu benquickdenn@foxmail.com\r\n\
Version alpha 1.0\r\n\
	",

	"Invalid options!\r\n"
};