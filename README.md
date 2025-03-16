# **Food Spoilage Detector**  

## **Introduction**  
The **Food Spoilage Detector** is a smart system designed to detect food spoilage by monitoring harmful gases like methane and ammonia. The system uses sensors such as **MQ4** and **DHT11** to identify spoilage signs early and alert users via a **buzzer**, **LED**, and **LCD display**. Additionally, the system utilizes the **ESP8266 Wi-Fi module** to send remote alerts, ensuring real-time monitoring and improved food safety.

---

## **Features**  
✅ Real-time detection of food spoilage gases (methane, ammonia, etc.)  
✅ Temperature and humidity monitoring using DHT11 sensor  
✅ Visual alerts via **LED** and text updates on the **16x2 LCD** display  
✅ Audible alerts using a **buzzer** for immediate warnings  
✅ Remote notifications via **ESP8266** for user convenience  
✅ Cost-effective and easy-to-build design for household and commercial use  

---

## **Components Required**  
- **Arduino Uno** (Microcontroller)  
- **MQ4 Gas Sensor** (Methane detection)  
- **DHT11 Sensor** (Temperature & humidity)  
- **ESP8266 Wi-Fi Module** (Remote alerts)  
- **16x2 LCD Display** (Visual output)  
- **Buzzer** (Audible alert)  
- **LEDs** (Visual indicators)  
- **Breadboard & Connecting Wires**  
- **Power Supply**  

---

## **Block Diagram**  
The following diagram represents the overall working and component connections:  
![Block Diagram](https://github.com/Puliushakiran/Food-Spoilage-Detector/blob/main/block%20diagram.png)  

---

## **Design Image**  
The design of the system includes all components integrated for efficient monitoring:  
![Design Image](https://github.com/Puliushakiran/Food-Spoilage-Detector/blob/main/design%20diagram.png)  

---

## **Working Principle**  
The **Food Spoilage Detector** operates as follows:  
1. **Gas Detection:**  
   - The **MQ4** sensor monitors methane and ammonia gas levels.  
2. **Environmental Monitoring:**  
   - The **DHT11** sensor tracks temperature and humidity.  
3. **Alert System:**  
   - If gas concentration exceeds the set threshold, the following actions are triggered:  
     - **Red LED** lights up  
     - **Buzzer** activates  
     - The **LCD display** shows **"Food Spoiled"**  
     - The **ESP8266 Wi-Fi module** sends a notification to the user remotely.  
4. If gas levels remain below the threshold, the system continues monitoring with the **Green LED** active.  

---

## **Setup Instructions**  
Follow these steps to set up the system:  

### **Hardware Setup**  
1. Connect the **MQ4 sensor**, **DHT11 sensor**, and **LCD display** to the **Arduino Uno** as per the block diagram.  
2. Connect the **ESP8266 Wi-Fi module** for remote alerts.  
3. Connect the **LEDs** and **buzzer** to their respective pins.  
4. Use a suitable **power supply** to ensure stable performance.  

### **Software Setup**  
1. Install the **Arduino IDE** on your computer.  
2. Download the required libraries for:  
   - **DHT11 Sensor**  
   - **LiquidCrystal Display**  
   - **ESP8266 Module**  
3. Upload the provided `.ino` file to the **Arduino Uno** board.  
4. Verify and upload the code successfully.  

---

## **Code Explanation**  
- The **MQ4** sensor's analog reading determines the presence of methane gas.  
- The **DHT11** sensor monitors environmental conditions.  
- If gas readings exceed the threshold, the system triggers alerts and displays **"Food Spoiled"**.  
- The **ESP8266** module sends alerts to the user’s device for remote notifications.  

---

## **Testing and Verification**  
1. Power the system and ensure all components are active.  
2. Place a sample of food near the sensors to test the gas detection.  
3. Observe the LCD display, LED indicators, and buzzer behavior for proper functioning.  
4. Ensure remote alerts are successfully transmitted via the **ESP8266** module.  

---

## **Applications**  
📌 **Households:** Prevents accidental consumption of spoiled food.  
📌 **Supermarkets:** Ensures timely removal of spoiled products.  
📌 **Restaurants and Cafeterias:** Helps maintain food quality and hygiene.  
📌 **Cold Storage Units:** Monitors storage conditions to prevent spoilage.  

---

## **Troubleshooting Tips**  
- If the **LCD display** shows random characters, check the wiring and re-upload the code.  
- If the **buzzer** doesn’t sound, verify its connection and ensure the pin is correctly defined in the code.  
- If the **ESP8266** fails to connect, check the Wi-Fi credentials in the code.  

---

## **Future Improvements**  
🔹 Adding more advanced gas sensors for enhanced accuracy.  
🔹 Implementing a mobile app for easier user alerts.  
🔹 Introducing data logging for tracking spoilage trends.  

---

## **Contributing**  
Contributions are welcome! Feel free to submit issues or suggest improvements via pull requests.  

