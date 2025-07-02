#include <stdio.h>
#include <string.h>
#include "../include/fxansi_4bit.h"

#define ANSI_ESCAPE "\033["

// example: build_ansi("red", "bold", "blue") -> "\033[91;44m"
const char *build_ansi(const char *fg_color_name, const char *bold_str, const char *bg_color_name)
{
    static char buffer[30];

    int fg_color = -1, bg_color = -1, bold = 0;

    if (fg_color_name)
    {
        if (strcasecmp(fg_color_name, "black") == 0)
            fg_color = 0;
        else if (strcasecmp(fg_color_name, "red") == 0)
            fg_color = 1;
        else if (strcasecmp(fg_color_name, "green") == 0)
            fg_color = 2;
        else if (strcasecmp(fg_color_name, "yellow") == 0)
            fg_color = 3;
        else if (strcasecmp(fg_color_name, "blue") == 0)
            fg_color = 4;
        else if (strcasecmp(fg_color_name, "magenta") == 0)
            fg_color = 5;
        else if (strcasecmp(fg_color_name, "cyan") == 0)
            fg_color = 6;
        else if (strcasecmp(fg_color_name, "white") == 0)
            fg_color = 7;
    }

    if (bg_color_name)
    {
        if (strcasecmp(bg_color_name, "black") == 0)
            bg_color = 0;
        else if (strcasecmp(bg_color_name, "red") == 0)
            bg_color = 1;
        else if (strcasecmp(bg_color_name, "green") == 0)
            bg_color = 2;
        else if (strcasecmp(bg_color_name, "yellow") == 0)
            bg_color = 3;
        else if (strcasecmp(bg_color_name, "blue") == 0)
            bg_color = 4;
        else if (strcasecmp(bg_color_name, "magenta") == 0)
            bg_color = 5;
        else if (strcasecmp(bg_color_name, "cyan") == 0)
            bg_color = 6;
        else if (strcasecmp(bg_color_name, "white") == 0)
            bg_color = 7;
    }

    if (bold_str)
    {
        if (strcasecmp(bold_str, "bold") == 0 || strcasecmp(bold_str, "true") == 0 || strcmp(bold_str, "1") == 0 || strcasecmp(bold_str, "on") == 0)
        {
            bold = 1;
        }
    }

    if (fg_color == -1)
        fg_color = 7;

    int fg_code = bold ? 90 + fg_color : 30 + fg_color;

    if (bg_color >= 0 && bg_color <= 7)
    {
        int bg_code = 40 + bg_color;
        snprintf(buffer, sizeof(buffer), ANSI_ESCAPE "%d;%dm", fg_code, bg_code);
    }
    else
    {
        snprintf(buffer, sizeof(buffer), ANSI_ESCAPE "%dm", fg_code);
    }

    return buffer;
}

const char *build_ansi_fg(const char *fg_color_name)
{
    return build_ansi(fg_color_name, NULL, NULL);
}

const char *build_ansi_bg(const char *bg_color_name)
{
    return build_ansi(NULL, NULL, bg_color_name);
}
