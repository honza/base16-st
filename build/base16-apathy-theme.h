/*
* base16-apathy-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Jannik Siebert (https://github.com/janniks)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#0b342d", /* base01 */
  "#3e9688", /* base08 */
  "#883e96", /* base0B */
  "#3e4c96", /* base0A */
  "#96883e", /* base0D */
  "#3e965b", /* base0F */
  "#963e4c", /* base0C */
  "#a7cec8", /* base06 */
  "#031a16", /* base00 */
  "#3e7996", /* base09 */
  "#184e45", /* base02 */
  "#2b685e", /* base03 */
  "#5f9c92", /* base04 */
  "#4c963e", /* base0E */
  "#81b5ac", /* base05 */
  "#d2e7e4", /* base07 */
};

/*
* Default colors (colorname index)
* foreground, background, cursor, reverse
* cursor
*/
unsigned int defaultfg = 12;
unsigned int defaultbg = 8;
static unsigned int defaultcs = 14;
static unsigned int defaultrcs = 15;
