/*
* base16-material-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Nate Peterson
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#2e3c43", /* base01 */
  "#f07178", /* base08 */
  "#c3e88d", /* base0B */
  "#ffcb6b", /* base0A */
  "#82aaff", /* base0D */
  "#ff5370", /* base0F */
  "#89ddff", /* base0C */
  "#eeffff", /* base06 */
  "#263238", /* base00 */
  "#f78c6c", /* base09 */
  "#314549", /* base02 */
  "#546e7a", /* base03 */
  "#b2ccd6", /* base04 */
  "#c792ea", /* base0E */
  "#eeffff", /* base05 */
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
