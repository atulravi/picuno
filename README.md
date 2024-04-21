# Picuno (PICO + UNO)
A repo of all files for the pic uno RP2040+Arduino UNO derivative by ESCcrasci and AtrivaTECH <br>

<i>Product Page:</i> <a href= "https://atrivatech.com/picuno">www.atrivatech.com/picuno</a><br>
<i>Brand Page/Manufacturer Page (All product updates in future will be available here):</i> <a href="https://www.atrivatech.com">www.atrivatech.com</a><br>
<i>Associated article:</i> https://esccrasci.in/picuno/ <br>

File Hierarchy will be updated periodically.<br>

<b><h3> CONTRIBUTORS, TESTERS are WELCOME. Know More: <a href="https://atrivatech.com/news">atrivatech.com/news</a></h3></b>

GPIOs <s>will be</s> are 5V tolerant (Select GPIOs) with level shifting. At the moment, <s>-6-</s> <b>4 </b> GPIOs will be level shifted to 5 volts unlike competitors. <s> Also working on shifting all GPIOs to 5V for better compatibility.</s> This shall work only with external power for safety reasons. (Note: Although GPIOS 2-5 are "OUTPUT ONLY" even inputs can be given. However, 5V inputs can only be given with external power. 3.3V inputs can be given with/without. Said GPIOs are maked as such to prevent accidents in hands of beginners. Said outputs will also be held HIGH always. For functionality, set low. These points are also applicable to 5V edition only.) Dual regulators are added for complete freedom of choosing devices to connect. (NOTE 2: Although both external power and USB power can be given at once, it is not recommended. However, the circuit has been designed to prevent reversing of high voltage through the USB. If considering external power and USB C, using a C cable without 5V line would be recommended.)<br> 

Built-In LED can be accessed at GPIO14.

SparkFun QWIIC/ Adafruit Stemma is also <s>going to be</s> implemented.  

Learning Resources shall be developed in partnership with the Educational Kits division of It's ON Group (AtrivaQ atrivaq.in) also providing a public platform for all users of PicUNO to share their learnings. Documentation and Learning Resources with Teaching Resources shall be produced in conjunction with our education team too. AtrivQ brings their over 4 year experience in the affordable education space which in conjunction with our affordable MCU board will gear up up-coming students,hobbyists and engineers to learn with the latest hardware without having to invest in sub-par foreign made knockoff boards.

Note that all of the gerber files and kicad files present at root are of V1 and can be ignored. File hierarchy shall be updated below soon. 
<br>
Cost Calculations and Expected Campaign goal can be found at <a href="https://github.com/atulravi/picuno/tree/main/manufacture">/manufacture</a><br>
 
<b><i>Current version being <s>prototyped</s> tested:</i></b> V2.2.3 (Picuno)<br>

<hr width = 100% height = 2></hr>

# Information:
As development is consistent, documenting it, is not. To combat the same, various repositories and their purposes are given below. You may Follow the ones of choice to be notified when latest versions/updates are pushed.
1) Circuit Python port: https://github.com/atulravi/circuitpython
2) MicroPython Port: https://github.com/AtrivaTECH/micropython/tree/master
3) Arduino IDE Library: https://github.com/AtrivaTECH/AtrivaTECH_PicUNO
4) Documentation: https://github.com/AtrivaTECH/picuno-documentation
5) Project Repository: https://github.com/AtrivaTECH/picuno-projects
6) FPGA Shield: https://github.com/AtrivaTECH/picuno-ice

You may download software packages like uf2 files and latest library binaries from the "RELEASES" tab in each respective repository. 

# Software
As of now, custom editions of MicroPython and Circuitpython for our board have been made. However, until we obtain the PID codes, said versions will not be merged with the main repositories. However, the versions we have built will be available to test the board. 
Circuit Python: https://github.com/atulravi/circuitpython
MicroPython: https://github.com/AtrivaTECH/micropython/tree/master
Arduino IDE Library:  https://github.com/AtrivaTECH/AtrivaTECH_PicUNO

# Photo of PicUNO RP2040 V2.X.X
<img src="http://atrivatech.com/wp-content/uploads/2024/03/IMG_0571-scaled.jpg" height= "50%"  width = "50%" size="50%"></img>

This particular version comes with 1 built-in LED, 1 WS2812 NeoPixel, Level SHifting to 5V on GPIOs 2-5 (On external power), Multi-GPIO support with selectors, SparkFun QWIIC/Adafruit Stemma QT connector, External DC Power jack, Dedicated reset switch, access to all 26 GPIOs and mounting holes. 
<hr width = 100% height = 2></hr>

## In the Press:
<img src="https://atrivatech.com/wp-content/uploads/2024/03/article-np-clipping.jpg" width="50%" height="50%"></img>

<small>The Hindu-Downtown-10 March</small>

<a href="https://www.hackster.io/news/picuno-rp2040-in-the-arduino-uno-form-factor-56e568c494da"> <img src="http://esccrasci.in/wp-content/uploads/2024/04/Hackster_RGB.jpg" height="50%" width="50%"></a>

<small>Hackster.io- "Atul Ravi's PicUNO is a Pico-style RP2040 board in the popular Arduino form factor with extra features."</small>

## Production Process

![First Protoytpe (1)_page-0001](https://github.com/atulravi/picuno/assets/70395057/46d8deba-8657-42b1-a80e-a7a603487e63)
<small><center>Sections highlighted in green are complete</center></small>

## Known Faults: (GitHUB Issues can be used to track progress)
<s><19/APR> 3.3 and GND interchanged on headers. </s><br>
<1/APR> I2C and QWIIC wiring issue. GP20 is SDA and GP21 is SCL. Will Be fixed.

<h1><b>Licenses:</b></h1>
<img src = "https://github.com/atulravi/picuno/blob/main/oshw_facts-v1.png" > </img>
<img src = "https://github.com/atulravi/picuno/blob/main/v1-oshwa.png" size = 50% width = 50% height = 50%  > </img>

<hr width = 100% height = 2></hr>
<h1><b>Team:</b></h1>
<i>ATUL RAVI</i><br>
17 y/o hobbyist and student building hardware and blogging about them at https://www.esccrasci.in and HAM operator VU3FUJ <br>


## Credits
<small>Thanks to CodeItDoIt on Github for fixing the picuno.bmp filename and improving file hierarchy.</small>

<hr width = 100% height = 2></hr>
<img src = "http://esccrasci.in/wp-content/uploads/2024/02/kicad-1.png" height = 20% width = 20% size = 20%><img src = "http://esccrasci.in/wp-content/uploads/2024/02/india-1.png" size = 20% width = 20% height = 20%  > </img>


