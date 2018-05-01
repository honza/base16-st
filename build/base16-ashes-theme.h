/*
* base16-ashes-theme.h 
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
  "#393f45", /* base01 */
  "#c7ae95", /* base08 */
  "#95c7ae", /* base0B */
  "#aec795", /* base0A */
  "#ae95c7", /* base0D */
  "#c79595", /* base0F */
  "#95aec7", /* base0C */
  "#dfe2e5", /* base06 */
  "#1c2023", /* base00 */
  "#c7c795", /* base09 */
  "#565e65", /* base02 */
  "#747c84", /* base03 */
  "#adb3ba", /* base04 */
  "#c795ae", /* base0E */
  "#c7ccd1", /* base05 */
  "#f3f4f5", /* base07 */
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
