<div align="center">
  <img alt="Antistasi Ultimate" width="200" height="200" src="https://github.com/SilenceIsFatto/A3-Antistasi-Ultimate/assets/78276788/10d6e9f2-66bc-47a7-9ff5-2054b65b0e26">
  <h1>TEH Antistasi Ultimate</h1>
  <p>
    <i>An Arma 3 persistent multiplayer scenario about guerilla warfare tactics.</i>
    <br/>
    <i>Experimental/QoL fork of Antistasi Ultimate which is a fork Antistasi Plus Version focused on expanding templates, maps and features.</i>
  </p>
</div>

## TEH Changes
NB! These changes are tuned for and tested with a small amount of players (3-5).

- **Extensive remake of trader inventory**
	- Prices, availability, and compatibility fixes for items.
	- Item details overhaul with more information from the config.
	- reworked item hashing (the original algorithm caused frequent collisions).
- **Jeroen Arsenal QoL improvements**:
	- **GUI**: Added detailed tooltips, improved sorting
	- unrestricted vehicle loading (ignores both weight and volume)
	- unrestricted unit load (ignores weight). You can now pack a full backpack without external shenanigans.
- **Vehicles from the garage** now come with a starter kit, including medicine, primary ammo, and AT/AA launchers (arsenal numbers updated). Only loads **CUP** single use launchers.
- **Experimental survival fix for player APCs/Tanks**: less chance for a vehicle explosion
	- Health pool resets to 51% damage if vehicle is not destroyed, while keeping components broken.
	- Vehicle can be completely destroyed completely only with a high damaging shell or explosion (i.e. covering 49% of a health pool in one shot).
	- Only works on vehicles taken from the garage.
- **Ammobox generation revamped**: Ensures better consistency with fixed amounts, while types are still governed by settings.
- **Enemy bases**:
	- Experimental: spawn distance markers
	- Better selection of cars and broken armor to loot
	- Spawned vehicles don't disappear if you captured the base
- **Fast travel**:
	- Allows free location selection within a 500m radius of friendly markers (easier to click the marker)
	- Vehicles will stick to the roads, infantry can teleport precisely to the cursor.
	- Attacked but not captured markers can be freely teleported to.
- **CAS support** tuned down to avoid being called on infantry units.
- **Vehicle-based looting**: a complete overhaul of Loot to Vehicle for ACE and Antistasi Extended mod, requires **ACE3**
	- Uses ACE action on the vehicles to gather loot
	- CBA Settings: Configure Addons -> Antistasi Ultimate
	- Reworked to gather one container at the time
	- Allows several players to loot the same location is a fraction of the time, and into the same vehicle without duping items
	- Properly handles the dropped weapons
	- Properly handles the surrender crates (and Reammo Boxes in general)
	- Properly interrupts the gathering on Esc/Win
	- Improved information on the progress
- **Persistent corpses**:
	- Corpses remain in the world, ensuring no loot is lost (removed automatically by the loot vehicle).
	- That also should improve performace by reducing amount of postmortem threads to 0.
	- Wrecks are configured to be managed by the mission garbage collector
- **[WIP] FIAradio && revealToPlayer**: On a resource tick there is a change to intercept enemy communications and show enemies on the map.
	- Original script was trying to show enemy squad leaders to the commander by using reveal command, but that only works for a fraction of a second.
	- Currently if revealX is true (i.e. communications intercepted), enemy squad leaders are shown with markers on the map for each player (in 15 seconds updates).
	- Markers also correctly apply marker type, depending on the vehicle.
	- Hides squads sharing the same vehicle.
	- Vehicle markers improved visibility.
- **[WIP] Smaller drones**: Requires separate mods for now, including **"GX-Drones"** and **"Multiple Drones in Inventory"**.

## [Features](https://github.com/SilenceIsFatto/A3-Antistasi-Ultimate/wiki/Features)

## Credits
- Original Mission by barbolani
- Antistasi Community Edition by Official Antistasi Community
- Magrepack by Outlawled, R3vo and OOster
- HALs_Store by HallyG, R3vo and barman75
- DRO by mbrdmn
- Discord Rich Presence by ConnorAU
- Antistasi Plus (fork of Community) by Socrates
- Antistasi Ultimate (fork of Plus) by the [Antistasi Ultimate Dev Team](https://github.com/SilenceIsFatto/A3-Antistasi-Ultimate/wiki/Developers)
- Loot to vehicle for ACE & Antistasi by Bear and Extended by dawidseksi

## Additional Icons Credits
<div>
<a target="_blank" href="https://icons8.com/icon/12212/hdd">HDD</a> icon by <a target="_blank" href="https://icons8.com">Icons8</a>
<br/>
<a target="_blank" href="https://icons8.com/icon/17932/walkie-talkie">Walkie Talkie</a> icon by <a target="_blank" href="https://icons8.com">Icons8</a>
</div>
