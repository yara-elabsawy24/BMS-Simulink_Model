topModel = bdroot;
refModel = 'BMS_MCU_CODE';

% 1. Ensure the reference model is fully loaded
if ~bdIsLoaded(refModel)
    load_system(refModel);
end

% 2. Set the target hardware board first (This clears/resets the toolchain internally)
boardName = 'STM32F4xx Based';
set_param(topModel,'HardwareBoard', boardName);
set_param(refModel,'HardwareBoard', boardName);

% 3. FORCE the target configuration to use the ARM cross-compiler toolchain
% Doing this step AFTER setHardwareBoard overrides the MinGW default behavior.
armToolchain = 'GNU Tools for ARM Embedded Processors';
set_param(refModel, 'Toolchain', armToolchain);

% 4. Assign the .ioc project file paths using safe forward slashes
%set_param(topModel, 'ProFile', 'C:/Users/odona/OneDrive/Yara/Thesis/STM32/BMSPIL/BMSPIL.ioc');
%set_param(refModel, 'ProFile', 'C:/Users/odona/OneDrive/Yara/Thesis/STM32/BMSPIL/BMSPIL.ioc');

% 5. Apply standard PIL word sizes settings
set_param(topModel, 'PortableWordSizes', 'on');
set_param(refModel, 'PortableWordSizes', 'on');

% 6. Save modifications to your models
save_system(topModel);
save_system(refModel);

disp('>>> PIL configuration successfully applied with ARM toolchain override.');
