/*
* base16-phd-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Hennig Hasemann (http://leetless.de/vim.html)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#2a3448", /* base01 */
  "#d07346", /* base08 */
  "#99bf52", /* base0B */
  "#fbd461", /* base0A */
  "#5299bf", /* base0D */
  "#b08060", /* base0F */
  "#72b9bf", /* base0C */
  "#dbdde0", /* base06 */
  "#061229", /* base00 */
  "#f0a000", /* base09 */
  "#4d5666", /* base02 */
  "#717885", /* base03 */
  "#9a99a3", /* base04 */
  "#9989cc", /* base0E */
  "#b8bbc2", /* base05 */
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
