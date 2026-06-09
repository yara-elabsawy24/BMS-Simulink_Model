%% ------------------------------------------------------------------
%  You can modify the values of the fields in From_Plant_MATLABStruct
%  and evaluate this cell to create/update this structure
%  in the MATLAB base workspace.
% -------------------------------------------------------------------
Cell_Num = 12;   %numer of series cells

From_Plant_MATLABStruct.Vmod =3.6 * ones(Cell_Num,1);
From_Plant_MATLABStruct.Tmod =293 * ones(Cell_Num,1);
From_Plant_MATLABStruct.Pack_Current =0;
From_Plant_MATLABStruct.SOCmod =ones(Cell_Num,1);
From_Plant_MATLABStruct.V_Batt_Monitor =43.2;

