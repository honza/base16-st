/*
* base16-tube-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Jan T. Sott
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#1c3f95", /* base01 */
  "#ee2e24", /* base08 */
  "#00853e", /* base0B */
  "#ffd204", /* base0A */
  "#009ddc", /* base0D */
  "#b06110", /* base0F */
  "#85cebc", /* base0C */
  "#e7e7e8", /* base06 */
  "#231f20", /* base00 */
  "#f386a1", /* base09 */
  "#5a5758", /* base02 */
  "#737171", /* base03 */
  "#959ca1", /* base04 */
  "#98005d", /* base0E */
  "#d9d8d8", /* base05 */
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
