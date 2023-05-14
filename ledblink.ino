#define BLYNK_TEMPLATE_ID "TMPL364NJFVHY"
#define BLYNK_TEMPLATE_NAME "nodemcu"
#define BLYNK_AUTH_TOKEN "kum8-nZp7ntlsx7mcuPOKdWbRhCtEDG9"

/*New blynk app project
   Home Page
*/

//Include the library files
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "kum8-nZp7ntlsx7mcuPOKdWbRhCtEDG9" //Enter your blynk auth token

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "This is my internet";//Enter your WIFI name
char pass[] = "engineering_uyir";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D4, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D4, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}

