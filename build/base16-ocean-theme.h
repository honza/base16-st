/*
* base16-ocean-theme.h 
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
  "#343d46", /* base01 */
  "#bf616a", /* base08 */
  "#a3be8c", /* base0B */
  "#ebcb8b", /* base0A */
  "#8fa1b3", /* base0D */
  "#ab7967", /* base0F */
  "#96b5b4", /* base0C */
  "#dfe1e8", /* base06 */
  "#2b303b", /* base00 */
  "#d08770", /* base09 */
  "#4f5b66", /* base02 */
  "#65737e", /* base03 */
  "#a7adba", /* base04 */
  "#b48ead", /* base0E */
  "#c0c5ce", /* base05 */
  "#eff1f5", /* base07 */
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
