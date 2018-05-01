/*
* base16-brewer-theme.h 
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors:
*
* Scheme: Timothée Poisot (http://github.com/tpoisot)
* Template: Honza Pokorny <me@honza.ca>
*
*/

static const char *colorname[] = {
  "#2e2f30", /* base01 */
  "#e31a1c", /* base08 */
  "#31a354", /* base0B */
  "#dca060", /* base0A */
  "#3182bd", /* base0D */
  "#b15928", /* base0F */
  "#80b1d3", /* base0C */
  "#dadbdc", /* base06 */
  "#0c0d0e", /* base00 */
  "#e6550d", /* base09 */
  "#515253", /* base02 */
  "#737475", /* base03 */
  "#959697", /* base04 */
  "#756bb1", /* base0E */
  "#b7b8b9", /* base05 */
  "#fcfdfe", /* base07 */
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
