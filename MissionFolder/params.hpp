class Params
{
	class AchillesRevive
	{
		title = "Achilles Revive System";
		values[] = {1,0};
		texts[] = {"Enabled","Disabled"};
		default = DEFAULT_CAN_REVIVE;
	};

    class AchillesRevive_Bleeding
    {
        title = "Achilles Revive - Bleeding (Decorative)";
		values[] = {1,0};
		texts[] = {"Enabled","Disabled"};
		default = DEFAULT_CAN_REVIVE_BLEED;
    };

    class AchillesRevive_AIRevive
    {
        title = "Achilles Revive - AI Revive (Experimental!)";
		values[] = {1,0};
		texts[] = {"Enabled","Disabled"};
		default = DEFAULT_CAN_REVIVE_AI;
    };

    class AchillesRevive_BloodLossTimer
    {
        title = "Achilles Revive - Blood Loss Timer";
		values[] = {0, 10, 30, 60, 120, 180, 240, 300};
		texts[] = {"Disabled","10 seconds", "30 seconds", "1 minute", "2 minutes", "3 minutes", "4 minutes", "5 minutes"};
		default = DEFAULT_CAN_REVIVE_BLOOD_LOSS_TIMER;
    };
};