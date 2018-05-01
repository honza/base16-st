/*
* base16-monokai-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Wimer Hazenberg (http://www.monokai.nl)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#383830", /* base01 */
  "#f92672", /* base08 */
  "#a6e22e", /* base0B */
  "#f4bf75", /* base0A */
  "#66d9ef", /* base0D */
  "#cc6633", /* base0F */
  "#a1efe4", /* base0C */
  "#f5f4f1", /* base06 */
  "#272822", /* base00 */
  "#fd971f", /* base09 */
  "#49483e", /* base02 */
  "#75715e", /* base03 */
  "#a59f85", /* base04 */
  "#ae81ff", /* base0E */
  "#f8f8f2", /* base05 */
  "#f9f8f5", /* base07 */
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
