// F3 Functions

class F // Defines the "owner"
{
	class common // category
	{
		file = "f\common";
		class processParamsArray{preInit = 1; postInit=1;};
		class nearPlayer{};
	};
	class assignGear
	{
		file = "f\assignGear";
		class assignGear{};
	};
	class setGroupID
	{
		file = "f\setGroupID";
		class setGroupID{};
	};
	class missionConditions
	{
		file = "f\missionConditions";
		class SetTime{};
		class SetFog{};
		class SetWeather{};
		class SetWind{};
	};
	class groupMarkers {
		file = "f\groupMarkers";
		class localGroupMarker{};
		class localSpecialistMarker{};
	};
	class FTMemberMarkers
	{
		file = "f\FTMemberMarkers";
		class SetLocalFTMemberMarkers{};
		class GetMarkerColor{};
		class LocalFTMarkerSync{};
	};
	class bodyRemoval
	{
		file = "f\removeBody";
		class removeBody{};
	};
	class setAISkill
	{
		file = "f\setAISKill";
		class setAISKill{};
	};
	class mapClickTeleport
	{
		file = "f\mapClickTeleport";
		class mapClickTeleportUnit{};
		class mapClickTeleportGroup{};
	};
};