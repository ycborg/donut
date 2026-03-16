# Donut Math: Exploring 3D Rendering (C)

### 🎓 Context
This project is a personal implementation and study of the famous "Donut" algorithm by Andy Sloane. My goal was to explore the intersection of **Mathematics and Programming**, observing how trigonometric functions can be used to render 3D shapes in a terminal.

### 🚀 Learning Process
Rather than just running the code, I used this project to study:
* **The Concept of Shading:** How a simple string of characters (`.,-~:;=!*#$@`) can simulate light intensity (Luminance).
* **Terminal Manipulation:** Learning about ASCII escape codes to refresh the screen and create animation frames.
* **Math in Practice:** Seeing how Sine and Cosine translate into movement and depth in a 2D space.

### 🛠️ Technical Highlights
* **Z-Buffer Concept:** Understanding how the code tracks the depth of each "pixel" to determine what should be visible.
* **Code Obfuscation:** The `donutindonut.c` version explores how C source code can be formatted into shapes, a classic exercise in the C community.

### 💻 How to run
1. **Compile** the standard version:
   ```bash
   gcc donut.c -o donut -lm

2. **Run** the executable:
   ```bash
   ./donut

### 🔗 Credits
* Original algorithm and mathematical explanation by Andy Sloane (a1k0n).
