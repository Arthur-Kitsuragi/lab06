#include "formatter.h"

std::string formatter(const std::string& message)
{ //ccc
    std::string res;
    res += "-------------------------\n";
    res += message + "\n";
    res += "-------------------------\n";
    return res;
}
