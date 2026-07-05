# LaserVentControl
Arduino sketch for the laser ventilation Controller

Based on and Automation Direct P1AM-100 PLC-like controller

The code just reads the input module, ORs in the blower output, and writes it to the output. So I think you can add lasers to the unused IO without modifying the code.

This is the library it uses to communicate with the IO modules.
https://facts-engineering.github.io/api_reference.html#init

Original by Michael Bayern
