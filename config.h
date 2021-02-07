/* user and group to drop privileges to */
static const char *user  = "maxwell";
static const char *group = "maxwell";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";

/*Blur*/
static const int blurRadius=5;
static const int pixelSize=5;
/*toggle blur*/
#define BLUR
#define PIXELATION
