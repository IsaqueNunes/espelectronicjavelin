#include "MakeJSON.h"

#include <string>
using namespace std;

MakeJSON::MakeJSON(string k, int v)
{
    key = k;
    value = v;
}

string MakeJSON::getJSON()
{
    return "{\"" + key + "\": " + to_string(value) + "}";
}
