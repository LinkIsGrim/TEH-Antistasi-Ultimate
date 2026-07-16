/*
    Author:
        MaxxLite / TEH

    Description:
        Adds local civilian dialog actions.

    Params:
        _unit <Default: ObjNull>

    Scope:
        Client

    Environment:
        Unscheduled

    Usage:
        [_unit] call A3A_fnc_dialogCiv;
*/

#include "..\..\script_component.hpp"
#include "dialogUtils.sqf"
FIX_LINE_NUMBERS()

params [["_unit", objNull]];

if (isNull _unit) exitWith {false};



_unit addAction [
    "Hello",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        private _question = selectRandom [
            "Hello.",
            "Hey.",
            "Can we talk?",
            "Got a minute?"
        ];

        [_caller, _caller, _question] call _sayToCaller;

        _target disableAI "PATH";
        _target lookAt _caller;
        _target playActionNow (selectRandom ["GestureHi","GestureHiB","GestureHiC"]);
        sleep 1;

        [_target, _caller, selectRandom [
            "Make it quick.",
            "All right, what do you want?",
            "Careful. People listen around here."
        ]] call _sayToCaller;

        _target setVariable ["TEH_DialogStarted", true, true];

        _target spawn {
            params ["_target"];
            sleep 60;
            if (alive _target) then {
                _target enableAI "PATH";
                _target doWatch objNull;
            };
        };
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    "alive _target && {alive _this} && {isNull objectParent _this} && {!(_target getVariable ['TEH_DialogStarted', false])}",
    10,
    false,
    "",
    ""
];

