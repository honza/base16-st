/*
* base16-twilight-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: David Hart (https://github.com/hartbit)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#323537", /* base01 */
  "#cf6a4c", /* base08 */
  "#8f9d6a", /* base0B */
  "#f9ee98", /* base0A */
  "#7587a6", /* base0D */
  "#9b703f", /* base0F */
  "#afc4db", /* base0C */
  "#c3c3c3", /* base06 */
  "#1e1e1e", /* base00 */
  "#cda869", /* base09 */
  "#464b50", /* base02 */
  "#5f5a60", /* base03 */
  "#838184", /* base04 */
  "#9b859d", /* base0E */
  "#a7a7a7", /* base05 */
  "#ffffff", /* base07 */
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
