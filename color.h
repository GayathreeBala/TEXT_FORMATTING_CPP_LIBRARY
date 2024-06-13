#ifndef COLOR_H
#define COLOR_H
using namespace std;
#include<string>
namespace text_format {
    const string RESET = "\033[0m";

    const string BLACK = "\033[30m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[36m";
    const string WHITE = "\033[37m";

    const string BOLD_BLACK = "\033[1;30m";
    const string BOLD_RED = "\033[1;31m";
    const string BOLD_GREEN = "\033[1;32m";
    const string BOLD_YELLOW = "\033[1;33m";
    const string BOLD_BLUE = "\033[1;34m";
    const string BOLD_MAGENTA = "\033[1;35m";
    const string BOLD_CYAN = "\033[1;36m";
    const string BOLD_WHITE = "\033[1;37m";
}
#endif 