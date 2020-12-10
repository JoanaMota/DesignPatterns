#ifndef _COLORS_
#define _COLORS_
// https://www.unixtutorial.org/how-to-show-colour-numbers-in-unix-terminal/
/* FOREGROUND */
#define RST "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"
#define KORA "\e[38;5;209m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

void printError(std::string f_text)
{
    std::cout << KRED << f_text << RST << std::endl;
}
void printWarning(std::string f_text)
{
    std::cout << KYEL << f_text << RST << std::endl;
}

#endif /* _COLORS_ */
