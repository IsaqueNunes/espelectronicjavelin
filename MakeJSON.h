#ifndef MAKEJSON_H
#define MAKEJSON_H

#include <string>
using namespace std;

class MakeJSON
{
private:
    string key;
    int value;

public:
    MakeJSON(string k, int v);

    string getJSON();
};

#endif // MAKEJSON_H
