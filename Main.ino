#include <WiFi.h>

#include "Requests.h"

const char *ssid = "VIVO-271D";
const char *password = "63A12F271D";

const char *postRequestPath = "http://192.168.15.4:3000/values/post";

const int pinPotentiometer = 34;

void setup()
{

    Serial.begin(115200);
    delay(4000);

    // WiFi setup
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Connecting to WiFi..");
    }

    Serial.println("Connected to the WiFi network");
}

void loop()
{
    int potentiometerValue;
    potentiometerValue = analogRead(pinPotentiometer);
    Serial.println(potentiometerValue);

    if (WiFi.status() == WL_CONNECTED)
    {
        Requests::makePostRequest(postRequestPath, MakeJSON("value", potentiometerValue));
    }
    else
    {
        Serial.println("Error in WiFi connection");
    }

    delay(1000);
}
