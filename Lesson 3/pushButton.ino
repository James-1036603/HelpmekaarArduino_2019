//For the circuit in "Push button circuit.png"
//The Output LED pin
int LED = 7; //
//The pin where the button will be connected and the state of the button
int BUTTON = 13;
bool buttonState = 0;

// define is a way of associating a certain definition (word or numbers etc) to a value. It is safer than a global variable. Example of this would be to define PI as 3.14
#define ON 1
#define OFF 0


void setup()
{
    pinMode(LED, OUTPUT);   //Set the LED pin as an output
    pinMode(BUTTON, INPUT); //Set the BUTTON pin as input
}
void loop()
{
    buttonState = digitalRead(BUTTON); //Check the digital state of the button pin. This will be 1 on 5V and 0 on 0V
    if (buttonState == 1)
    {
        digitalWrite(LED, ON);
    }
    else if (buttonState == 0)
    {
        digitalWrite(LED, OFF);
    }
}