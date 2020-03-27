class CfgPatches
{
	class SchanaModSurvivorSelect
	{
		requiredAddons[] = {
            "DZ_Data",
            "DZ_Scripts"
        };
	};
};

class CfgMods
{
	class SchanaModSurvivorSelect
	{
		name = "SchanaModSurvivorSelect";
		action = "https://github.com/schana/dayz-mod-survivor-select";
		author = "schana";
		type = "mod";
		dependencies[] =
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				files[] =
				{
					"SchanaModSurvivorSelect/Game"
				};
			};
			class missionScriptModule
			{
				files[] =
				{
					"SchanaModSurvivorSelect/Mission"
				};
			};
		};
	};
};
