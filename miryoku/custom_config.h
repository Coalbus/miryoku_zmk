// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Add a new Miryoku layer named MACRO.
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE, "Base") \
MIRYOKU_X(EXTRA, "Extra") \
MIRYOKU_X(TAP, "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV, "Nav") \
MIRYOKU_X(MOUSE, "Mouse") \
MIRYOKU_X(MEDIA, "Media") \
MIRYOKU_X(NUM, "Num") \
MIRYOKU_X(SYM, "Sym") \
MIRYOKU_X(FUN, "Fun") \
MIRYOKU_X(MACRO, "Macro")

#define U_BASE 0
#define U_EXTRA 1
#define U_TAP 2
#define U_BUTTON 3
#define U_NAV 4
#define U_MOUSE 5
#define U_MEDIA 6
#define U_NUM 7
#define U_SYM 8
#define U_FUN 9
#define U_MACRO 10

// Your macro.
#define MIRYOKU_LAYER_MACRO \
&pork_sandwich,    &none,            &none,            &none,            &none,            &none,            &none,            &none,            &none,            &none,            \
&none,             &none,            &none,            &none,            &none,            &none,            &none,            &none,            &none,            &none,            \
&none,             &none,            &none,            &none,            &none,            &none,            &none,            &none,            &none,            &none,            \
U_NP,              U_NP,             &none,            &none,            &none,            &none,            &none,            &none,            U_NP,             U_NP

#define MIRYOKU_LAYERMAPPING_MACRO MIRYOKU_MAPPING

/ {
    macros {
        pork_sandwich: pork_sandwich {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;

            wait-ms = <40>;
            tap-ms = <40>;

            bindings
                = <&kp P &kp O &kp R &kp K>
                , <&macro_wait_time 500>
                , <&kp TAB>
                , <&macro_wait_time 500>
                , <&kp S &kp A &kp N &kp D &kp W &kp I &kp C &kp H>
                , <&kp ENTER>
                ;
        };
    };

    combos {
        compatible = "zmk,combos";

        combo_macro_layer {
            timeout-ms = <75>;
            key-positions = <38 39>;
            bindings = <&sl U_MACRO>;
            layers = <U_BASE>;
        };
    };
};
