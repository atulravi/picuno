# Picuno (PICO + UNO)
A repo of all files for the pic uno RP2040+Arduino UNO derivative by ESCcrasci and AtrivaTECH <br>

<i>Product Page:</i> <a href= "https://atrivatech.com/picuno">www.atrivatech.com/picuno</a><br>
<i>Brand Page/Manufacturer Page (All product updates in future will be available here):</i> <a href="https://www.atrivatech.com">www.atrivatech.com</a><br>
<i>Associated article:</i> https://esccrasci.in/picuno/ <br>

File Hierarchy will be updated periodically.<br>

GPIOs <s>will be</s> are 5V tolerant (Select GPIOs) with level shifting. At the moment, <s>-6-</s> <b>4 </b> GPIOs will be level shifted to 5 volts unlike competitors. <s> Also working on shifting all GPIOs to 5V for better compatibility.</s> This shall work only with external power for safety reasons. (Note: Although GPIOS 2-5 are "OUTPUT ONLY" even inputs can be given. However, 5V inputs can only be given with external power. 3.3V inputs can be given with/without. Said GPIOs are maked as such to prevent accidents in hands of beginners.) Dual regulators are added for complete freedom of choosing devices to connect. (NOTE 2: Although both external power and USB power can be given at once, it is not recommended. However, the circuit has been designed to prevent reversing of high voltage through the USB. If considering external power and USB C, using a C cable without 5V line would be recommended.)<br> 

SparkFun QWIIC is also <s>going to be</s> implemented.  

Note that all of the gerber files and kicad files present at root are of V1 and can be ignored. File hierarchy shall be updated below soon. 
<br>
Cost Calculations and Expected Campaign goal can be found at <a href="https://github.com/atulravi/picuno/tree/main/manufacture">/manufacture</a><br>
 
<b><i>Current version being <s>prototyped</s> tested:</i></b> V2.2.3 (Picuno)<br>

<hr width = 100% height = 2></hr>

# Photo of PicUNO RP2040 V2.X.X
<img src="http://atrivatech.com/wp-content/uploads/2024/03/IMG_0571-scaled.jpg" height= "50%"  width = "50%" size="50%"></img>
<hr width = 100% height = 2></hr>

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


