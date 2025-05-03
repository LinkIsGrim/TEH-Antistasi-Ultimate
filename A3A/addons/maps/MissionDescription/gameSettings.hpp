respawn = "BASE";
respawnDelay = 15;

// Player corpses preserved for 15min minimum
corpseManagerMode=0;
corpseLimit=5555;
corpseRemovalMinTime=1;
corpseRemovalMaxTime=10;
wreckManagerMode=1;
wreckLimit=50;
wreckRemovalMinTime=1;
wreckRemovalMaxTime=7200;
minPlayerDistance=0;

aiKills = 0;
disabledAI = 1;
Saving = 0;

class Header
{
	gameType = ANTI;
	minplayers = 1;
	maxplayers = 29;
};

class CfgTaskEnhancements
{
  enable       = 1;
  3d           = 1;
  3dDrawDist   = 3500;
  share        = 1;
  propagate    = 1;
};

//If we have CBA for TFAR, then load the mission's settings.
cba_settings_hasSettingsFile = 1;
