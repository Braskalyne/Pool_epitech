/*
** EPITECH PROJECT, 2018
** prototypes
** File description:
** Prototypes of the functions of the bistromatic
*/

#define MAX(v1, v2) (((v1) > (v2)) ? (v1) : (v2))
#define ABS(v) (((v) > 0) ? (v) : -1 * (v))

extern char const *SYNTAX_ERROR_MSG;
extern char const *ERROR_MSG;

enum {OP_OPENP, OP_CLOSEP, OP_ADD, OP_SUB,
OP_MUL, OP_DIV, OP_MOD};

char base_to_number(char digit, char *base);
char number_to_base(char nbr, char *base);
char *number_str_to_array(char *str, char *base, char *op);
void print_number_array(char *nbr_array, char *base, char *op);
unsigned long my_strlen_nbr(char *str, char *base);
unsigned long na_size(char *num_array);
void remove_trailing_zeros(char *nbr_array);
char *infin_add(char *nb1, char *nb2, char *base);
char *infin_mul(char *nb1, char *nb2, char *base);
int infin_compare(char *nb1, char *nb2);
char *infin_sub(char *nb1, char *nb2, char *base);
char *infin_div(char *nb1, char *nb2, char *base);
char *infin_mod(char *nb1, char *nb2, char *base);
void reverse_number_array(char *nbr_array);
char remove_negatives(char *nb);
unsigned long find_starting_index(char *nb1, char *nb2);
void divide_pos(char *result, char *nb1, char *nb2, char *base);
char *my_strtol(char **str, char *base, char *op);
char *summands(char **str, char *base, char *op);
char *parenthesis(char **str, char *base, char *op);
char *factors(char **str, char *fac, char *base, char *op);
char *eval_expr(char *str, char *base, char *op);
void disp_usage(void);
int check_parenthesis(char *str, char *operators);
int check_ops(char *ops);
int check_base(char *b, char *ops);
int check_duplicate(char *b);
