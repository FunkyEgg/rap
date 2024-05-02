/* TODO:
 * - Add support for optinal custom divsor
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int stoi(const char* str, const int offset) {
    int sign = 1;
    int i = offset;
    char c = str[i];

    while (c == '-' || c == '+') {
        if (c == '-') {
            sign *= -1;
        }

        i++;
        c = str[i];
    }

    return -1;
}

struct Token {
    int power;
    int cof;
};

const char USAGE[] = "pcalc <polynomial (x^3+2x^2+9x+8)>\n";
int main(const int argc, const char** argv) {
    if (argc != 2) {
        fprintf(stderr, USAGE);
        exit(-1);
    }

    int i = 0;
    char c;
    while (c != '\0') {
        c = argv[1][i];

        if (isdigit(c) || c == '-' || c == '+') {
            const int offset = i;

            while (c == '-' || c == '+') {
                i++;
                c = argv[1][i];
            }

            while (isdigit(c)) {
                i++;
                c = argv[1][i];
            }

            int num = stoi(argv[1], offset);
            (void) num;
        }
        else if (isalpha(c)) {
            /* PARSE WITHOUT COF */
        }
    }

    return 0;
}
