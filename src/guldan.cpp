#include "ScriptMgr.h"
#include "GuldanEngine.h"

class Guldan_WorldScript : public WorldScript
{
public:
    Guldan_WorldScript() : WorldScript("Guldan_WorldScript") {}

    void OnAfterConfigLoad(bool reload) override
    {
        LOG_INFO("guldan.system", "OnAfterConfigLoad");
    }

    void OnAfterUnloadAllMaps() override
    {
        LOG_INFO("guldan.system", "OnAfterUnloadAllMaps");
        // Uninitialize
        sGuldan->Stop();
    }

    void OnBeforeWorldInitialized() override
    {
        LOG_INFO("server.loading", "Loading Guldan...");
        // Initialize
        sGuldan->Start();
    }
};

void AddGuldanScripts()
{
    new Guldan_WorldScript();
}
