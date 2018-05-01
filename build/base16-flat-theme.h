/*
* base16-flat-theme.h 
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
  "#34495e", /* base01 */
  "#e74c3c", /* base08 */
  "#2ecc71", /* base0B */
  "#f1c40f", /* base0A */
  "#3498db", /* base0D */
  "#be643c", /* base0F */
  "#1abc9c", /* base0C */
  "#f5f5f5", /* base06 */
  "#2c3e50", /* base00 */
  "#e67e22", /* base09 */
  "#7f8c8d", /* base02 */
  "#95a5a6", /* base03 */
  "#bdc3c7", /* base04 */
  "#9b59b6", /* base0E */
  "#e0e0e0", /* base05 */
  "#ecf0f1", /* base07 */
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
