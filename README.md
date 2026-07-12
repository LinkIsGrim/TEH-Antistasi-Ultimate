<div>
  <h1>TEH Antistasi Ultimate</h1>
  <p>
    <i>An Arma 3 persistent multiplayer scenario about gorilla warfare tactics.</i>
    <br><br>
	<b>Important notes:</b>
	<br>1) ACE3 is a strict dependency currently. Several new functionalities in this mod use ACE actions or expect ACE items.
	<br>2) This mod is oriented toward small cooperative servers (1-10 players maybe), some features may be abused in a malicious way, or reduce difficulty too much for bigger crowd.
	<br>3) I mostly balance gameplay around CUP and NIArms mods. Compatibility of other supported mods (RHS, Tier1, etc) is the same as in original ASU.
	</p>
  <p align=center>
    <b>Latest build in <a target="_blank" href=https://steamcommunity.com/sharedfiles/filedetails/?id=3476520930>Steam Workshop</a></b>
  </p>
</div>

## TEH Changes

- **Changes to the trader**
	- All Vanilla/CUP/NIArms primary weapon variants available for buying.
	- Fixed prices (epoch + features + caliber), and compatibility fixes for items.
	- Item details overhaul with more information from the config.
	- Reworked item hashing (the original algorithm caused frequent collisions).
	- Sell prices for armor are calculated from the armor class
	- Sell button now sells whole stack of items automatically, no need to punch the number
	- Trader search mission appears closer to mid-game (about war level 4), not from the first ever Intel
