/*
* base16-chalk-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Chris Kempson (http://chriskempson.com)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#202020", /* base01 */
  "#fb9fb1", /* base08 */
  "#acc267", /* base0B */
  "#ddb26f", /* base0A */
  "#6fc2ef", /* base0D */
  "#deaf8f", /* base0F */
  "#12cfc0", /* base0C */
  "#e0e0e0", /* base06 */
  "#151515", /* base00 */
  "#eda987", /* base09 */
  "#303030", /* base02 */
  "#505050", /* base03 */
  "#b0b0b0", /* base04 */
  "#e1a3ee", /* base0E */
  "#d0d0d0", /* base05 */
  "#f5f5f5", /* base07 */
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
