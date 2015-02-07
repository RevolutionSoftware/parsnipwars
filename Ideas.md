#############################
# Famicom Wars (Simplified) #
#############################

#### Mechanics/ideas
* airports build airplanes
* factories build tanks/soldiers
* all owned buildings give you gold each round
* tall buildings take two turns to occupy, short buildings take one turn

#### Buildings
* three states: player, neutral, enemy
* occupying can continue unless you leave a tile or die
* your buildings heal 2 HP and refuel (if it's a building that produces that unit)
* cities can heal land units (infantry?)

#### Buildings and the Tilemap
* buildings will be defined as player, enemy, or neutral in tilemap
* neutral buildings (village/city) will have the same tile id as player buildings, but with bit 7 set
* neutral buildings will be drawn every other frame (to distinguish from player buildings)

#### Unit Creation
* clicking on a building with no unit on it brings up a list of available units for purchase
* if there are more units than fit in the box, 2 options:
  - press right to access next page
  - pressing down beyond last item will scroll
* the menu and fake grayscale:
  - to prevent neutral buildings from stopping their grayscale effect, the menu will first be drawn to the gbuf and then copied to a buffer
  - while waiting for a key to be entered, the map will be drawn as normal and the buffer will be copied over top of the map
  - finally, the cursor will be drawn
* you can only purchase units you have enough gold to buy
* once purchased, a unit will be added to the player's unit array

#### Unit Array Data
* unit id
* currentHP
* starting x/y ? (some way to track how far a unit has walked)
* current x/y ?

#### Unit optimization ideas
* Say we have 6 different unittypes (2 soldiers, 2 tanks and 2 airplanes) per faction (that's what we currently have), then we can set the 8th bit (%10000000) to sign which faction the unit belongs to.

#### Base Unit Data
* max HP
* movement range
* whether can attack air and land
* terrain limitations (trees, mountains, etc.)
* strengths/weaknesses against other units
* experience (?) (based on damage dealt, not damage received)

#### A Unit's Turn
* give option to move a unit
* if unit lands on building, give option to occupy
* if unit lands next to enemy, option to attack
* at end of turn, give some way to show that the unit has already had its turn

#### Unit Movement (some ideas)
* provide a range of tiles as in the original game
* limit the player to a certain number of tiles, eg. walking 5 tiles in any direction (UUULU or DRDDL)
* mechanical units require fuel

#### Terrain Data
* provides defense (0-5)
* some terrain require multiple movement points

#### Occupying a Building
* when a unit lands on a building, give the option to occupy or not
* decrease building's HP by unit's HP, if HP = 0, occupy (eg if unit has 10 HP, decrease by 10, if unit has 3 HP, decrease by 3)
* after occupying a building, change sprite to player's team

#### Attacking Other Players
* units attack at the same time (two infantry units will both deal 5 dmg, rather than attacker deals 5, attacked dealing 2-3)

#### AI
* MWAHAHAHAHA


Lots of good data here:
www.gamefaqs.com/snes/577448-super-famicom-wars/faqs/16941
----- 3.2  UNITS INFORMATION -----
----- 3.3  TERRAIN DATA -----
