Arduino Traffic Light Simulation with Push Button Control
This Arduino sketch simulates a basic traffic light system using red, yellow, and green LEDs. The behavior of the lights changes depending on the state of a connected push button.

📋 Features
Simulates a traffic light cycle (Green → Yellow → Red).

Button press instantly gives priority (Green light for 5 seconds).

Custom non-blocking delays using for loops to allow for button state monitoring.

🛠️ Hardware Requirements
Arduino Uno (or compatible board)

3 LEDs (Red, Yellow, Green)

3 Resistors (220Ω or 330Ω recommended)

1 Push Button

Breadboard and jumper wires

🧰 Wiring
Arduino Pin	Component	Description
13	Green LED	Connect LED with a resistor
10	Yellow LED	Connect LED with a resistor
7	Red LED	Connect LED with a resistor
2	Push Button	Digital input

Connect the other leg of the button to GND. Use a pull-up resistor or configure the pin with INPUT_PULLUP if needed.

💡 How It Works
When the button is pressed, the red and yellow lights turn off, and the green light is activated for 5 seconds.

When the button is not pressed, the system runs a traffic light sequence:

Yellow ON → short wait

Red ON → longer wait

Yellow ON → short wait

Green ON → medium wait

The use of for loops instead of delay() allows the system to monitor the button in real time and interrupt the current sequence if the button is pressed.

🧪 Example Use Case
This project is useful for simulating traffic control scenarios, pedestrian crossings, or learning how to handle real-time inputs with microcontrollers.
