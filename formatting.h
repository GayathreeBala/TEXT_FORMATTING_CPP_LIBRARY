// formatting.h
#ifndef FORMATTING_H
#define FORMATTING_H

#include <string>

using namespace std;

namespace text_format {

    const string BOLD = "\033[1m";
    const string UNDERLINE = "\033[4m";
    const string STRIKETHROUGH = "\033[9m";
    const string SUPERSCRIPT = "\033[sup]";
    const string SUBSCRIPT = "\033[sub]";
    // const string RESET = "\033[0m"; // Added RESET constant

    string applyFormat(const string& text, const string& formatCode) {
        return formatCode + text + RESET;
    }

    template<typename T>
    string chainFormat(const string& text, T formatCode) {
        return formatCode + text + RESET;
    }

    template<typename T, typename... Args>
    string chainFormat(const string& text, T formatCode, Args... args) {
        return chainFormat(formatCode + text + RESET, args...);
    }
}

#endif // FORMATTING_H
