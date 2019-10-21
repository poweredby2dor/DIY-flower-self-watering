//
//  Automatizare de udat flori - Tudor Cernat
//

int releu1 = 2; // Pini pentru relee
int led = 4;


float interval = 86400; // definit in secunde 86400
float counter;
int deschis = 15; // cate secunde se va uda

//

//                                                                                                        VOID SETUP
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Initializare LED onboard
  pinMode(releu1, OUTPUT);
  pinMode(led, OUTPUT);

  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH); // Pornire LED Galben
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH); // Pornire LED Galben
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH); // Pornire LED Galben
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH); // Pornire LED Galben
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH); // Pornire LED Galben
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
  digitalWrite(LED_BUILTIN, HIGH); // Pornire LED Galben
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);

}

//                                                                                                        VOID LOOP
//  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//


void loop()
{
  if ( counter < deschis )
  {
    digitalWrite(releu1, HIGH); // Electrovalva
    digitalWrite(led, HIGH); // Led
  }
  else
  {
    digitalWrite(releu1, LOW); // Electrovalva
    digitalWrite(led, LOW); // Led

  }

  delay(1000);
  counter++;

  if ( counter > interval )
  {
    counter = 0;
  }
}
