/*
* base16-bright-theme.h 
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
  "#303030", /* base01 */
  "#fb0120", /* base08 */
  "#a1c659", /* base0B */
  "#fda331", /* base0A */
  "#6fb3d2", /* base0D */
  "#be643c", /* base0F */
  "#76c7b7", /* base0C */
  "#f5f5f5", /* base06 */
  "#000000", /* base00 */
  "#fc6d24", /* base09 */
  "#505050", /* base02 */
  "#b0b0b0", /* base03 */
  "#d0d0d0", /* base04 */
  "#d381c3", /* base0E */
  "#e0e0e0", /* base05 */
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
