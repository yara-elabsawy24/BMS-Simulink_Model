classdef BMS_State < Simulink.IntEnumType
   enumeration
      Standbying(0)
      Flying(2)
      Fault(3)
      Charging(1)
   end
end