class cfgpatches
{
    class tag_tseries
    {
        units[] = {};
        weapons[] = {};
        author = "Jenna";
        requiredversion = 0.1;
        requiredaddons[]={"ace_interaction"};
    };
};


class CfgFunctions
{
    class tag
    {
    class tag
    {
        class canrip
        {
            file = "\79th\TSeriesIntel\functions\fn_canrip.sqf";
        };
        class riphead
        {
            file = "\79th\TSeriesIntel\functions\fn_riphead.sqf";
        };
    };
    };
};


class cfgvehicles
{
    class man;
    class CAManBase : man
    {
        class ACE_Actions
        {
            class ACE_Head
            {
                class tag_riphead
                {
                    condition = "[_target] call tag_fnc_canrip";
                    displayName = "Extract Intel";
                    statement = "[_target] call tag_fnc_riphead";
                };
            };
        };
    };
};
