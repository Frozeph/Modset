["vehicleMiddle", 5000, 15] execVM "server\sys_vehicles\vehicleSetupRoads.sqf";

//["vehiclemiddle", 3000, 10] execVM "server\sys_vehicles\VBIED.sqf";

{
	[_x, 200, 4] execVM "server\sys_vehicles\vehicleSetupRoads.sqf";
}forEach townMarkerArray;