/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 0;       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int colorprompt = 1; /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"dejavusansmono nerd font:size=12",
	"inconsolata:size=12",
	"ubuntu mono:size=12",
	"monospace:size=12"
};

/* -p  option; prompt to the left of input field */
static const char *prompt      = NULL;

static const char *colors[SchemeLast][2] = {
	/*                   fg         bg    */
	/* dark theme */
	[SchemeNorm] = { "#efefef", "#222222" },
	[SchemeSel] = { "#efefef", "#3333cc" },
	[SchemeOut] = { "#cc0000", "#00ffcc" },
	/* light theme */
	[SchemeNorm] = { "#222222", "#dedede" },
	[SchemeSel] = { "#dedede", "#3333cc" },
	[SchemeOut] = { "#cc0000", "#00ffcc" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 16;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
