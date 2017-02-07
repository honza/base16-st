/*
* base16-pico-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: PICO-8 (http://www.lexaloffle.com/pico-8.php)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#1d2b53", /* base01 */
  "#ff004d", /* base08 */
  "#00e756", /* base0B */
  "#fff024", /* base0A */
  "#83769c", /* base0D */
  "#ffccaa", /* base0F */
  "#29adff", /* base0C */
  "#c2c3c7", /* base06 */
  "#000000", /* base00 */
  "#ffa300", /* base09 */
  "#7e2553", /* base02 */
  "#008751", /* base03 */
  "#ab5236", /* base04 */
  "#ff77a8", /* base0E */
  "#5f574f", /* base05 */
  "#fff1e8", /* base07 */
};

/*
* Default colors (colorname index)
* foreground, background, cursor, reverse
* cursor
*/
static unsigned int defaultfg = 12;
static unsigned int defaultbg = 8;
static unsigned int defaultcs = 14;
static unsigned int defaultrcs = 15;
