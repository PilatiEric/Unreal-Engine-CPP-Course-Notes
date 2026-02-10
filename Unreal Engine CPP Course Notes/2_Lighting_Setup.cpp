/*
	Lighting Setup Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51635435#questions/24088171

	----------------------------------------------------------------------------------------------------------------------------------------------------------

	ADDING LIGHTS TO THE LEVEL
	- Go into the "Quickly add to the project menu"
	- Go to the "Lights" menu
	- Drag "Directional Light" into the level

	DIRECTIONAL LIGHT
	- Think of this as like the sun
	- It lights everything from every angle
	- It doesn't really matter where it's at, but it's good to set it to (0, 0, 0)

	ADDING A SKY TO THE LEVEL
	- Go into the "Quickly add to the project menu"
	- Go into the "Visual Effects"
	- Drag "Sky Atmosphere" into the level

	CHANGING THE POSITION OF THE SUN
	- Once a sky is added, and assuming you have a directional light, you should be able to see the sun
	- Going into the "Directional Light" details menu, changing the "Rotation" in the "Transform" section will change where the sun is
	- This will cause the reflections and shadows cast by object to react differently depending on the angle
	- Bringing it low enought will give the colors of a sunset

	ADDING THE EXPONENTIAL HEIGHT FOG
	- This makes the black part beloe the sky disappear
	- Go into the "Quickly add to the project" menu
	- Go into the "Visual Effects" menu
	- Drag "Exponential Height Fog" into the level

	ADDING CLOUDS TO THE LEVEL
	- Go into the "Quickly add to the project" menu
	- Go into the "Visual Effects" menu
	- Drag "Volumetric Cloud" into the level

	ADDING A SKY LIGHT TO THE LEVEL
	- Go into the "Quickly add to the project" menu
	- Go into the "Visual Effects" menu
	- Drag "Sky Light" into the level

	UPDATING THE SKYLIGHT WITH THE POSTION OF THE SUN
	- Go into the "Details" menu for the skylight
	- Scroll down to the Sky Light section
	- Click on "Recapture"
	- Also, scroll up to the "Light" section and check the "Real Time Capture" box to have it update automatically
	- This helps to match the colors given off by the sun so things look more realistic


	MOBILITY SETTINGS FOR LIGHTS
	- Found in the "Transform" section of the "Details" menu
	- These determine what can be done with the lights positions and colors when the game is running
	- Static
		- Can't move the light nor change its color
		- Fastest option in terms of performance
	- Movable
		- Can be moved and color changed
		- Slowest option in terms of performance
	- Stationary
		- Cannot be moved, but the color and intensity can be changed


	GOOD TIPS FOR ORGANIZATION
	- Create a folder in the components menu (where the lights and actors are) and call it "Lighting"
		- Done by right clicking on an empty area on the menu and clicking "Create Folder"
	- Put all the lighting related things in it

*/