/* This sketch will be used to create a cycle where three lights turn
on in sequence and the Serial monitor displays the status of those 
lights. */

// Initialize variables

int x = 1;

void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode (2, OUTPUT);
    pinMode (3, OUTPUT);
    pinMode (4, OUTPUT);
    
    while (x <=3 ) {
        // Display the cycle number in the Serial Monitor
        Serial.print("Cycle no ");
        Serial.println(x);
        
        // Turn on each LED in sequence
        digitalWrite ((x + 7), HIGH);
        Serial.print("LED");
        Serial.print(x+1):
        Serial.println(" is ON");
        
        delay (2000)

            digitalWrite(x+1,LOW)
        x = x + 1;
    }
}

void loop()
{

}
