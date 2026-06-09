topModel = bdroot;             
refModel = 'BMS_MCU_CODE';   

set_param(topModel, 'Toolchain', 'MinGW64 | gmake (64-bit Windows)'); 
set_param(topModel, 'PortableWordSizes', 'on');

if ~bdIsLoaded(refModel)
    load_system(refModel);     % Safely loads the sub-model in memory without popping open a window
end

set_param(refModel, 'Toolchain', 'MinGW64 | gmake (64-bit Windows)');
set_param(refModel, 'PortableWordSizes', 'on');

save_system(refModel);

disp('>>> Success: Both Top and Referenced SIL Models configured!');
