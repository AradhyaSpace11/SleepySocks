# SleepySocks
# Code for the SleepySocks project has now been open to public for improvement


int PressureSensyThingy = A0;

# The Pressure Sensy Thingy here refers to the Piezo- Electric transducer

byte val = 0;

int heswokeup = 150;

# heswokeup refers to he threshold value exceeding which triggers the signal shoot
# Threshold values vary and depend on the quality, size and material of the Piezo-electric transducer


void setup() {
Serial.begin(9600);
pinMode(PressureSensyThingy, INPUT);
}

# Some dev boards have different input pins. You can check the documentation to determine which input pin is the best.
  

void loop() {

  val = analogRead(PressureSensyThingy);

  if (val >= heswokeup)
  
  {
    Serial.println(val);
}

  delay(100);  

}

# if you have been observing me for a while, then you will understand why we use delays HAHA
