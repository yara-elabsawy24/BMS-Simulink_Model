% --- Expanded High-Fidelity Bonka LiPo Cell Parameters ---
% 1x11 Vector tracking precise 10% SOC steps
bonka_SOC = [0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]; 

% 1x5 Vector tracking temperature breakpoints in Kelvin
% [ -10°C,  0°C,  25°C,  40°C,  55°C ]
bonka_T   = [263.15, 273.15, 298.15, 313.15, 328.15]; 

% Capacity matching your hardware
bonka_AH  =.15*5.2; 

% --- 2D Open Circuit Voltage Grid: OCV(SOC, T) ---
% Rows match temperatures (Coldest to Hottest), Columns match SOC (0 to 1.0)
bonka_OCV = [
    2.85, 2.92, 3.00, 3.02, 3.03;  % SOC = 0.0
    3.35, 3.38, 3.45, 3.47, 3.48;  % SOC = 0.1
    3.58, 3.61, 3.68, 3.70, 3.71;  % SOC = 0.2
    3.64, 3.67, 3.73, 3.75, 3.76;  % SOC = 0.3
    3.68, 3.71, 3.77, 3.79, 3.80;  % SOC = 0.4
    3.73, 3.76, 3.82, 3.84, 3.85;  % SOC = 0.5
    3.79, 3.82, 3.88, 3.90, 3.91;  % SOC = 0.6
    3.88, 3.91, 3.96, 3.98, 3.99;  % SOC = 0.7
    3.97, 4.00, 4.05, 4.07, 4.08;  % SOC = 0.8
    4.07, 4.09, 4.13, 4.15, 4.16;  % SOC = 0.9
    4.15, 4.17, 4.20, 4.22, 4.23   % SOC = 1.0
];

% --- 2D Internal Resistance Grid: R0(SOC, T) in Ohms ---
% Shows higher resistance when freezing, plunging to ~3mOhm at operating temp
bonka_R0 = [
    0.018, 0.011, 0.005, 0.004, 0.003;  % SOC = 0.0
    0.015, 0.009, 0.004, 0.003, 0.002;  % SOC = 0.1
    0.013, 0.008, 0.003, 0.002, 0.002;  % SOC = 0.2
    0.012, 0.007, 0.003, 0.002, 0.001;  % SOC = 0.3
    0.012, 0.007, 0.003, 0.002, 0.001;  % SOC = 0.4
    0.012, 0.007, 0.003, 0.002, 0.001;  % SOC = 0.5
    0.012, 0.007, 0.003, 0.002, 0.001;  % SOC = 0.6
    0.012, 0.007, 0.003, 0.002, 0.001;  % SOC = 0.7
    0.012, 0.007, 0.003, 0.002, 0.001;  % SOC = 0.8
    0.013, 0.008, 0.003, 0.002, 0.001;  % SOC = 0.9
    0.015, 0.009, 0.004, 0.003, 0.002   % SOC = 1.0
];

disp('Dense 11x5 Matrix for Bonka LiPo successfully initialized.');

Fly_Cycle_Current = [  % The load profile
    0    300
    2    300
    4    300
    32   300
    34   20
    300   20
];
Discharge_Rate=-1; %Cell C rate
Charge_Rate=1; %Cell C rate
% Match the exact variable names expected by the block's internal logic
N = [0, 100];     % Length 2
dR1 = [0, 0];     % Length 2 (Tells it 0% change, meaning no aging)
