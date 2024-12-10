class CfgFunctions
{
    class MOD_CONSTANT
    {
        class cba 
        {
            file = QPATHTOFOLDER(functions\cba);
            class settings {};
        };
        class identity 
        {
            file = QPATHTOFOLDER(functions\identity);
            class getRandomIdentity {};
            class setRandomIdentity {};
        };
    };
};