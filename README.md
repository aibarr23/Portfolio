
# Contents

Website Link: <https://aibarr23.github.io/Portfolio/>

Portfolio showcasing  projects and skills in a website made from scratch using HTML Javascript and CSS.

## Embedded Systems

### RTOS

<details>

<summary>View projects
</summary>

* [QM RTOS](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/RTOS/Mini_RTOS) Tiva C Launchpad | TM4C132GH6PM cortex M4
  * uVision
  * RTOS using semapohores and priority systems for thread management on a Tiva MCU

* [MIROS](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/RTOS/Mini_RTOS%20-%20Copy) Tiva C Launchpad | TM4C132GH6PM cortex M4
  * uVision
  * Making a Mini RTOS from scratch capable of preemtive, priority based scheduling; and efficient blocking of threads

</details>

### Embedded C Bare Metal

<details>

<summary>View projects
</summary>

* [Buildi a system from the ground up](https://github.com/aibarr23/Embedded-Systems-Control/tree/main/using_qemu/day_1) QEMU ARMv7-A & Cortex-A9 MPCore| Firmware and U-Boot
  * IDE-NeoVIM
  * Using U-Boot as the bootloader for the ARMv7 within QEMU, implement cmake and bash scripts for building/debugging the program
  * UART driver implementation of PL011 UART peripheral for Versatile Exppress hardware(Motherboard Express uATX)
  * Interrupt implementation through the Generic Interrupt Controller of Cortex-A9 MPCore cpu for the CoreTile Express A9x4 daughterboard
  * Cooperative Scheduler implementation for cooperative(or non-preemtive) multitasking

* [BootLoader](https://github.com/aibarr23/Embedded-Control-Robotics/tree/main/Firmware/BareMetalSeries) STM32 Cortex-M | Firmware
  * IDE-VSCode
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

</details>

### Unit Testing

<details>

<summary>View projects
</summary>

* [Ring-Buffer](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/Emb_Testing/Embedded_Test/U-Test/examples/ring-buffer) Embedded Test- Quantum Leaps ET without mocking

</details>

## FPGA

### Verilog Programming

<details>

<summary>View projects
</summary>

Learning src: [LinkedIn Learning](https://www.linkedin.com/learning/learning-fpga-development) and [LinkedIn Learning](https://www.linkedin.com/learning/learning-verilog-for-fpga-development)

* [Line Decoder](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VERILOG/line%20decoder) Verilog - Icarus Verilog

* [Greater Than 2-Bit](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VERILOG/Greater%20than%202bit) Verilog Icarus Verilog

</details>

### VHDL Programming

<details>

<summary>View projects
</summary>

* [Full Adder](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VHDL/Full_adder) VHDL - Icarus Verilog

* [AND](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/FPGA/VHDL/AND) VHDL - Icarus Verilog

</details>

&nbsp;

## LabView

### FPGA Module

<details>

<summary>View projects
</summary>

* [FOC Motor Control](https://github.com/aibarr23/LabView/tree/main/FOC%20Algorithm)

</details>

&nbsp;

## Robotics

### ROS2

<details>

<summary>View projects
</summary>

* [small 2 wheel robot](https://github.com/aibarr23/Embedded-Control-Robotics-PLC/tree/main/Robotics/ROS2/ROS_test) RViz and Frames

</details>

&nbsp;

## Automation Testing

### Robot Framework

<details>

<summary>View projects
</summary>

Learning souce: [LinkdedIn learning](https://www.linkedin.com/learning/robot-framework-test-automation-level-1-selenium-21986416)

* [Selenium](https://github.com/aibarr23/Test-Automation/tree/master/development/robot-scripts) Using robot framework with selenium

</details>

&nbsp;

## Industrial Automation

### PLC

#### Rockwell Automation

<details>

<summary>View projects
</summary>

Learning source:
[LinkedIn learning Path](https://www.linkedin.com/learning/paths/become-a-plc-developer)

* [Sorting Boxes By Height](https://github.com/aibarr23/Industrial-Automation/tree/main//Sorting_Boxes_ByHeight) Connected Components Workbench (CCW) - Ladder Logic

* [Filling Water Tank](https://github.com/aibarr23/Industrial-Automation/tree/main//Filling_Water_Tank) Connected Components Workbench (CCW) - Ladder Logic

* [Conveyor Belt](https://github.com/aibarr23/Industrial-Automation/tree/main//Converyor_Belt) Connected Components Workbench (CCW) - Ladder Logic

* [Control Panel](https://github.com/aibarr23/Industrial-Automation/tree/main//Control_Panel) Connected Components Workbench (CCW) - Ladder Logic

* [dishwasher](https://github.com/aibarr23/Industrial-Automation/tree/main//dishwash) RSLogix emulate500, RSLinx - Ladder Logic

</details>

### HMI
<!-- 
This is using highlight ==something here==

this shouuld of been an emoji :joy: or :smile: -->