_unit addAction [
    "Ask about city",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        [_caller, _caller, selectRandom [
            "How are people holding up here?"
        ]] call _sayToCaller;
        _target lookAt _caller;

        sleep 1;

        if (_target getVariable ["TEH_RebelLoyalty", false]) then {
            _target playActionNow "gestureNod";
            [_target, _caller, selectRandom [
                "People get by. Quietly. That is how you survive around here.",
                "Most keep their heads down, but they are not blind.",
                "There are more friends here than the patrols think.",
                "Folks remember who helped when things got ugly.",
                "Nobody says much in the street, but doors open for the right people.",
                "The town bends when it has to. It has not broken yet.",
                "People are tired of uniforms deciding what counts as peace.",
                "Some smiles here are real. Some are for whoever is watching.",
                "You will find help here if you ask like a neighbor, not a commander.",
                "The mood is better than it looks. That is all I should say."
            ]] call _sayToCaller;
        } else {
            //_target playActionNow "gesturePoint";
            [_target, _caller, selectRandom [
                "People are alive. These days, that is already something.",
                "The soldiers keep order. Most people just want quiet.",
                "Nobody here needs more trouble walking through town.",
                "People talk less now. That is usually healthier.",
                "If you came looking for complaints, try somewhere braver.",
                "The town manages. It always manages.",
                "Everyone has work, worries, and no appetite for politics.",
                "Things are tense, but tense is better than burning.",
                "Most people know better than to pick sides in public.",
                "Ask too much and people will remember your face."
            ]] call _sayToCaller;
        };
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Ask about soldiers",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        [_caller, _caller, selectRandom [
            "What do you know about the soldiers nearby?",
            "Seen any patrols acting strange?",
            "Where do the troops usually move through?"
        ]] call _sayToCaller;
        _target lookAt _caller;
        sleep 1;

        if (_target getVariable ["TEH_CivSoldierIntelDone", false]) exitWith {
            [_target, _caller, "Already done. I told you everything I know."] call _sayToCaller;
            false
        };

        if (_target getVariable ["TEH_noIntel",true]) exitWith {
            [_target, _caller, selectRandom [
                "Enemy soldiers? Not anymore. The rebels pushed them out, and nobody here misses them.",
                "We have not seen their patrols in a while. These streets belong to the resistance now.",
                "If you are looking for occupiers, you are late. They stopped walking around here after the town changed hands."
            ]] call _sayToCaller;
        };

        if !(_target getVariable ["TEH_RebelLoyalty", false]) exitWith {
            _target playActionNow "gesturePoint";
            _target setVariable ["TEH_CivSoldierIntelDone", true, true];
            _target setVariable ["TEH_CivSoldierIntelSucceeded", false, true];
            if (random 100 > 66) then {
                [_target, _caller, selectRandom [
                    "The soldiers protect us from people asking questions like that.",
                    "No. I am not getting dragged into rebel business.",
                    "Talk to the checkpoint if you care so much."
                ]] call _sayToCaller;
            } else {
                [_target, _caller, selectRandom [
                    "Guards! Guards!",
                    "Malden Police, arrest this man!",
                    "Stop right there criminal scum!"
                ]] call _sayToCaller;
                _caller setCaptive false;
            };

            false
        };

        _target playActionNow "GesturePutDown";
        sleep 1;

        private _revealedZone = false;
        if ((missionNamespace getVariable ["hideEnemyMarkers", false]) && {!(isNil "A3U_fnc_revealRandomZones")} && {random 100 < 35}) then {
            [1, "A civilian has revealed a zone"] call A3U_fnc_revealRandomZones;
            _revealedZone = true;
        };

        if (_revealedZone) then {
            [_target, _caller, selectRandom [
                "There is a place they guard too carefully. I marked what I know.",
                "They keep sending trucks to one place. You should look there.",
                "I saw a patrol route that does not match their usual lies. Take a look."
            ]] call _sayToCaller;
        } else {
            private _intel = ["Civilian", Occupants] call A3A_fnc_selectIntel;
            private _intelMessage = switch (_intel) do {
                case 502: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_dealer1", "STR_antistasi_actions_talk_with_civ_success_dealer2"]};
                case 301: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_traitor1", "STR_antistasi_actions_talk_with_civ_success_traitor2"]};
                case 302: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_money1", "STR_antistasi_actions_talk_with_civ_success_money2"]};
                case 102: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_decryption1", "STR_antistasi_actions_talk_with_civ_success_decryption2"]};
                default {"STR_antistasi_actions_talk_with_civ_fail1"};
            };

            [_target, _caller, localize _intelMessage] call _sayToCaller;
        };

        _target setVariable ["TEH_CivSoldierIntelDone", true, true];
        _target setVariable ["TEH_CivSoldierIntelSucceeded", true, true];

        true
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Where do I get some firearms?",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller", "_getUnitTown", "_getTownVar", "_setTownVar", "_findTownCivs", "_describeContact"];

        [_caller, _caller, selectRandom [
            "Where do I get some firearms?",
            "If someone needed a gun around here, where would he start?",
            "I need something better than harsh language. Any idea where to find firearms?"
        ]] call _sayToCaller;

        _target lookAt _caller;
        sleep 1;

        // Non-loyal civilians either refuse or call for help.
        if !(_target getVariable ["TEH_RebelLoyalty", false]) exitWith {
            if (random 100 < 33) then {
                [_target, _caller, selectRandom [
                    "Guards! Guards!",
                    "Malden Police, arrest this man!",
                    "Stop right there criminal scum!"
                ]] call _sayToCaller;

                _caller setCaptive false;
            } else {
                [_target, _caller, selectRandom [
                    "I know nothing. I am a law-abiding citizen, unlike some people asking stupid questions.",
                    "Firearms? No. I obey the law. You should try it sometime.",
                    "Go away, provocateur. I have nothing to say to you.",
                    "I do not know anything about guns, rebels, or whatever trap this is.",
                    "Ask the soldiers. They have guns. I have common sense."
                ]] call _sayToCaller;
            };

            false
        };

        private _town = [_target] call _getUnitTown;
        private _joe = [_town, "CacheLead", objNull] call _getTownVar;
        private _bob = [_town, "CacheContact", objNull] call _getTownVar;

        // Loyal Joe points the player to Bob and turns Bob into a valid rebel contact.

        if (_target isEqualTo _joe && {!isNull _bob} && {alive _bob}) exitWith {
            private _dist = _bob distance2D getMarkerPos _town;
            private _distDesc = if (_dist < 100) then {
                                    "He usually hangs around the town center. Try the streets, shops, places where people pretend nothing is happening."
                                } else {
                                    if (_dist < 200) then {
                                        "He is probably somewhere near the edge of town. Look around the outskirts."
                                    } else {
                                        "Knowing him, he probably wandered too far again. Try outside town, fields, sheds, roads. He is bad at staying hidden and worse at staying put."
                                    };
                                };
            private _description = [_bob] call _describeContact;

            if (_joe getVariable ["TEH_CacheUsed",false]) then {
                [_target, _caller, format [
                    "I've told you already. Find Bob and ask about the crate. %1 He usually %2.",
                    _distDesc, _description
                ]] call _sayToCaller;
            } else {
                _bob setVariable ["TEH_RebelLoyalty", true, true];
                _bob setVariable ["TEH_CacheContactUnlocked", true, true];
                _joe setVariable ["TEH_CacheUsed",true,true];

                [_target, _caller, format [
                    "Hmm. Looks like you might actually use one. Find Bob and ask him about the crate. %1 He usually %2.",
                    _distDesc, _description
                ]] call _sayToCaller;
            };

            true
        };

        // Loyal Bob stops here. The next action is the password.
        if (_target isEqualTo _bob) exitWith {
            [_target, _caller, "Quiet, you fool. Did Joe send you? What's the password?"] call _sayToCaller;
            true
        };

        // Pickle Rick stops here.
        if (_target getVariable ["TEH_CivRole","none"] isEqualTo "Rick") exitWith {
            private _rickFirearmsLines = [
                "Yo, yo, keep your voice down. I might have something, if you have money.",
                "Firearms? Big word. Expensive word. You got cash?",
                "Maybe I know a guy. Maybe the guy is me. Maybe you should show me some money.",
                "Keep it quiet. I can get you a pistol. Nothing fancy, but it makes holes.",
                "I do not sell guns. That would be illegal. I accept donations and give lifestyle advice.",
                "Lower your voice. I have something small, ugly, and overpriced. Perfect for you."
            ];
            [_target, _caller, selectRandom _rickFirearmsLines] call _sayToCaller;
            true
        };

        // Ordinary loyal civilians use pre-rolled arms info.
        private _role = _target getVariable ["TEH_CivRole", ""];
        if (_role isEqualTo "") exitWith {
            private _armsInfo = _target getVariable ["TEH_ArmsInfo", "none"];

            switch (_armsInfo) do {
                case "bandits": {
                    [_target, _caller, selectRandom [
                        "There is a gang of gopniks in town. I do not think the police will cry if a sawed-off shotgun or two goes missing.",
                        "Some street wolves around here carry weapons. Dirty ones, but weapons. I doubt anyone important will miss them.",
                        "There are bandits in town. If they lose a shotgun, I suspect the law will survive somehow."
                    ]] call _sayToCaller;
                };

                case "rick": {
                    [_target, _caller, selectRandom [
                        "There is a resistance contact in town. His name is Rick. Pickle Rick. He always wears green. He can sell you a pistol.",
                        "Find Rick. People call him Pickle Rick. Green clothes, green hat, green everything. He might sell you a piece.",
                        "There is a man called Rick. Always dressed in green. Says it means nothing. He can get you a pistol."
                    ]] call _sayToCaller;
                };

                case "bob": {
                    [_target, _caller, selectRandom [
                        "I heard someone from our side lifted a crate of rifles from the army, but that is all I know. Ask around.",
                        "There was a rumor about a stolen military crate. Rifles, maybe. I am only selling you the rumor I bought.",
                        "Someone said our people got their hands on a box of rifles. No names, no details. Ask the locals."
                    ]] call _sayToCaller;
                };

                case "none";
                default {
                    [_target, _caller, selectRandom [
                        "I wish I knew. I heard the resistance is looking for fighters, but they expect you to bring your own gear.",
                        "If I knew where guns were, I would not be standing here empty-handed.",
                        "I would like to know that myself. People say Petros needs fighters, but fighters need equipment first."
                    ]] call _sayToCaller;
                };
            };

            true
        };

        // Loyal, but has some other role that does not handle firearms.
        [_target, _caller, selectRandom [
            "Not my business. And if it was, I would still say that.",
            "I hear things, but not that kind of thing.",
            "Wrong person. Ask someone with fewer reasons to stay quiet."
        ]] call _sayToCaller;

        false
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Bribe",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        private _price = missionNamespace getVariable ["TEH_CivBribePrice", 250];

        private _money = _caller getVariable ["moneyX", 0];
        if (_money < _price) exitWith {
            [_target, _caller, format ["Come back with %1 and we can pretend this talk never happened.", _price]] call _sayToCaller;
            false
        };

        _caller setVariable ["moneyX", _money - _price, (owner _caller)];
        _target setVariable ["TEH_RebelLoyalty", true, true];

		private _expenceText = format [
			localize "STR_comms_mp_givemoney",
			name _caller,
			_price, 
			A3A_faction_civ get "currencySymbol"
		];		
		[petros, "income", _expenceText] remoteExec ["A3A_fnc_commsMP", _caller];

        [_caller, _caller, format ["Here. %1. We understand each other?", _price]] call _sayToCaller;
        
        _target lookAt _caller;
        sleep 1;
        _target playActionNow "gestureNod";
        [_target, _caller, "For that? Sure. I always liked the rebels. Very quietly."] call _sayToCaller;

        true
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

true
