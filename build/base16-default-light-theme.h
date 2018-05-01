/*
* base16-default-light-theme.h 
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
  "#e8e8e8", /* base01 */
  "#ab4642", /* base08 */
  "#a1b56c", /* base0B */
  "#f7ca88", /* base0A */
  "#7cafc2", /* base0D */
  "#a16946", /* base0F */
  "#86c1b9", /* base0C */
  "#282828", /* base06 */
  "#f8f8f8", /* base00 */
  "#dc9656", /* base09 */
  "#d8d8d8", /* base02 */
  "#b8b8b8", /* base03 */
  "#585858", /* base04 */
  "#ba8baf", /* base0E */
  "#383838", /* base05 */
  "#181818", /* base07 */
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
