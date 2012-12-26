Homework 5 : Mini Monopoly
========================
<b>Instructor:</b> Tsung-Che Chiang<br/>
tcchiang@ieee.org<br/>
Department of Computer Science and Information Engineering<br/>
National Taiwan Normal University<br/>

<b>Student:</b> Lanyi Knight<br/>
sinmaplewing@gmail.com<br/>
Department of Computer Science and Information Engineering<br/>
National Taiwan Normal University<br/>

Classes and Objects
-------------------
* The game is composed of two parts:
  1. the world map and
  2. the world players.

* There are four types of map units:
  1. Upgradable: The fine is based on the level
  2. Collectable: Fine $ = # collectable units of the owner x fine
  3. RandomCost: Fine $ = dice points  fine
  4. Jail: The player is frozen for one round.

* The world map is composed of several kinds of map units.

* Classes of map and their relationship
  * class CMapUnit: a base class for defining the common data members and common interfaces for the various kinds of map units
  * class CUpgradableUnit (you may give it a better name): a class derived from CMapUnit having the data fields as mentioned earlier
  * classes CCollectableUnit, CRandomCostUnit, and CJailUnit
  * class CWorldMap: a class containing an array / vector of pointers to CMapUnit.

* Classes of players and their relationship
  * class CPlayer: a class having the data fields as mentioned earlier
  * class CWorldPlayer: a class containing an array / vector of (pointers to) CPlayer.

Game Functions
--------------

* See the demonstration.
  * Note that some functions (e.g. Jail and reward) are not included yet.
  * If you find any bug, please report to me. Thanks!
* Key functions
  * Reading the map from a data file: The map is guaranteed to contain at least six units.
  * Setting number of players and their names: The minimum and maximum numbers of players are 1 and 4, respectively.
  * Dicing and moving
  * Each time when a player passes the starting point, he/she gets a fixed amount of reward.
  * When a player visits a unit, he can buy it if nobody owns the unit, he is fined if some other owns the unit, or he can upgrade it if he owns the unit and the unit is upgradable.
  * If a player has no money (< 0), he can not play the game any more.[Note that all the units owned by this bankrupt player should be released. (The levels are reset to 1, and other live players can buy them.)]
  * Simulate the demo program as well as you can.

Format of Map File
------------------
    U USA 4000 400 400 800 1200 1600 2000
    U Norway 3000 300 300 600 1000 1200 1500
    U Denmark 4000 400 400 800 1200 1600 2000
    C Italy 2000 100 U Poland 8000 800 800 2000 3500 4000 4500
    C China 1000 100
    R Taiwan 2000 500
    J Jail

For U, C, and R units, the first integer after the name of the unit is the cost to buy the unit.

For C and R units, the second integer is the unit cost of fine.

For U units, the second integer is the cost for each level-up. The next integers are the fine of the units with level 1, 2, 3, 4, and 5, respectively.

Design
------
* Define required data members at proper classes at proper access levels.
  * Be careful of their data types.
  * Do not define redundant data members.
*Define required member functions and their arguments properly.
  * Do not define redundant member functions.
  * Do not add redundant tasks to the member functions. (SRP)
  * Which functions should be const? Which should be virtual?
  * Recall everything you learned in HW2.
* What should be put in .h and what in .cpp?
* Be careful of dynamic memory allocation.

Coding
------
* Think about what we have learned in this course.
  * Avoid magic numbers
  * Use constant proactively
  * Always initialize variables
  * Avoid deep nesting and long functions
  * Parameter passing
  * Constructor, assignment, and destructor
  * Inheritance and virtual function
  * std::string and std::vector
  * iostream, ifstream, cin, cout, endl, setw
  * operator overloading (especially operator[])
  * namespace
  * etc.
