/*
  Mag type change dialog
*/

#include "ids.inc"

import RscCombo;

class RscMagConvertDialog {
    idd = A3A_IDD_MAGCONVERTDIALOG;
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
        class Background: RscText {
            x = 0.2; y = 0.3;
            w = 0.6; h = 0.25;
            colorBackground[] = {0,0,0,0.7};
        };
    };

    class controls {
        class Title: RscText {
            text = "Magazine Conversion";
            x = 0.21; y = 0.31;
            w = 0.58; h = 0.04;
            sizeEx = 0.04;
        };

        class SourceCombo: RscCombo {
            idc = A3A_IDC_MAGCONVERT_SOURCE;
            x = 0.21; y = 0.36;
            w = 0.58; h = 0.04;
            onLBSelChanged = "_this call A3A_fnc_magConvert_onSourceChanged;";
        };

        class TargetCombo: RscCombo {
            idc = A3A_IDC_MAGCONVERT_TARGET;
            x = 0.21; y = 0.42;
            w = 0.58; h = 0.04;
        };

        class ConvertButton: RscButton {
            idc = A3A_IDC_MAGCONVERT_BUTTON;
            text = "Convert";
            x = 0.21; y = 0.49;
            w = 0.58; h = 0.04;
            action = "[] call A3A_fnc_magConvert_convert;";
        };
    };
};