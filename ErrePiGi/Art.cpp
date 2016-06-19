#include <iostream>
#include <string>
#include "Functions.h"
#include "Colours.h"

using namespace std;

void printLandscape()
{
	consoleColoursInit();
	cout << white << "   +  *   +  *" << yellow << " /|" << white << " +   *      *      " << endl;
	cout << "   *   +    + " << yellow << " ||" << white << "    *    *   +  *   " << endl;
	cout << " +   *    *  +" << yellow << " \\|" << white << "*     +   +   *    " << endl;
	cout << "                                      " << endl;
	cout << green << "_____\\|/_____\\|/________\\|/________" << dark_white << endl;
	cout << "\nIn this place you found nothig" << endl;
}

void printDagger()
{
	consoleColoursInit();
	cout << endl;
	cout << gray << "      |\n";
	cout << gray << "     _|_\n";
	cout << dark_yellow << "      I" << dark_white << endl;
}

void printShortSword()
{
	consoleColoursInit();
	cout << endl;
	cout << gray << "      /\\\n";
	cout << gray << "      ||\n";
	cout << gray << "      ||\n";
	cout << dark_yellow << "     _" << gray << "||" << dark_yellow << "_\n";
	cout << dark_yellow << "      II\n";
	cout << dark_yellow << "      II\n";
	cout << dark_yellow << "      ()" << dark_white << endl;
}

void printLongSword()
{
	consoleColoursInit();
	cout << endl;
	cout << endl;
	cout << gray << "      /\\\n";
	cout << gray << "      ||\n";
	cout << gray << "      ||\n";
	cout << gray << "      ||\n";
	cout << gray << "      ||\n";
	cout << dark_yellow << "    |_||_|\n";
	cout << dark_yellow << "      II\n";
	cout << dark_yellow << "      II\n";
	cout << aqua << "      ()" << dark_white << endl;
}

void printTwoHandedAxe()
{
	consoleColoursInit();
	cout << endl;
	cout << gray << "    , /\\  .\n";
	cout << gray << "  //`-" << dark_yellow << "||" << gray << "-'\\\\\n ";
	cout << gray << "(| -=" << dark_yellow << "||" << gray << "=- |)\n";
	cout << gray << "  \\\\,-" << dark_yellow << "||" << gray << "-.//\n ";
	cout << "   " << gray << "`" << dark_yellow << " || " << gray << "'\n ";
	cout << dark_yellow << "     ||\n";
	cout << dark_yellow << "      ||\n";
	cout << dark_yellow << "      ||\n";
	cout << dark_yellow << "      ||\n";
	cout << dark_yellow << "      ||\n";
	cout << gray << "      ()" << dark_white << endl;
}

void printDragonSlayerSword()
{
	consoleColoursInit();
	cout << endl;
	cout << yellow << "         ()\n";
	cout << yellow << "       __)(__\n";
	cout << "       '-" << aqua << "<>" << yellow << "-'\n";
	cout << yellow << "         )(  \n";
	cout << white << "         || \n";
	cout << "         ||\n";
	cout << "	 ||\n";
	cout << "	 ||\n";
	cout << "	 ||\n";
	cout << "	 ||\n";
	cout << "	 ||\n";
	cout << "	 ||\n";
	cout << "	 \\/" << dark_white << endl;
}

void printGoblin()
{
	consoleColoursInit();
	cout << endl;
	cout << white << "       ,      ,        \n";
	cout << "      /(" << green << ".-\"\"-." << white << ")\\       \n";
	cout << green << "  |\\  " << white << "\\/      \\/" << green << "  /|   \n";
	cout << "  | \\ / =.  .= \ / |   \n";
	cout << "  \\( \\   " << red << "o" << green << "\\/" << red << "o" << green << "   / )/   \n";
	cout << "   \\_, '-/  \\-' ,_/    \n";
	cout << "     /   \\__/   \\      \n";
	cout << "     \\ \\__/\\__/ /      \n";
	cout << "  " << dark_aqua << " ___" << green << "\\ " << white << "\\|--|/" << green << " /" << dark_aqua<< "___    \n";
	cout << " /`    " << green << "\\      /" << dark_aqua << "    `\\  \n";
	cout << "/       " << green << "'----'" << dark_aqua << "       \\ " << dark_white << endl;
}

void printOrk()
{
	consoleColoursInit();
	cout << endl;
	cout << dark_green << "     _..-======-.._     \n";
	cout << "   .-              -.    \n";
	cout << "  /.=._          _.=.\\   \n";
	cout << " /     =-.    .-=     \\  \n";
	cout << "|   " << dark_purple << ",\"=\"'."<<dark_green<<"\\  /" <<dark_purple << ",\"=\"'." << dark_green << "   | \n";
	cout << " |  " << dark_purple << "'.--.'" << dark_green << "|!!|" << dark_purple << "'.--.'" << dark_green << "  |  \n";
	cout << "  '.      )!!(      .'   \n";
	cout << "   \".    /-!!-\\    .\"    \n";
	cout << "   |'.   \\U::U/   .'|    \n";
	cout << "   \\ /\\_.-====-._/\\ /    \n";
	cout << "    ||" << gray << "  \\/\\/\\/\\/ " << dark_green<< " ||     \n";
	cout << "     \\" << gray << "\\/\\/\\/\\/\\/\\" << dark_green << "//      \n";
	cout << "      \\.=-.__.-=./       " << dark_white << endl;;
}

void printTroll()
{
	consoleColoursInit();
	cout << endl;
	cout << dark_green << "             .:\\:/:.\n";
	cout << "           .:\\:\\:/:/:.\n";
	cout << "          :.:\\:\\:/:/:.:\n";
	cout << "         :=.' -   - '.=:\n";
	cout << green << "         '=(\\ " << purple << "9   9" << green << " /)='\n";
	cout << "              ((_))\n";
	cout << "           / `" << white << "-vvv-" << green << " '\\" << dark_white << endl;
}

void printDragon()
{
	consoleColoursInit();
	cout << endl;
	cout << dark_red << "      .==.        .==.\n";
	cout << "     //`" << red << "^" << dark_red << "\\\\      //" << red << "^" << dark_red << "`\\\\\n";
	cout << "    //" << red << " ^ ^" << dark_red << "\\(\\__/)/" << red << "^ ^^" << dark_red << "\\\\\n";
	cout << "   //" << red << "^ ^^ ^" << dark_red << "/" << aqua << "6  6" << dark_red << "\\" << red << " ^^ ^^" << dark_red << "\\\\\n";
	cout << "  //" << red << "^ ^^ ^" << dark_red << " ( .. ) " << red << "^ ^^^" << dark_red << " \\\\\n";
	cout << " //" << red << " ^^ ^" << dark_red << "/\\//" << white << "v\"\"v" << dark_red << "\\\\/\\" << red << "^ ^ ^" << dark_red << "\\\\\n";
	cout << "//" << red << " ^^" << dark_red << "/\\/  /" << white << " `~~`" << dark_red << " \\  \\/\\" << red << "^ ^" << dark_red << "\\\\\n";
	cout << "\\\\" << red << "^" << dark_red << " /    / ,    , \\    \\" << red << "^" << dark_red << " //\n";
	cout << " \\\\/    ( (      ) )    \\//\n";
	cout << "  " << white << "^" << dark_red << "      \\ \\.__./ /      " << white << "^\n";
	cout << "         (((`  ')))" << dark_white << endl;
}
