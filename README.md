# BTNuke
An ESP8266-powered tool that jams classic bluetooth signals.

# Key Features
- Minimal Setup.

# Hardware Requirements
- NodeMCU ESP-32S V1.1 38-Pins
- One nrf24L01 Module OR nrf24L01+PA/LNA Module
- `7` Female to Female Jumper Wires

# Note
- nrf24L01 and nrf24L01+PA/LNA modules have same pinout.

# Pinout Table
| nrf24l01 | NODEMCU ESP8266 |
|----------|-----------------|
| VCC      | 3.3V            |
| GND      | GND             |
| CE       | D2              |
| CSN      | D1              |
| SCK      | D5              |
| MOSI     | D7              |
| MISO     | D6              |

# Setup
1. Download Arduino IDE from [here](https://www.arduino.cc/en/software) according to your Operating System.
2. Install it.
3. Go to `File` → `Preferences` → `Additional Boards Manager URLs`.
4. Paste the following link :
   
   ```
   https://arduino.esp8266.com/stable/package_esp8266com_index.json
   ```
5. Click on `OK`.
6. Go to `Tools` → `Board` → `Board Manager`.
7. Wait for sometimes and search `esp8266` by `ESP8266 Community`.
8. Simply install it.
9. Wait for sometime and after that it is installed.
10. Restart the Arduino IDE.
11. Done!

# Install
1. Download or Clone the Repository.
2. Open the folder and just double click on `BTNuke.ino` file.
3. It opens in Arduino IDE.
4. Compile the code.
5. Select the correct board from the `Tools` → `Board` → `ESP8266 Boards`.
   - It is generally `NodeMCU 1.0 (ESP-12E Module)`.
6. Select the correct port number of that board.
7. Upload the code.
8. Done!
   - The script starts running automatically.

# What happened after script is running?
- It create disturbance in the sound.
- It blocks the sound even the music is playing.
- Sometimes it disconnects the bluetooth devices.
