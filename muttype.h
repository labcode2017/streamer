/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -t muttype.gperf  */
/* Computed positions: -k'1,6' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "muttype.gperf"

#include <string.h>

enum {
	A_TO__,
	A_TO_C,
	A_TO_G,
	A_TO_T,
	C_TO_A,
	C_TO__,
	C_TO_G,
	C_TO_T,
	G_TO_A,
	G_TO_C,
	G_TO__,
	G_TO_T,
	T_TO_A,
	T_TO_C,
	T_TO_G,
	T_TO__,
	__TO_A,
	__TO_C,
	__TO_G,
	__TO_T,
	OTHER
};

struct mtype{
	char *name;
	int offset;
};
#line 36 "muttype.gperf"
struct mtype;

#define TOTAL_KEYWORDS 21
#define MIN_WORD_LENGTH 5
#define MAX_WORD_LENGTH 6
#define MIN_HASH_VALUE 5
#define MAX_HASH_VALUE 56
/* maximum key range = 52, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 18, 10, 15,  8,  3,
       5, 57, 57,  0, 25, 57, 57, 57, 57, 57,
      57,  0, 57, 57, 57, 57, 25,  0, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57, 57, 57, 57,
      57, 57, 57, 57, 57, 57, 57
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]+1];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct mtype *
in_word_set (register const char *str, register unsigned int len)
{
  static struct mtype wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""},
#line 58 "muttype.gperf"
      {"other",  OTHER},
#line 49 "muttype.gperf"
      {"g_to_t", G_TO_T},
      {""}, {""},
#line 45 "muttype.gperf"
      {"c_to_t", C_TO_T},
      {""},
#line 47 "muttype.gperf"
      {"g_to_c", G_TO_C},
      {""}, {""},
#line 46 "muttype.gperf"
      {"g_to_a", G_TO_A},
      {""},
#line 48 "muttype.gperf"
      {"g_to__", G_TO__},
#line 42 "muttype.gperf"
      {"c_to_a", C_TO_A},
      {""},
#line 43 "muttype.gperf"
      {"c_to__", C_TO__},
      {""},
#line 41 "muttype.gperf"
      {"a_to_t", A_TO_T},
      {""}, {""},
#line 57 "muttype.gperf"
      {"__to_t", __TO_T},
      {""},
#line 39 "muttype.gperf"
      {"a_to_c", A_TO_C},
      {""}, {""},
#line 55 "muttype.gperf"
      {"__to_c", __TO_C},
      {""},
#line 38 "muttype.gperf"
      {"a_to__", A_TO__},
#line 54 "muttype.gperf"
      {"__to_a", __TO_A},
      {""},
#line 44 "muttype.gperf"
      {"c_to_g", C_TO_G},
      {""},
#line 51 "muttype.gperf"
      {"t_to_c", T_TO_C},
      {""}, {""},
#line 50 "muttype.gperf"
      {"t_to_a", T_TO_A},
      {""},
#line 53 "muttype.gperf"
      {"t_to__", T_TO__},
      {""}, {""}, {""}, {""},
#line 40 "muttype.gperf"
      {"a_to_g", A_TO_G},
      {""}, {""},
#line 56 "muttype.gperf"
      {"__to_g", __TO_G},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 52 "muttype.gperf"
      {"t_to_g", T_TO_G}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 59 "muttype.gperf"


int get_offset(const char *str)
{
	struct mtype *t = in_word_set(str, strlen(str));
	return t ? t->offset : -1;
}
