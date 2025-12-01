
# Contents

NOTE: website not upto date

Website Link: <https://aibarr23.github.io/Portfolio/>

Portfolio showcasing  projects and skills in a website made from scratch using HTML Javascript and CSS.

<details>
<summary>Embedded Systems</summary>

* Embedded C/C++

* Bare Metal

  * Firmware

  * Bare Metal projects

* Unit Testing

  * Pytest

  * Utest

  * Embedded Test ET

* Debugging - printf | Tracing
  * Software Tracing - QP/Spy
  * printf w/o UART or Segger

* RTOS

  * FreeRTOS
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  TiRTOS

  * MIROS
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  qm rtos

</details>
&nbsp;

<details>
<summary>FPGA</summary>

* Verilog

* VHDL

</details>
&nbsp;

<details>
<summary>Robotics</summary>

* ROS2

</details>
&nbsp;

<details>
<summary>Automation Testing</summary>

* ROBOT Framework

</details>
&nbsp;

<details>
<summary>Industrial Automation</summary>

* PLC

* HMI

* SCADA

</details>

&nbsp;
&nbsp;

<!-- ## 1. Portfolio -->

<!-- Raspberry pi (alpha bot) (MCU: Broadcom
BCM2837B0, Cortex-A53)

● Freescale FRDM-KL25Z (MCU: Kinetis®
L Series KL1x (KL14/15) & KL25
Cortex®-M0+) -->

## 1. Embedded Systems

### RTOS

* [QM RTOS](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/RTOS/Mini_RTOS) Tiva C Launchpad | TM4C132GH6PM cortex M4
  * uVision
  * RTOS using semapohores and priority systems for thread management on a Tiva MCU

* [MIROS](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/RTOS/Mini_RTOS%20-%20Copy) Tiva C Launchpad | TM4C132GH6PM cortex M4
  * uVision
  * Making a Mini RTOS from scratch capable of preemtive, priority based scheduling; and efficient blocking of threads

### Unit Testing

* [Ring-Buffer](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/Emb_Testing/Embedded_Test/U-Test/examples/ring-buffer) Embedded Test- Quantum Leaps ET without mocking

### Embedded C Bare Metal

* [BootLoader](https://github.com/aibarr23/Embedded-Control-Robotics/tree/main/Firmware/BareMetalSeries) STM32 Cortex-M | Firmware
  * VSCode
  * AES Firmware CBC_MAC, implementation of cryptographic signed and validate firmware
  * Bootloader Firmware Update implementation, system teardown and system setup, bootloading or firmware update implementation through a state machine and timeout implementation;
  * Flash Control, the process of writing to the flash and erasing the main application when updating
  * Buiding basic UART interface, race condition prevention with a ring buffer, and packet implementation of NACK,ACK, and CRC
  * Setup VTOR register to properly relocate the interrupt vector table
  * Linking prevention for Bootloader exeeding max size
  * Implement padding for the bootloader and the firmware signer with a python script

* [Automated Watering System](https://github.com/aibarr23/AWS_Project) Arduino Nano 33 IOT | SAMD21 cortex M0+
  * Arduino IDE
  * Control Servos and Moisture/Humidity Sensors for real time operations
  * Mobile Application created to provide necessary information and control towards the systems' hardware, water flow, and current state.
  * UDP client server communication between user application and deployed system
  * Wireless communication through Bluetooth Protocol BLE

* [blink LED](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/Tiva_C_series/project%200) Texas Instrument Tiva C Launchpad | TM4C132GH6PM cortex M4
  * Code Composer Studio

## 2. FPGA

### Verilog Programming

* [Line Decoder](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VERILOG/line%20decoder) Verilog - Icarus Verilog

* [Greater Than 2-Bit](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VERILOG/Greater%20than%202bit) Verilog Icarus Verilog

### VHDL Programming

* [Full Adder](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VHDL/Full_adder) VHDL - Icarus Verilog

* [AND](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VHDL/AND) VHDL - Icarus Verilog

&nbsp;

## 3. Robotics

### ROS2

* [small 2 wheel robot](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/Robotics/ROS2/ROS_test) RViz and Frames

&nbsp;

## 4. Automation Testing

### Robot Framework

* [Selenium](https://github.com/aibarr23/Test-Automation/tree/master/development/robot-scripts) Using robot framework with selenium

&nbsp;

## 5. Industrial Automation

### PLC

#### Rockwell Automation

* [Sorting Boxes By Height](https://github.com/aibarr23/Industrial-Automation/tree/main//Sorting_Boxes_ByHeight) Connected Components Workbench (CCW) - Ladder Logic

* [Filling Water Tank](https://github.com/aibarr23/Industrial-Automation/tree/main//Filling_Water_Tank) Connected Components Workbench (CCW) - Ladder Logic

* [Conveyor Velt](https://github.com/aibarr23/Industrial-Automation/tree/main//Converyor_Belt) Connected Components Workbench (CCW) - Ladder Logic

* [Control Panel](https://github.com/aibarr23/Industrial-Automation/tree/main//Control_Panel) Connected Components Workbench (CCW) - Ladder Logic

* [dishwasher](https://github.com/aibarr23/Industrial-Automation/tree/main//dishwash) RSLogix emulate500, RSLinx - Ladder Logic

### HMI
<!-- 
This is using highlight ==something here==

this shouuld of been an emoji :joy: or :smile: -->
