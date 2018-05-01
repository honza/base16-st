/*
* base16-railscasts-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Ryan Bates (http://railscasts.com)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#272935", /* base01 */
  "#da4939", /* base08 */
  "#a5c261", /* base0B */
  "#ffc66d", /* base0A */
  "#6d9cbe", /* base0D */
  "#bc9458", /* base0F */
  "#519f50", /* base0C */
  "#f4f1ed", /* base06 */
  "#2b2b2b", /* base00 */
  "#cc7833", /* base09 */
  "#3a4055", /* base02 */
  "#5a647e", /* base03 */
  "#d4cfc9", /* base04 */
  "#b6b3eb", /* base0E */
  "#e6e1dc", /* base05 */
  "#f9f7f3", /* base07 */
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
