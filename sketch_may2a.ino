#define BLYNK_TEMPLATE_ID "TMPL364NJFVHY"
#define BLYNK_TEMPLATE_NAME "nodemcu"
#define BLYNK_AUTH_TOKEN "kum8-nZp7ntlsx7mcuPOKdWbRhCtEDG9"


void setup() {
  // put your setup code here, to run once:
  pinMode(D2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(D2,HIGH);
delay(1000);
digitalWrite(D2,LOW);
delay(1000);
}
