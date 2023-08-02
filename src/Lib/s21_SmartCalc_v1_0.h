#ifndef LIB_S21_SMARTCALC_V1_0_H
#define LIB_S21_SMARTCALC_V1_0_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACKSIZE 255
#define ERROR_ABSENT 0
#define INPUT_ERROR 1
#define MEMORY_ERROR 2

typedef struct operator_stack {
  char val;
  struct operator_stack *next;
} operator_stack;

typedef struct operand_stack {
  double val;
  struct operand_stack *next;
} operand_stack;

double calculation(char *s, double *num);
char *reverse_not(char *s, int *error);
void str_valid(char *s, int *error);
int check_digit(char *c);
int check_unary(char *c);
int check_binary(char *c);
void check_unary_plus_or_minus(char *c, int *indx, operator_stack **operator_s);
void get_binary(char *_operator, operator_stack **op_s, char **out);
void get_unary(char *_operator, operator_stack **op_s);
int set_op_priority(char operation);
void calculation_binary(operand_stack **op_s, char *op, double value_1,
                        double value_2, double result);
void calculation_unary(operand_stack **operand_s, char *_operator, double value,
                       double result);
double s21_atof(char *str);

operator_stack *init_op(char op);
operand_stack *init_num(double num);
operator_stack *push_op(operator_stack *last, char op);
operand_stack *push_num(operand_stack *last, double num);
char check_op(operator_stack *last);
double check_num(operand_stack *last);
operator_stack *pop_op(operator_stack *last);
operand_stack *pop_num(operand_stack *last);
size_t count_stecksize(operator_stack *last);

#endif  // LIB_S21_SMARTCALC_V1_0_H