- **Jeroen Arsenal QoL improvements**:
	- Detailed tooltips, improved sorting
	- Bullets and magazines are now calculated separately (e.g. you can reuse your 75 Rnd 7.62x39 drums if you have a stockpile of respective ammo from other salvaged AK mags). On reload empty mag is saved in the player inventory.
	- Trader sells primary ammo in bulk, without overcharging for magazines (ammo is given based on currently loaded magazine in your rifle. Explosive, submunition, grenades can't be ordered).
	- Convert Mag service allows to convert magazines within same model pool (or throw out unwanted empty mags, while saving ammo)
	- Repack primary ammo self action (ACE) - streamlines repacking of primary magazines with a suitable ammo from other sources. Requires a Toolkit or a Defusal Kit to work with the belts.
	- Unrestricted vehicle loading (ignores both weight and volume)
	- Unrestricted unit load (ignores weight). You can now pack a full backpack without external shenanigans.
- **Equipping streamlined**:
	- respawn equipment now doesn't leave armor to a chance - if you have stocks, you'll get helmet and vest
	- New action: Quick Resupply (restocks medicine and reloads existing mags), available on Arsenal and friendly flags
	- New action: Equip last loadout (last loaded or saved loadout), available on arsenal
	- New ACE action: you can apply your loadout to friendly AI near the Arsenal. Loadout name should start with "AI<space>" e.g. "AI tanky Petros"
- **Starter Kits**:
	- Vehicles from the garage now come with a starter kit, including medicine, and up to 600 bullets of primary ammo (requires loaded mag).
	- On player (re)spawn Quick Equip is executed automatically. Equips random eligible weapon and its default ammo, ACE medicine and equips Armor and Helmet (if availble) when player using random loadout (i.e. respective rebel loadout is not specified by commander).
	- NB! Doesn't work on War Level 1, when starting with Empty Arsenal challenge!
- **Undercover Rework**:
	- All the undercover checks are knowledge based (enemies have to know about your presense).
	- Offroading doesn't mark your car as reported.
	- Driving in a civilian vehicle wearing military gear or weapons will remove undercover if the enemies are close enough.
	- Some equipped weapons can be concealed from nearby enemies when sitting in the car (handguns, and short rifles (short barrel or bullpup) with no muzzle attachments).
	- Roadblocks are no longer luck based - instead they check the cargo. Illegal items can be hidden in backpacks or containers in the car. AI passengers will always fail the check.
- **Survival fix for player APCs/Tanks**
	- Health pool resets to 51% damage on hit if vehicle is not destroyed, while keeping components broken.
	- Vehicle can be completely destroyed completely only with a high damaging shell or explosion (i.e. covering 49% of a health pool in one shot).
	- Only works on vehicles taken from the garage.
- **Second Chance**: when "Allow players to take control of AI units while unconscious" parameter is set to "Yes", on being shot down you automatically take control of nearby AI unit to save yourself (once per knockdown)
	- Skipped if the wound is fatal
	- Known issue: Original body is invulnerable  while controlling an AI (but still bleeds out and can drown, AI control ends shortly before death)
	- Known issue: Return to original body may break if additional out-of-body experience is involved (e.g. Zeus).
	- Timeout is postponed until owner is no longer incapacitated.
	- If AI is knocked down, control is lost, no additional attempts provided.
	- AI doesn't have to be in your squad, nearby infantry can help too (200m)
	- There is still a little chance for an AI medic to patch you even after that
	- if there is no AI nearby, one can be spawned near the rebel car (costs 1 HR and 100 currency)
- **Enemy bases**:
	- Spawn distance markers (hidden when markers are hidden)
	- Spawned vehicles and ammo boxes don't disappear if you captured the base and left (even if marker undergoes despawn)
	- Spawned vehicles variety (armed vehicles spawn damaged)
	- Enemies do not get AI disabled during a pre-despawn state to avoid frozen enemies
	- Enemies do not automatically surrender when the location is seized. Instead they'll rush back to the flag.
- **Fast travel**:
	- Allows free location selection within a 500m radius of friendly markers (still, only works if the CLOSEST marker is friendly)
	- Vehicles will stick to the roads, infantry can teleport precisely to the cursor.
	- Attacked but not captured markers can be freely teleported to.
	- Teleportation range zones shown on the map.
	- Rally point cost is reduced to 25 per charge.
	- Partial squad fast travel (statics and vehicles without driver stay behind)
	- [Experimental] fast travel to rebel vehicles (doesn't work for stolen vehicles though)
- **Vehicle-based looting**: a complete overhaul of Loot to Vehicle for ACE and Antistasi Extended mod
	- Uses ACE action on the vehicles to gather loot in 5-5000m radius (depends on enemy proximity, distance to nearest enemy minus 50m)
	- Allows several players to loot the same location, and into the same vehicle to save time.
	- Properly handles compacting CUP launchers into storage mode.
	- 1% chance of Jack-in-the-box
	- *Known issue*: CBA settings are mostly ignored (except probably speed)
- **Intel**:
	- Rebalanced Intel distribution (Intel is mostly useful now + included AU flavor messages for failed attempts)
	- SL corpses create Intel marker on the map when using LootVehicle (use Pack action on the corpse to avoid stuck Intel)
	- Enemy Radio Keys are saved and loaded properly between sessions
- **Persistent loot**:
	- Corpses remain in the world, ensuring no loot is lost (removed automatically by the loot vehicle)
	- Wrecks are configured to be managed by the mission garbage collector
	- Wrecks can be removed from the action or ACE menu (very close range, be careful with cook-offs and fire)
	- Enemy vehicles required to return to base to despawn
	- [Experimental] Vehicles and wrecks can be sold anywhere (health affects payout, enemy distance check)
	- [Experimental] Spawn anchoring: rebel vehicles now anchor enemy markers from despawning (will be marked green during Fast Travel)
- **Squad Markers**:
	- Enemy squad leaders (or their vehicle) are shown with respective markers on the map for each player, not only the commander.
	- Update interval is 15 seconds.
	- Hides squads sharing the same vehicle.
	- Hides SpecOps squads.
	- Hides infantry and statics more than 1.5km away from rebel bases.
	- Map stand at the HQ has a "Launch UAV" action, which consumes AR-2 drone back pack but removes 1.5km limitation, showing all normal squads on the map
- **Anti-anti-air**:
	- Enemies will attempt to destroy long range AA (e.g. radar + SAM site) if vehicle is sniped from 2 or more kilometers away.
	- Support corridors (aka Carrier markers) are moved dynamically to allow less predictable attack vectors
	- Enemy Air QRF disembark range increased from 200-400 to 500-800 to increase survivability against MANPADs and binoculars.
- **Challeges**: Optional challenges can be found in AI and Rebel balance section
	- Enemies will send small infantry squads to rebel markers in order to recapture nearby rebel locations or weaken their garrisons (It's chance based at 1% + 0.25% per war level per marker each minute IF there is an inactive enemy base in 2km radius.)
	- Civilians guide the police if they see an armed rebel.
	- Enemy outposts and ports are protected by antitank mines to mitigate vehicle rush
	- Starting gear option: start with handguns or without weapons (hand grenades remain), or with completely empty arsenal.
	- Only Randoms: loot weapons and handguns are sold instead of storaged in the arsenal. Unlock new weapons by gathering Intel.
- **Towns expansion (WIP)**:
	- Completely new civilian interaction system, with quests and special NPCs
	- Urban warfare: with SWAT teams (optional challenge) and gangsters, towns are now a formidable obstacle to conquer
	- Military Administration removes undercover
	- Military Administration lootbox is now less prone to farm
- **Balance**:
	- New HR gain multiplier parameter (works for recruitment of surrendered enemies and resque type missions) - to trade off early attacks losses
	- Flexible rebel garrisons squads: now with proper command chain (each Squad Leader makes own squad, or additional SLs are promoted if squad is too large)
	- [Experimental] new support types for rebel faction
	- [Experimental] Friendly AIs are allowed to pilot aircrafts
- **Tower Defense**
	- New construction options: Scaffolds and Cargo Platforms (bottom of the list at the builder boxes)
	- When deployed, use "Align Platforms" action on the scaffold to snap nearby towers to the scaffold
	- You can continue building on top of the platforms (toggle Alt and Shift in the Building planner), e.g. sandbags walls. If they appear angled, use "Align Platforms" again.
	- Known issue: builder can destroy static weapons. Build the defenses first, and then bring weapons upstairs.
- **Global Mobilization**:
	- Epoch restricted CUP & Vanilla weapons list to appear in the loot
	- German names for the NPC
	- Deutsche Mark (DM) as currency on Weferlingen
	- Known issue: Trader will still offer all the futuristic weapons and items
- **Mods support**:
	- **[Point Campfire] (https://steamcommunity.com/sharedfiles/filedetails/?id=3747933298)** - popular Point Campfire extension is supported thru a compatibility patch.
	- **[GX-Drones](https://steamcommunity.com/sharedfiles/filedetails/?id=3460981677)** - a variety of deployable and 40mm UGL launched drones. If new game is started with the mod installed, some drones are added to the arsenal automatically. Otherwise some are available at the trader under "GX-Drones"
	- **[X26 Tasers](https://steamcommunity.com/sharedfiles/filedetails/?id=2515852876)** - if installed, available to every faction at the new game start. Otherwise can be found at the trader under "X26 Tasers".
	- **[Expanded Anti Air](https://steamcommunity.com/sharedfiles/filedetails/?id=3399739919)** - a variety of AA and radar trucks. SAM truck is available at the trader.
	- **[76N6 Clam Shell Radar](https://steamcommunity.com/sharedfiles/filedetails/?id=3131324729)** - automated rotating radar with high viewpoint which helps to spot things above the trees. Both variants available at the trader.
	- **[TRG 7.62x39 mm Variant](https://steamcommunity.com/sharedfiles/filedetails/?id=2549598652)** - rechambered TRG40, TRG41 and TRG41 GL
	- **[Sig MCX Spear](https://steamcommunity.com/sharedfiles/filedetails/?id=3261100509)** - 6.8x51mm assault rifle (aka XM7)
- **Misc changes**
	- **Poor Man's Radar**: When binocular items is equipped use "Reveal target" action to share target info to nearby allies (e.g. outpost AA guns).
	- **Ammobox** generation revamped: Ensures better consistency with fixed amounts.
	- **CAS support** tuned down to avoid being called on infantry units.
	- **UGL snipers** tuned down - more dispersion and AI using it in 150-300m range
	- **Dynamic Mission Distance** - new parameter which scales possible mission distance from HQ by the War Level.
	- **Boxer truck capacity** - is increased significantly, for comfortable shopping.

## Check also original [ASU Features](https://github.com/SilenceIsFatto/A3-Antistasi-Ultimate/wiki/Features)

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
