%% Create Signal Editor scenario MAT-file with 5 scenarios

t_vec = (0:0.1:15)';
N = length(t_vec);

%% States
State_Charge = repmat(SRE.Charge, N, 1);
State_Fly    = repmat(SRE.Fly,    N, 1);

%% Base data
Vbase    = single(ones(N,12) * 3.7);
Tbase    = single(ones(N,12) * 298);
SOCbase  = single(ones(N,12) * 0.80);
I_charge = single(ones(N,1) * 10);    % charging
I_fly    = single(ones(N,1) * -20);   % discharging
VBbase   = single(ones(N,1) * 44.4);

%% 1. Over Voltage - Charge
V_OV = Vbase;
V_OV(t_vec >= 5,1) = single(4.30);
Over_Voltage = localCreateScenario(t_vec, V_OV, Tbase, SOCbase, I_charge, VBbase, State_Charge);

%% 2. Over Current - Fly
I_OC = I_fly;
I_OC(t_vec >= 5) = single(-300);
Over_Current = localCreateScenario(t_vec, Vbase, Tbase, SOCbase, I_OC, VBbase, State_Fly);

%% 3. Under Voltage - Fly
V_UV = Vbase;
V_UV(t_vec >= 5,1) = single(2.50);
Under_Voltage = localCreateScenario(t_vec, V_UV, Tbase, SOCbase, I_fly, VBbase, State_Fly);

%% 4. Under Temperature - Fly
T_UT = Tbase;
T_UT(t_vec >= 5,1) = single(263);
Under_Temperature = localCreateScenario(t_vec, Vbase, T_UT, SOCbase, I_fly, VBbase, State_Fly);

%% 5. Over Temperature - Fly
T_OT = Tbase;
T_OT(t_vec >= 5,1) = single(333);
Over_Temperature = localCreateScenario(t_vec, Vbase, T_OT, SOCbase, I_fly, VBbase, State_Fly);

%% Save all scenarios
save('1S_MIL_Wrapper_Harness1_HarnessInputs.mat', ...
    'Over_Voltage', ...
    'Over_Current', ...
    'Under_Voltage', ...
    'Under_Temperature', ...
    'Over_Temperature');

disp('5 Signal Editor scenarios saved successfully.');

%% Helper function
function Scenario = localCreateScenario(t_vec, Vmod_data, Tmod_data, SOCmod_data, Current_data, Vbatt_data, state_data)

    State_Required_TS = timeseries(state_data, t_vec);

    From_Plant_Data.Vmod           = timeseries(single(Vmod_data), t_vec);
    From_Plant_Data.Tmod           = timeseries(single(Tmod_data), t_vec);
    From_Plant_Data.Pack_Current   = timeseries(single(Current_data), t_vec);
    From_Plant_Data.SOCmod         = timeseries(single(SOCmod_data), t_vec);
    From_Plant_Data.V_Batt_Monitor = timeseries(single(Vbatt_data), t_vec);

    Scenario = Simulink.SimulationData.Dataset;
    Scenario = Scenario.addElement(From_Plant_Data, 'From_Plant');
    Scenario = Scenario.addElement(State_Required_TS, 'State_Required');

end