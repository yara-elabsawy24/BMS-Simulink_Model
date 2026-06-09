% TX input
% --- CHIP IDENTIFICATION AND COMMAND TYPES ---
READ_BOARD_1 = 1;      % Tells the network to read Board #1

% --- REGISTRY ADDRESS DICTIONARY ---
CELL_VOLTAGES_ADDR_H = 26;  % Memory folder for Cell Voltages (High half)
CELL_VOLTAGES_ADDR_L = 2;   % Memory folder for Cell Voltages (Low half)

PACK_CURRENT_ADDR_H   = 43;  % Memory folder for total battery current (High half)
PACK_CURRENT_ADDR_L   = 4;   % Memory folder for total battery current (Low half)

TEMPERATURES_ADDR_H   = 60;  % Memory folder for NTC sensor readings (High half)
TEMPERATURES_ADDR_L   = 8;   % Memory folder for NTC sensor readings (Low half)

% --- ERROR CHECKING MATH CHECKSUMS ---
CRC_FOR_VOLTAGE     = 92;   % Mathematical safety code for voltage frame
CRC_FOR_CURRENT     = 138;  % Mathematical safety code for current frame
CRC_FOR_TEMPERATURE = 34;   % Mathematical safety code for temperature frame

% Voltage digital step
ADC_Volt_Resolution= .000089;

% Voltage divider digital step for V battery monitor
V_Bat_Div_Res=.00133;

% Current sensing
V_ISENSE_Res=.00000133; % based on Steval-114BMS datasheet
R_Sense=.01;           % shunt resistor in ohm

% for SOC calc
Capacity=5.200;    %unit Ah

%Temp sensing through GPIOs
R_Pullup= 10000;       %based on Steval-114BMS datasheet
R_NTC=10000;           %based on B3950 10K