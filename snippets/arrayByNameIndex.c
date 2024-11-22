const char* RC5ButtonNames[] = {
    [POWER] = "POWER",
    [SOURCE] = "SOURCE",
    [STEREO] = "STEREO",
    [TXT] = "TXT",
    [ACTIVE_CONTROL] = "ACTIVE CONTROL",
    [DEMO] = "DEMO",
    [RED] = "RED",
    [GREEN] = "GREEN",
    [YELLOW] = "YELLOW",
    [BLUE] = "BLUE",
    [SURROUND] = "SURROUND",
    [FORMAT] = "FORMAT",
    [MENU] = "MENU",
    [MODE] = "MODE",
    [UP] = "UP",
    [RIGHT] = "RIGHT",
    [DOWN] = "DOWN",
    [LEFT] = "LEFT",
    [OK] = "OK",
    [VOL_UP] = "VOLUME UP",
    [VOL_DOWN] = "VOLUME DOWN",
    [CH_UP] = "CHANNEL UP",
    [CH_DOWN] = "CHANNEL DOWN",
    [MUTE] = "MUTE",
    [AV] = "AV",
    [STATUS] = "STATUS",
    [0x0] = "#0",
    [0x1] = "#1",
    [0x2] = "#2",
    [0x3] = "#3",
    [0x4] = "#4",
    [0x5] = "#5",
    [0x6] = "#6",
    [0x7] = "#7",
    [0x8] = "#8",
    [0x9] = "#9"
};

/*
    This is a C/C++ array declaration that maps RC5 remote control button codes to their 
    corresponding text names. Let's break it down:

    1. const char* - This declares an array of constant character pointers (strings)
    2. RC5ButtonNames[] - This is the name of the array
    3. The syntax [CODE] = "NAME" is using designated initializers, a C99 feature that allows you to initialize array elements at specific indices
    4. The array appears to be mapping numeric codes (like POWER, SOURCE, etc.) to their human-readable names. These codes are likely defined elsewhere in an enum or as #define constants

    // These would likely be defined somewhere in the code
    enum RC5_CODES {
        POWER,
        SOURCE,
        STEREO,
        // ... etc
    };

    The interesting part of this initialization is:

    Common remote control buttons are mapped to descriptive names (POWER → "POWER")
    Numeric buttons (0-9) are mapped using hexadecimal notation ([0x0] → "#0", [0x1] → "#1", etc.)
    The array can be accessed like:

    // Example usage
    printf("Button pressed: %s", RC5ButtonNames[POWER]); // Would print "POWER"

    This type of mapping is commonly used in:

    1. Remote control implementations
    2. Debug output/logging
    3. User interface display
    4. Converting machine codes to human-readable formats

    The RC5 protocol is a standard for infrared remote controls, commonly used by Philips and other manufacturers for consumer electronics.

*/
