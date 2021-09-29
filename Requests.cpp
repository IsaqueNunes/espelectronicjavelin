#include <HTTPClient.h>
#include <string>

#include "Requests.h"
#include "MakeJSON.h"

void Requests::makePostRequest(String postRequestPath, MakeJSON json)
{
    HTTPClient http;

    String httpRequestData;
    int httpResponseCode;

    http.begin(postRequestPath);
    http.addHeader("Content-Type", "application/json");

    httpResponseCode = http.POST(json.getJSON().c_str());

    if (httpResponseCode > 0)
    {
        String response = http.getString();

        Serial.println(httpResponseCode);
        Serial.println(response);
    }
    else
    {
        Serial.print("Error on sending POST: ");
        Serial.println(httpResponseCode);
    }

    http.end();
}
