#include "misc_conf.h"
#if  USE_FONT_SYMBOL_30_FEEDBACK != 0
#include <stdint.h>
#include "../lv_misc/lv_font.h"

/*Store the image of the letters (glyph) */
static const uint8_t symbol_30_feedback_bitmap[] = 
{
    // ASCII: 57408, char width: 13
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x18,  // -----------OO...
    0x00, 0x38,  // ----------OOO...
    0x00, 0x78,  // ---------OOOO...
    0x00, 0xf8,  // --------OOOOO...
    0x01, 0xf8,  // -------OOOOOO...
    0x03, 0xf8,  // ------OOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0xff, 0xf8,  // OOOOOOOOOOOOO...
    0x07, 0xf8,  // -----OOOOOOOO...
    0x03, 0xf8,  // ------OOOOOOO...
    0x01, 0xf8,  // -------OOOOOO...
    0x00, 0xf8,  // --------OOOOO...
    0x00, 0x78,  // ---------OOOO...
    0x00, 0x38,  // ----------OOO...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...
    0x00, 0x00,  // -------------...

    // ASCII: 57409, char width: 19
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x18, 0x00,  // -----------OO------.....
    0x00, 0x38, 0x00,  // ----------OOO------.....
    0x00, 0x78, 0x00,  // ---------OOOO------.....
    0x00, 0xf8, 0x00,  // --------OOOOO------.....
    0x01, 0xf8, 0x00,  // -------OOOOOO------.....
    0x03, 0xf8, 0x00,  // ------OOOOOOO------.....
    0xff, 0xf8, 0x80,  // OOOOOOOOOOOOO---O--.....
    0xff, 0xf9, 0xc0,  // OOOOOOOOOOOOO--OOO-.....
    0xff, 0xf8, 0xe0,  // OOOOOOOOOOOOO---OOO.....
    0xff, 0xf8, 0x60,  // OOOOOOOOOOOOO----OO.....
    0xff, 0xf8, 0x60,  // OOOOOOOOOOOOO----OO.....
    0xff, 0xf8, 0xe0,  // OOOOOOOOOOOOO---OOO.....
    0xff, 0xf9, 0xc0,  // OOOOOOOOOOOOO--OOO-.....
    0xff, 0xf9, 0xc0,  // OOOOOOOOOOOOO--OOO-.....
    0x07, 0xf8, 0x00,  // -----OOOOOOOO------.....
    0x03, 0xf8, 0x00,  // ------OOOOOOO------.....
    0x01, 0xf8, 0x00,  // -------OOOOOO------.....
    0x00, 0xf8, 0x00,  // --------OOOOO------.....
    0x00, 0x78, 0x00,  // ---------OOOO------.....
    0x00, 0x38, 0x00,  // ----------OOO------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....
    0x00, 0x00, 0x00,  // -------------------.....

    // ASCII: 57410, char width: 28
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x10, 0x00,  // -------------------O--------....
    0x00, 0x00, 0x3c, 0x00,  // ------------------OOOO------....
    0x00, 0x18, 0x0f, 0x00,  // -----------OO-------OOOO----....
    0x00, 0x38, 0x07, 0x80,  // ----------OOO--------OOOO---....
    0x00, 0x78, 0x61, 0x80,  // ---------OOOO----OO----OO---....
    0x00, 0xf8, 0x71, 0xc0,  // --------OOOOO----OOO---OOO--....
    0x01, 0xf8, 0x38, 0xe0,  // -------OOOOOO-----OOO---OOO-....
    0x03, 0xf8, 0x1c, 0x60,  // ------OOOOOOO------OOO---OO-....
    0xff, 0xf8, 0x8c, 0x60,  // OOOOOOOOOOOOO---O---OO---OO-....
    0xff, 0xf9, 0xce, 0x70,  // OOOOOOOOOOOOO--OOO--OOO--OOO....
    0xff, 0xf8, 0xe6, 0x30,  // OOOOOOOOOOOOO---OOO--OO---OO....
    0xff, 0xf8, 0x66, 0x30,  // OOOOOOOOOOOOO----OO--OO---OO....
    0xff, 0xf8, 0x66, 0x30,  // OOOOOOOOOOOOO----OO--OO---OO....
    0xff, 0xf8, 0xe6, 0x30,  // OOOOOOOOOOOOO---OOO--OO---OO....
    0xff, 0xf8, 0xc6, 0x30,  // OOOOOOOOOOOOO---OO---OO---OO....
    0xff, 0xf9, 0xce, 0x70,  // OOOOOOOOOOOOO--OOO--OOO--OOO....
    0x07, 0xf8, 0x1c, 0x60,  // -----OOOOOOOO------OOO---OO-....
    0x01, 0xf8, 0x38, 0xe0,  // -------OOOOOO-----OOO---OOO-....
    0x00, 0xf8, 0x70, 0xc0,  // --------OOOOO----OOO----OO--....
    0x00, 0x78, 0x61, 0xc0,  // ---------OOOO----OO----OOO--....
    0x00, 0x38, 0x03, 0x80,  // ----------OOO---------OOO---....
    0x00, 0x18, 0x0f, 0x00,  // -----------OO-------OOOO----....
    0x00, 0x00, 0x1e, 0x00,  // -------------------OOOO-----....
    0x00, 0x00, 0x18, 0x00,  // -------------------OO-------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....
    0x00, 0x00, 0x00, 0x00,  // ----------------------------....

    // ASCII: 57411, char width: 30
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x07, 0x80, 0x00,  // -------------OOOO-------------..
    0x00, 0x07, 0x80, 0x00,  // -------------OOOO-------------..
    0x00, 0x0f, 0xc0, 0x00,  // ------------OOOOOO------------..
    0x00, 0x1f, 0xe0, 0x00,  // -----------OOOOOOOO-----------..
    0x00, 0x1f, 0xe0, 0x00,  // -----------OOOOOOOO-----------..
    0x00, 0x3f, 0xf0, 0x00,  // ----------OOOOOOOOOO----------..
    0x00, 0x3f, 0xf0, 0x00,  // ----------OOOOOOOOOO----------..
    0x00, 0x7f, 0xf8, 0x00,  // ---------OOOOOOOOOOOO---------..
    0x00, 0x78, 0x78, 0x00,  // ---------OOOO----OOOO---------..
    0x00, 0xf8, 0x7c, 0x00,  // --------OOOOO----OOOOO--------..
    0x00, 0xf8, 0x7c, 0x00,  // --------OOOOO----OOOOO--------..
    0x01, 0xf8, 0x7e, 0x00,  // -------OOOOOO----OOOOOO-------..
    0x01, 0xf8, 0x7e, 0x00,  // -------OOOOOO----OOOOOO-------..
    0x03, 0xf8, 0x7f, 0x00,  // ------OOOOOOO----OOOOOOO------..
    0x07, 0xf8, 0x7f, 0x80,  // -----OOOOOOOO----OOOOOOOO-----..
    0x07, 0xf8, 0x7f, 0x80,  // -----OOOOOOOO----OOOOOOOO-----..
    0x0f, 0xf8, 0x7f, 0xc0,  // ----OOOOOOOOO----OOOOOOOOO----..
    0x0f, 0xff, 0xff, 0xc0,  // ----OOOOOOOOOOOOOOOOOOOOOO----..
    0x1f, 0xff, 0xff, 0xe0,  // ---OOOOOOOOOOOOOOOOOOOOOOOO---..
    0x1f, 0xf8, 0x7f, 0xe0,  // ---OOOOOOOOOO----OOOOOOOOOO---..
    0x3f, 0xf8, 0x7f, 0xf0,  // --OOOOOOOOOOO----OOOOOOOOOOO--..
    0x3f, 0xf8, 0x7f, 0xf0,  // --OOOOOOOOOOO----OOOOOOOOOOO--..
    0x7f, 0xf8, 0x7f, 0xf8,  // -OOOOOOOOOOOO----OOOOOOOOOOOO-..
    0x7f, 0xff, 0xff, 0xf8,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOO-..
    0xff, 0xff, 0xff, 0xfc,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO..
    0xff, 0xff, 0xff, 0xfc,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO..
    0x7f, 0xff, 0xff, 0xf8,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOO-..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..
    0x00, 0x00, 0x00, 0x00,  // ------------------------------..

    // ASCII: 57412, char width: 24
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x08, 0x00, 0x00,  // ----O-------------------
    0x3c, 0x00, 0x00,  // --OOOO------------------
    0x7e, 0x00, 0x00,  // -OOOOOO-----------------
    0x7e, 0x00, 0x00,  // -OOOOOO-----------------
    0xff, 0x00, 0x00,  // OOOOOOOO----------------
    0xff, 0x00, 0x00,  // OOOOOOOO----------------
    0xff, 0x00, 0x00,  // OOOOOOOO----------------
    0xfe, 0x00, 0x00,  // OOOOOOO-----------------
    0xfc, 0x00, 0x00,  // OOOOOO------------------
    0x7c, 0x00, 0x00,  // -OOOOO------------------
    0x7c, 0x00, 0x00,  // -OOOOO------------------
    0x3e, 0x00, 0x00,  // --OOOOO-----------------
    0x3e, 0x00, 0x00,  // --OOOOO-----------------
    0x1f, 0x00, 0x00,  // ---OOOOO----------------
    0x1f, 0x80, 0x00,  // ---OOOOOO---------------
    0x0f, 0xc0, 0x00,  // ----OOOOOO--------------
    0x07, 0xe0, 0x70,  // -----OOOOOO------OOO----
    0x03, 0xf8, 0xfc,  // ------OOOOOOO---OOOOOO--
    0x01, 0xff, 0xfe,  // -------OOOOOOOOOOOOOOOO-
    0x00, 0xff, 0xff,  // --------OOOOOOOOOOOOOOOO
    0x00, 0x7f, 0xfe,  // ---------OOOOOOOOOOOOOO-
    0x00, 0x1f, 0xfe,  // -----------OOOOOOOOOOOO-
    0x00, 0x07, 0xfc,  // -------------OOOOOOOOO--
    0x00, 0x01, 0xf0,  // ---------------OOOOO----
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------

    // ASCII: 57413, char width: 15
    0x00, 0x00,  // ---------------.
    0x00, 0x00,  // ---------------.
    0x0f, 0xc0,  // ----OOOOOO-----.
    0x1f, 0xc0,  // ---OOOOOOO-----.
    0x1f, 0xc0,  // ---OOOOOOO-----.
    0x1f, 0x80,  // ---OOOOOO------.
    0x3f, 0x80,  // --OOOOOOO------.
    0x3f, 0x80,  // --OOOOOOO------.
    0x3f, 0x00,  // --OOOOOO-------.
    0x3f, 0x06,  // --OOOOOO-----OO.
    0x7f, 0x7e,  // -OOOOOOO-OOOOOO.
    0x7f, 0xfc,  // -OOOOOOOOOOOOO-.
    0x7f, 0xfc,  // -OOOOOOOOOOOOO-.
    0x7f, 0xf8,  // -OOOOOOOOOOOO--.
    0xff, 0xf8,  // OOOOOOOOOOOOO--.
    0xff, 0xf0,  // OOOOOOOOOOOO---.
    0xf0, 0xf0,  // OOOO----OOOO---.
    0x01, 0xf0,  // -------OOOOO---.
    0x01, 0xe0,  // -------OOOO----.
    0x01, 0xe0,  // -------OOOO----.
    0x01, 0xc0,  // -------OOO-----.
    0x03, 0xc0,  // ------OOOO-----.
    0x03, 0x80,  // ------OOO------.
    0x03, 0x80,  // ------OOO------.
    0x03, 0x00,  // ------OO-------.
    0x07, 0x00,  // -----OOO-------.
    0x06, 0x00,  // -----OO--------.
    0x06, 0x00,  // -----OO--------.
    0x04, 0x00,  // -----O---------.
    0x04, 0x00,  // -----O---------.

    // ASCII: 57414, char width: 30
    0x00, 0x03, 0x00, 0x00,  // --------------OO--------------..
    0x00, 0x07, 0x00, 0x00,  // -------------OOO--------------..
    0x00, 0x07, 0x80, 0x00,  // -------------OOOO-------------..
    0x00, 0x1f, 0xe0, 0x00,  // -----------OOOOOOOO-----------..
    0x00, 0x7f, 0xf8, 0x00,  // ---------OOOOOOOOOOOO---------..
    0x00, 0xff, 0xfc, 0x00,  // --------OOOOOOOOOOOOOO--------..
    0x01, 0xff, 0xfe, 0x00,  // -------OOOOOOOOOOOOOOOO-------..
    0x01, 0xff, 0xfe, 0x00,  // -------OOOOOOOOOOOOOOOO-------..
    0x03, 0xff, 0xfe, 0x00,  // ------OOOOOOOOOOOOOOOOO-------..
    0x03, 0xff, 0xfe, 0x00,  // ------OOOOOOOOOOOOOOOOO-------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x03, 0xff, 0xff, 0x00,  // ------OOOOOOOOOOOOOOOOOO------..
    0x07, 0xff, 0xff, 0x80,  // -----OOOOOOOOOOOOOOOOOOOO-----..
    0x07, 0xff, 0xff, 0x80,  // -----OOOOOOOOOOOOOOOOOOOO-----..
    0x0f, 0xff, 0xff, 0x80,  // ----OOOOOOOOOOOOOOOOOOOOO-----..
    0x0f, 0xff, 0xff, 0xc0,  // ----OOOOOOOOOOOOOOOOOOOOOO----..
    0x1f, 0xff, 0xff, 0xe0,  // ---OOOOOOOOOOOOOOOOOOOOOOOO---..
    0x3f, 0xff, 0xff, 0xf0,  // --OOOOOOOOOOOOOOOOOOOOOOOOOO--..
    0x7f, 0xff, 0xff, 0xf8,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOO-..
    0x7f, 0xff, 0xff, 0xf8,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOO-..
    0x3f, 0xff, 0xff, 0xf0,  // --OOOOOOOOOOOOOOOOOOOOOOOOOO--..
    0x00, 0x1f, 0xe0, 0x00,  // -----------OOOOOOOO-----------..
    0x00, 0x1f, 0xe0, 0x00,  // -----------OOOOOOOO-----------..
    0x00, 0x09, 0xc0, 0x00,  // ------------O--OOO------------..
    0x00, 0x07, 0x80, 0x00,  // -------------OOOO-------------..

    // ASCII: 57415, char width: 24
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x0f,  // --------------------OOOO
    0x00, 0x00, 0x3e,  // ------------------OOOOO-
    0x00, 0x00, 0xfe,  // ----------------OOOOOOO-
    0x00, 0x03, 0xfc,  // --------------OOOOOOOO--
    0x00, 0x0f, 0xfc,  // ------------OOOOOOOOOO--
    0x00, 0x3f, 0xf8,  // ----------OOOOOOOOOOO---
    0x00, 0xff, 0xf8,  // --------OOOOOOOOOOOOO---
    0x03, 0xff, 0xf0,  // ------OOOOOOOOOOOOOO----
    0x0f, 0xff, 0xf0,  // ----OOOOOOOOOOOOOOOO----
    0x3f, 0xff, 0xe0,  // --OOOOOOOOOOOOOOOOO-----
    0xff, 0xff, 0xe0,  // OOOOOOOOOOOOOOOOOOO-----
    0xff, 0xff, 0xc0,  // OOOOOOOOOOOOOOOOOO------
    0x00, 0x3f, 0xc0,  // ----------OOOOOOOO------
    0x00, 0x1f, 0x80,  // -----------OOOOOO-------
    0x00, 0x1f, 0x80,  // -----------OOOOOO-------
    0x00, 0x1f, 0x00,  // -----------OOOOO--------
    0x00, 0x1f, 0x00,  // -----------OOOOO--------
    0x00, 0x1e, 0x00,  // -----------OOOO---------
    0x00, 0x1e, 0x00,  // -----------OOOO---------
    0x00, 0x1c, 0x00,  // -----------OOO----------
    0x00, 0x1c, 0x00,  // -----------OOO----------
    0x00, 0x18, 0x00,  // -----------OO-----------
    0x00, 0x18, 0x00,  // -----------OO-----------
    0x00, 0x00, 0x00,  // ------------------------
    0x00, 0x00, 0x00,  // ------------------------

    // ASCII: 57416, char width: 34
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x1f, 0xff, 0x00, 0x00,  // -----------OOOOOOOOOOOOO----------......
    0x00, 0xff, 0xff, 0xe0, 0x00,  // --------OOOOOOOOOOOOOOOOOOO-------......
    0x03, 0xff, 0xff, 0xf8, 0x00,  // ------OOOOOOOOOOOOOOOOOOOOOOO-----......
    0x0f, 0xff, 0xff, 0xfc, 0x00,  // ----OOOOOOOOOOOOOOOOOOOOOOOOOO----......
    0x1f, 0xf8, 0x03, 0xff, 0x00,  // ---OOOOOOOOOO---------OOOOOOOOOO--......
    0x3f, 0xc0, 0x00, 0x7f, 0x80,  // --OOOOOOOO---------------OOOOOOOO-......
    0x7f, 0x07, 0xfc, 0x1f, 0xc0,  // -OOOOOOO-----OOOOOOOOO-----OOOOOOO......
    0x3c, 0x3f, 0xff, 0x87, 0x80,  // --OOOO----OOOOOOOOOOOOOOO----OOOO-......
    0x18, 0xff, 0xff, 0xe3, 0x00,  // ---OO---OOOOOOOOOOOOOOOOOOO---OO--......
    0x01, 0xff, 0xff, 0xf0, 0x00,  // -------OOOOOOOOOOOOOOOOOOOOO------......
    0x03, 0xfe, 0x0f, 0xf8, 0x00,  // ------OOOOOOOOO-----OOOOOOOOO-----......
    0x03, 0xf0, 0x01, 0xf8, 0x00,  // ------OOOOOO-----------OOOOOO-----......
    0x01, 0xc3, 0xf0, 0x70, 0x00,  // -------OOO----OOOOOO-----OOO------......
    0x00, 0x0f, 0xfe, 0x00, 0x00,  // ------------OOOOOOOOOOO-----------......
    0x00, 0x1f, 0xff, 0x00, 0x00,  // -----------OOOOOOOOOOOOO----------......
    0x00, 0x3f, 0xff, 0x80, 0x00,  // ----------OOOOOOOOOOOOOOO---------......
    0x00, 0x1f, 0x1f, 0x00, 0x00,  // -----------OOOOO---OOOOO----------......
    0x00, 0x0c, 0x06, 0x00, 0x00,  // ------------OO-------OO-----------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x01, 0xf0, 0x00, 0x00,  // ---------------OOOOO--------------......
    0x00, 0x01, 0xf0, 0x00, 0x00,  // ---------------OOOOO--------------......
    0x00, 0x00, 0xe0, 0x00, 0x00,  // ----------------OOO---------------......
    0x00, 0x00, 0x40, 0x00, 0x00,  // -----------------O----------------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......
    0x00, 0x00, 0x00, 0x00, 0x00,  // ----------------------------------......

    // ASCII: 57417, char width: 39
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xcf, 0xff, 0xff, 0xff, 0x30,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO--OO---.
    0xcf, 0xff, 0xff, 0xff, 0x38,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO--OOO--.
    0xcf, 0xff, 0xff, 0xff, 0x3c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO--OOOO-.
    0xcf, 0xff, 0xff, 0xff, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO----OO-.
    0xcf, 0xff, 0xff, 0xff, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO----OO-.
    0xcf, 0xff, 0xff, 0xff, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO----OO-.
    0xcf, 0xff, 0xff, 0xff, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO----OO-.
    0xcf, 0xff, 0xff, 0xff, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO----OO-.
    0xcf, 0xff, 0xff, 0xff, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO----OO-.
    0xcf, 0xff, 0xff, 0xff, 0x1c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO---OOO-.
    0xcf, 0xff, 0xff, 0xff, 0x3c,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO--OOOO-.
    0xcf, 0xff, 0xff, 0xff, 0x38,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO--OOO--.
    0xcf, 0xff, 0xff, 0xff, 0x30,  // OO--OOOOOOOOOOOOOOOOOOOOOOOOOOOO--OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.

    // ASCII: 57418, char width: 39
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xcf, 0xff, 0xff, 0x80, 0x30,  // OO--OOOOOOOOOOOOOOOOOOOOO---------OO---.
    0xcf, 0xff, 0xff, 0x80, 0x38,  // OO--OOOOOOOOOOOOOOOOOOOOO---------OOO--.
    0xcf, 0xff, 0xff, 0x80, 0x3c,  // OO--OOOOOOOOOOOOOOOOOOOOO---------OOOO-.
    0xcf, 0xff, 0xff, 0x80, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOO-----------OO-.
    0xcf, 0xff, 0xff, 0x80, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOO-----------OO-.
    0xcf, 0xff, 0xff, 0x80, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOO-----------OO-.
    0xcf, 0xff, 0xff, 0x80, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOO-----------OO-.
    0xcf, 0xff, 0xff, 0x80, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOO-----------OO-.
    0xcf, 0xff, 0xff, 0x80, 0x0c,  // OO--OOOOOOOOOOOOOOOOOOOOO-----------OO-.
    0xcf, 0xff, 0xff, 0x80, 0x1c,  // OO--OOOOOOOOOOOOOOOOOOOOO----------OOO-.
    0xcf, 0xff, 0xff, 0x80, 0x3c,  // OO--OOOOOOOOOOOOOOOOOOOOO---------OOOO-.
    0xcf, 0xff, 0xff, 0x80, 0x38,  // OO--OOOOOOOOOOOOOOOOOOOOO---------OOO--.
    0xcf, 0xff, 0xff, 0x80, 0x30,  // OO--OOOOOOOOOOOOOOOOOOOOO---------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.

    // ASCII: 57419, char width: 39
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xcf, 0xff, 0xe0, 0x00, 0x30,  // OO--OOOOOOOOOOOOOOO---------------OO---.
    0xcf, 0xff, 0xe0, 0x00, 0x38,  // OO--OOOOOOOOOOOOOOO---------------OOO--.
    0xcf, 0xff, 0xe0, 0x00, 0x3c,  // OO--OOOOOOOOOOOOOOO---------------OOOO-.
    0xcf, 0xff, 0xe0, 0x00, 0x0c,  // OO--OOOOOOOOOOOOOOO-----------------OO-.
    0xcf, 0xff, 0xe0, 0x00, 0x0c,  // OO--OOOOOOOOOOOOOOO-----------------OO-.
    0xcf, 0xff, 0xe0, 0x00, 0x0c,  // OO--OOOOOOOOOOOOOOO-----------------OO-.
    0xcf, 0xff, 0xe0, 0x00, 0x0c,  // OO--OOOOOOOOOOOOOOO-----------------OO-.
    0xcf, 0xff, 0xe0, 0x00, 0x0c,  // OO--OOOOOOOOOOOOOOO-----------------OO-.
    0xcf, 0xff, 0xe0, 0x00, 0x0c,  // OO--OOOOOOOOOOOOOOO-----------------OO-.
    0xcf, 0xff, 0xe0, 0x00, 0x1c,  // OO--OOOOOOOOOOOOOOO----------------OOO-.
    0xcf, 0xff, 0xe0, 0x00, 0x3c,  // OO--OOOOOOOOOOOOOOO---------------OOOO-.
    0xcf, 0xff, 0xe0, 0x00, 0x38,  // OO--OOOOOOOOOOOOOOO---------------OOO--.
    0xcf, 0xff, 0xe0, 0x00, 0x30,  // OO--OOOOOOOOOOOOOOO---------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.

    // ASCII: 57420, char width: 39
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xcf, 0xf8, 0x00, 0x00, 0x30,  // OO--OOOOOOOOO---------------------OO---.
    0xcf, 0xf8, 0x00, 0x00, 0x38,  // OO--OOOOOOOOO---------------------OOO--.
    0xcf, 0xf8, 0x00, 0x00, 0x3c,  // OO--OOOOOOOOO---------------------OOOO-.
    0xcf, 0xf8, 0x00, 0x00, 0x0c,  // OO--OOOOOOOOO-----------------------OO-.
    0xcf, 0xf8, 0x00, 0x00, 0x0c,  // OO--OOOOOOOOO-----------------------OO-.
    0xcf, 0xf8, 0x00, 0x00, 0x0c,  // OO--OOOOOOOOO-----------------------OO-.
    0xcf, 0xf8, 0x00, 0x00, 0x0c,  // OO--OOOOOOOOO-----------------------OO-.
    0xcf, 0xf8, 0x00, 0x00, 0x0c,  // OO--OOOOOOOOO-----------------------OO-.
    0xcf, 0xf8, 0x00, 0x00, 0x0c,  // OO--OOOOOOOOO-----------------------OO-.
    0xcf, 0xf8, 0x00, 0x00, 0x1c,  // OO--OOOOOOOOO----------------------OOO-.
    0xcf, 0xf8, 0x00, 0x00, 0x3c,  // OO--OOOOOOOOO---------------------OOOO-.
    0xcf, 0xf8, 0x00, 0x00, 0x38,  // OO--OOOOOOOOO---------------------OOO--.
    0xcf, 0xf8, 0x00, 0x00, 0x30,  // OO--OOOOOOOOO---------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.

    // ASCII: 57421, char width: 39
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x38,  // OO--------------------------------OOO--.
    0xc0, 0x00, 0x00, 0x00, 0x3c,  // OO--------------------------------OOOO-.
    0xc0, 0x00, 0x00, 0x00, 0x0c,  // OO----------------------------------OO-.
    0xc0, 0x00, 0x00, 0x00, 0x0c,  // OO----------------------------------OO-.
    0xc0, 0x00, 0x00, 0x00, 0x0c,  // OO----------------------------------OO-.
    0xc0, 0x00, 0x00, 0x00, 0x0c,  // OO----------------------------------OO-.
    0xc0, 0x00, 0x00, 0x00, 0x0c,  // OO----------------------------------OO-.
    0xc0, 0x00, 0x00, 0x00, 0x0c,  // OO----------------------------------OO-.
    0xc0, 0x00, 0x00, 0x00, 0x1c,  // OO---------------------------------OOO-.
    0xc0, 0x00, 0x00, 0x00, 0x3c,  // OO--------------------------------OOOO-.
    0xc0, 0x00, 0x00, 0x00, 0x38,  // OO--------------------------------OOO--.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xc0, 0x00, 0x00, 0x00, 0x30,  // OO--------------------------------OO---.
    0xff, 0xff, 0xff, 0xff, 0xf0,  // OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO---.
    0x7f, 0xff, 0xff, 0xff, 0xe0,  // -OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO----.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.
    0x00, 0x00, 0x00, 0x00, 0x00,  // ---------------------------------------.

    // ASCII: 57422, char width: 26
    0x00, 0x7f, 0x80, 0x00,  // ---------OOOOOOOO---------......
    0x01, 0xff, 0xe0, 0x00,  // -------OOOOOOOOOOOO-------......
    0x07, 0xff, 0xf0, 0x00,  // -----OOOOOOOOOOOOOOO------......
    0x07, 0xf7, 0xf8, 0x00,  // -----OOOOOOO-OOOOOOOO-----......
    0x0f, 0xf3, 0xfc, 0x00,  // ----OOOOOOOO--OOOOOOOO----......
    0x1f, 0xf1, 0xfc, 0x00,  // ---OOOOOOOOO---OOOOOOO----......
    0x1f, 0xf0, 0xfe, 0x00,  // ---OOOOOOOOO----OOOOOOO---......
    0x1f, 0xf0, 0x7e, 0x00,  // ---OOOOOOOOO-----OOOOOO---......
    0x3e, 0xf2, 0x3e, 0x00,  // --OOOOO-OOOO--O---OOOOO---......
    0x3c, 0x73, 0x1f, 0x00,  // --OOOO---OOO--OO---OOOOO--......
    0x3e, 0x33, 0x1f, 0x00,  // --OOOOO---OO--OO---OOOOO--......
    0x3f, 0x12, 0x3f, 0x00,  // --OOOOOO---O--O---OOOOOO--......
    0x3f, 0x80, 0x7f, 0x00,  // --OOOOOOO--------OOOOOOO--......
    0x3f, 0xc0, 0xff, 0x00,  // --OOOOOOOO------OOOOOOOO--......
    0x3f, 0xe1, 0xff, 0x00,  // --OOOOOOOOO----OOOOOOOOO--......
    0x3f, 0xe1, 0xff, 0x00,  // --OOOOOOOOO----OOOOOOOOO--......
    0x3f, 0xc0, 0xff, 0x00,  // --OOOOOOOO------OOOOOOOO--......
    0x3f, 0x80, 0x7f, 0x00,  // --OOOOOOO--------OOOOOOO--......
    0x3f, 0x12, 0x3f, 0x00,  // --OOOOOO---O--O---OOOOOO--......
    0x3e, 0x33, 0x1f, 0x00,  // --OOOOO---OO--OO---OOOOO--......
    0x3c, 0x73, 0x1f, 0x00,  // --OOOO---OOO--OO---OOOOO--......
    0x3e, 0xf2, 0x3e, 0x00,  // --OOOOO-OOOO--O---OOOOO---......
    0x1f, 0xf0, 0x7e, 0x00,  // ---OOOOOOOOO-----OOOOOO---......
    0x1f, 0xf0, 0xfe, 0x00,  // ---OOOOOOOOO----OOOOOOO---......
    0x1f, 0xf1, 0xfc, 0x00,  // ---OOOOOOOOO---OOOOOOO----......
    0x0f, 0xf3, 0xfc, 0x00,  // ----OOOOOOOO--OOOOOOOO----......
    0x07, 0xf7, 0xf8, 0x00,  // -----OOOOOOO-OOOOOOOO-----......
    0x07, 0xff, 0xf0, 0x00,  // -----OOOOOOOOOOOOOOO------......
    0x01, 0xff, 0xe0, 0x00,  // -------OOOOOOOOOOOO-------......
    0x00, 0x7f, 0x80, 0x00,  // ---------OOOOOOOO---------......
};

/*Store the start index of the glyphs in the bitmap array*/
static const uint32_t symbol_30_feedback_map[] = 
{
     0, 60, 150, 270, 390, 480, 540, 660, 
    750, 900, 1050, 1200, 1350, 1500, 1650, 
};

/*Store the width (column count) of each glyph*/
static const uint8_t symbol_30_feedback_width[] = 
{
    13, 19, 28, 30, 24, 15, 30, 24, 
    34, 39, 39, 39, 39, 39, 26, 
};

font_t font_symbol_30_feedback = 
{
#if TXT_UTF8 == 0
    208,        /*First letter's unicode */
    223,        /*Last letter's unicode */
#else
    57408,        /*First letter's unicode */
    57423,        /*Last letter's unicode */
#endif
    30,        /*Letters height (rows) */
    symbol_30_feedback_bitmap,    /*Glyph's bitmap*/
    symbol_30_feedback_map,    /*Glyph start indexes in the bitmap*/
    symbol_30_feedback_width,    /*Glyph widths (columns)*/
};

#endif /*SYMBOL_30_FEEDBACK_H*/