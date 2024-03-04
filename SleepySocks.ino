int PressureSensyThingy = A0; // Piezo sensor pin
byte val = 0;
int heswokeup = 150; // Threshold for pressure detection

void setup() {
    Serial.begin(9600); // Start serial communication at 9600 baud rate
    pinMode(PressureSensyThingy, INPUT);
}

void loop() {
    val = analogRead(PressureSensyThingy); // Read the value from the piezo sensor

    if (val >= heswokeup) {
        // If the threshold is exceeded, send a signal via Bluetooth
        Serial.println("ALERT: Pressure detected!"); // This message is sent over Bluetooth
        // Depending on how your Bluetooth module is set up, you might need to use a different
        // serial object, such as Serial1, Serial2, etc., for Bluetooth communication.
        // For example, with an HC-05 connected to TX1/RX1 pins, you might use Serial1.println("ALERT: Pressure detected!");
    }

    delay(100); // Short delay to avoid too frequent readings
}
