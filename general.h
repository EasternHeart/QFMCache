#ifndef GENERAL_H
#define GENERAL_H

#include <string>

#define EXTGENHEA(ext) int conv_##ext(string arg1,string arg2)

using namespace std;

EXTGENHEA(doc);

#endif // GENERAL_H
