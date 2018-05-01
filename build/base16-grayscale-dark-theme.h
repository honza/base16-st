/*
* base16-grayscale-dark-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Alexandre Gavioli (https://github.com/Alexx2/)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#252525", /* base01 */
  "#7c7c7c", /* base08 */
  "#8e8e8e", /* base0B */
  "#a0a0a0", /* base0A */
  "#686868", /* base0D */
  "#5e5e5e", /* base0F */
  "#868686", /* base0C */
  "#e3e3e3", /* base06 */
  "#101010", /* base00 */
  "#999999", /* base09 */
  "#464646", /* base02 */
  "#525252", /* base03 */
  "#ababab", /* base04 */
  "#747474", /* base0E */
  "#b9b9b9", /* base05 */
  "#f7f7f7", /* base07 */
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
