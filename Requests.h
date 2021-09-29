#ifndef REQUESTS_H
#define REQUESTS_H

#include "MakeJSON.h"

class Requests
{
private:
    char *postRequestPath;

public:
    static void makePostRequest(String path, MakeJSON json);
};

#endif // REQUESTS_H
