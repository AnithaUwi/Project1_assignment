#define TEMP_SENSOR_PIN A0
#define FAN_PIN 7
#define TEMP_THRESHOLD 30.0

// Global variables
float temperature = 0.0;
int sensorValue = 0;

void setup() {
    Serial.begin(9600);
    pinMode(FAN_PIN, OUTPUT);
    pinMode(TEMP_SENSOR_PIN, INPUT);
    digitalWrite(FAN_PIN, LOW);
    
    Serial.println("========================================");
    Serial.println("  Temperature-Controlled Fan System");
    Serial.println("========================================");
    Serial.println("System initialized. Monitoring...");
}

void loop() {
    // Read sensor
    sensorValue = analogRead(TEMP_SENSOR_PIN);
    
    // Convert to temperature
    float voltage = sensorValue * (5.0 / 1023.0);
    temperature = (voltage - 0.5) * 100.0;
    
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" C  |  Fan: ");
    
    // Control fan
    if (temperature > TEMP_THRESHOLD) {
        digitalWrite(FAN_PIN, HIGH);
        Serial.println("ON");
    } else {
        digitalWrite(FAN_PIN, LOW);
        Serial.println("OFF");
    }
    
    delay(1000);
}
