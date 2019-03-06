/*
	author: sbondo1234
	description: include.hpp
*/

#include "scripts\sg_dialogs\defines.hpp"
#include "scripts\sg_dialogs\sg_dialogs.hpp"
#include "nmd\include.hpp"
#include "nmd\modules\vehicles\include.hpp"
#include "scripts\sg_va\settings.hpp"

class CfgFunctions
{
    #include "nmd\cfgFunctions.hpp"
    #include "nmd\modules\vehicles\cfgFunctions.hpp"
    #include "scripts\sg_va\functions\functions.hpp"
};

class Params
{
    #include "nmd\modules\vehicles\params.hpp"
};

class RscTitles
{
    #include "scripts\sg_dialogs\sg_textIntro.hpp"
    #include "scripts\sg_dialogs\sg_health.hpp"
};