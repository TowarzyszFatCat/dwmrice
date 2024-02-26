//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {" ",   "/home/tfc/.src/scripts/dwmbs/vol",             5},
        {"",    "/home/tfc/.src/scripts/dwmbs/bri",             5},
	{"",	"/home/tfc/.src/scripts/dwmbs/temp",		5},
        {"",    "/home/tfc/.src/scripts/dwmbs/internet",        10},
	{"",	"/home/tfc/.src/scripts/dwmbs/nett",		1},
	{"",	"/home/tfc/.src/scripts/dwmbs/batt",		30},
	{"",	"/home/tfc/.src/scripts/dwmbs/clock",		5},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
