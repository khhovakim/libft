#ifndef __Color__
#define __Color__

/// Reset
static const char *const RESET = "\033[0m";

/// Regular Colors
static const char *const BLACK = "\033[0;30m";
static const char *const RED = "\033[0;31m";
static const char *const GREEN = "\033[0;32m";
static const char *const YELLOW = "\033[0;33m";
static const char *const BLUE = "\033[0;34m";
static const char *const MAGENTA = "\033[0;35m";
static const char *const CYAN = "\033[0;36m";
static const char *const WHITE = "\033[0;37m";

/// Bold
static const char *const BOLD_BLACK = "\033[1;30m";
static const char *const BOLD_RED = "\033[1;31m";
static const char *const BOLD_GREEN = "\033[1;32m";
static const char *const BOLD_YELLOW = "\033[1;33m";
static const char *const BOLD_BLUE = "\033[1;34m";
static const char *const BOLD_MAGENTA = "\033[1;35m";
static const char *const BOLD_CYAN = "\033[1;36m";
static const char *const BOLD_WHITE = "\033[1;37m";

/// Underline
static const char *const UNDERLINE_RED = "\033[4;31m";
static const char *const UNDERLINE_GREEN = "\033[4;32m";
static const char *const UNDERLINE_YELLOW = "\033[4;33m";
static const char *const UNDERLINE_BLUE = "\033[4;34m";

/// Background
static const char *const BG_BLACK = "\033[40m";
static const char *const BG_RED = "\033[41m";
static const char *const BG_GREEN = "\033[42m";
static const char *const BG_YELLOW = "\033[43m";
static const char *const BG_BLUE = "\033[44m";
static const char *const BG_MAGENTA = "\033[45m";
static const char *const BG_CYAN = "\033[46m";
static const char *const BG_WHITE = "\033[47m";

/// High Intensity (Bright)
static const char *const BRIGHT_BLACK = "\033[0;90m";
static const char *const BRIGHT_RED = "\033[0;91m";
static const char *const BRIGHT_GREEN = "\033[0;92m";
static const char *const BRIGHT_YELLOW = "\033[0;93m";
static const char *const BRIGHT_BLUE = "\033[0;94m";
static const char *const BRIGHT_MAGENTA = "\033[0;95m";
static const char *const BRIGHT_CYAN = "\033[0;96m";
static const char *const BRIGHT_WHITE = "\033[0;97m";

#endif // __Color__
