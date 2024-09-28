# SleepySocks

code for the SleepySocks project

## Description

The "Pressure Sensy Thingy" refers to the Piezo-Electric transducer, a crucial component of our project. It's important to note that threshold values, which trigger the signal shoot, vary depending on the quality, size, and material of the Piezo-electric transducer.

## Code

```cpp
int PressureSensyThingy = A0; // The Pressure Sensy Thingy refers to the Piezo-Electric transducer.
byte val = 0;
int heswokeup = 150; // `heswokeup` refers to the threshold value. Exceeding this triggers the signal shoot.

void setup() {
    Serial.begin(9600);
    pinMode(PressureSensyThingy, INPUT);
    // Some development boards have different input pins. Check the documentation to determine the best input pin.
}

void loop() {
    val = analogRead(PressureSensyThingy);

    if (val >= heswokeup) {
        Serial.println(val); // Outputs the value if the threshold is exceeded.
    }

    delay(100); // Delays are crucial for preventing too frequent readings.
}

```

**Note**: If you have been observing the nuances of sensor-based programming, the use of delays might bring a smile to your face. It's a simple yet effective way to manage sensor data collection frequency.

I hope this helps 

