#ifndef FXANSI_H
#define FXANSI_H

#ifdef __cplusplus
extern "C" {
#endif

// ==========================
// === Functions ===
// ==========================
const char* build_ansi(const char *fg_color_name, const char *bold_str, const char *bg_color_name);
const char *build_ansi_fg(const char *fg_color_name);
const char *build_ansi_bg(const char *bg_color_name);

// ==========================
// === Reset & Basic ===
// ==========================
#define ANSI_ESC                "\033"
#define ANSI_RESET              ANSI_ESC "[0m"
#define ANSI_HARD_RESET         ANSI_ESC "c"

// ==========================
// === Clear Screen/Line ===
// ==========================
#define ANSI_CLEAR_SCREEN       ANSI_ESC "[2J"
#define ANSI_CLEAR_LINE         ANSI_ESC "[2K"
#define ANSI_CLEAR_LINE_TO_END  ANSI_ESC "[K"
#define ANSI_CURSOR_HOME        ANSI_ESC "[H"

// ==========================
// === Cursor Visibility ===
// ==========================
#define ANSI_HIDE_CURSOR        ANSI_ESC "[?25l"
#define ANSI_SHOW_CURSOR        ANSI_ESC "[?25h"

// ==========================
// === Cursor Save/Restore ===
// ==========================
#define ANSI_SAVE_CURSOR        ANSI_ESC "[s"
#define ANSI_RESTORE_CURSOR     ANSI_ESC "[u"

// ==========================
// === Scrolling ===
// ==========================
#define ANSI_SCROLL_UP          ANSI_ESC "[S"
#define ANSI_SCROLL_DOWN        ANSI_ESC "[T"

// ==========================
// === Cursor Movement ===
// ==========================
#define ANSI_GOTO(row, col)     ANSI_ESC "[" #row ";" #col "H"
#define ANSI_MOVE_UP(n)         ANSI_ESC "[" #n "A"
#define ANSI_MOVE_DOWN(n)       ANSI_ESC "[" #n "B"
#define ANSI_MOVE_RIGHT(n)      ANSI_ESC "[" #n "C"
#define ANSI_MOVE_LEFT(n)       ANSI_ESC "[" #n "D"

// ==========================
// === Styles (On) ===
// ==========================
#define ANSI_BOLD               ANSI_ESC "[1m"
#define ANSI_DIM                ANSI_ESC "[2m"
#define ANSI_UNDERLINE          ANSI_ESC "[4m"
#define ANSI_BLINK              ANSI_ESC "[5m"
#define ANSI_INVERT             ANSI_ESC "[7m"
#define ANSI_HIDDEN             ANSI_ESC "[8m"

// ==========================
// === Styles (Off) ===
// ==========================
#define ANSI_NORMAL_INTENSITY   ANSI_ESC "[22m"
#define ANSI_UNDERLINE_OFF      ANSI_ESC "[24m"
#define ANSI_BLINK_OFF          ANSI_ESC "[25m"
#define ANSI_INVERT_OFF         ANSI_ESC "[27m"
#define ANSI_HIDDEN_OFF         ANSI_ESC "[28m"

// ==========================
// === Foreground Colors (Normal) ===
// ==========================
#define ANSI_FG_BLACK           ANSI_ESC "[30m"
#define ANSI_FG_RED             ANSI_ESC "[31m"
#define ANSI_FG_GREEN           ANSI_ESC "[32m"
#define ANSI_FG_YELLOW          ANSI_ESC "[33m"
#define ANSI_FG_BLUE            ANSI_ESC "[34m"
#define ANSI_FG_MAGENTA         ANSI_ESC "[35m"
#define ANSI_FG_CYAN            ANSI_ESC "[36m"
#define ANSI_FG_WHITE           ANSI_ESC "[37m"

// ==========================
// === Foreground Colors (Bright) ===
// ==========================
#define ANSI_FG_BRIGHT_BLACK    ANSI_ESC "[90m"
#define ANSI_FG_BRIGHT_RED      ANSI_ESC "[91m"
#define ANSI_FG_BRIGHT_GREEN    ANSI_ESC "[92m"
#define ANSI_FG_BRIGHT_YELLOW   ANSI_ESC "[93m"
#define ANSI_FG_BRIGHT_BLUE     ANSI_ESC "[94m"
#define ANSI_FG_BRIGHT_MAGENTA  ANSI_ESC "[95m"
#define ANSI_FG_BRIGHT_CYAN     ANSI_ESC "[96m"
#define ANSI_FG_BRIGHT_WHITE    ANSI_ESC "[97m"

// ==========================
// === Background Colors (Normal) ===
// ==========================
#define ANSI_BG_BLACK           ANSI_ESC "[40m"
#define ANSI_BG_RED             ANSI_ESC "[41m"
#define ANSI_BG_GREEN           ANSI_ESC "[42m"
#define ANSI_BG_YELLOW          ANSI_ESC "[43m"
#define ANSI_BG_BLUE            ANSI_ESC "[44m"
#define ANSI_BG_MAGENTA         ANSI_ESC "[45m"
#define ANSI_BG_CYAN            ANSI_ESC "[46m"
#define ANSI_BG_WHITE           ANSI_ESC "[47m"

// ==========================
// === Background Colors (Bright) ===
// ==========================
#define ANSI_BG_BRIGHT_BLACK    ANSI_ESC "[100m"
#define ANSI_BG_BRIGHT_RED      ANSI_ESC "[101m"
#define ANSI_BG_BRIGHT_GREEN    ANSI_ESC "[102m"
#define ANSI_BG_BRIGHT_YELLOW   ANSI_ESC "[103m"
#define ANSI_BG_BRIGHT_BLUE     ANSI_ESC "[104m"
#define ANSI_BG_BRIGHT_MAGENTA  ANSI_ESC "[105m"
#define ANSI_BG_BRIGHT_CYAN     ANSI_ESC "[106m"
#define ANSI_BG_BRIGHT_WHITE    ANSI_ESC "[107m"

#ifdef __cplusplus
}
#endif

#endif
