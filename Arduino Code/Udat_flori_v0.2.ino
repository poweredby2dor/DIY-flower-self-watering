//
//  Automatizare de udat flori
//  Flower self watering system
//  Tudor Cernat
//

int releu1 = 2; // Pini pentru relee
int led = 4;


float interval = 4320; // definit in minute
int counter;
int deschis = 5; // cate secunde se va uda
int minuter = 0;

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
  if ( minuter == 0 && counter == 0 )
  {
    digitalWrite(releu1, HIGH); // Electrovalva
    digitalWrite(led, HIGH); // Led
    delay(deschis*1000);

    counter = deschis;

  }
  else
  {
    digitalWrite(releu1, LOW); // Electrovalva
    digitalWrite(led, LOW); // Led

    if ( counter % 5 == 0 )
    {
      digitalWrite(led, HIGH); // Led aprins
    }
    else
    {
      digitalWrite(led, LOW); // Led stins
    }

  }

  
  delay(1000);
  counter++;

  if ( counter >= 60 )
  {
    minuter++;
    counter = 0;
  }

  if ( minuter >= interval )
  {
    minuter = 0;
  }
}
