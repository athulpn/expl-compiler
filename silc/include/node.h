#pragma once

// TODO: set type to const and vartype to num
enum TYPE {
  NUM,
  READ,
  WRITE,
  CONN,
  VAR,
  OP,
  ASSN,
  QFUNC,
  IF,
  WHILE,
  IF_BODY,
  BREAK,
  CONT,
  STR
};
enum VARTYPE { INT, BOOL, STRING };

typedef struct tnode {
  enum TYPE type;
  enum VARTYPE vartype;
  char *varname;
  struct symbolList *symbol;
  int val;
  struct tnode *left, *right;  // left and right branches
} tnode;

/*Create a node tnode*/

tnode *createVarNode(char *, tnode *);
tnode *createNode(enum TYPE type, char *s, int n, struct tnode *l,
                  struct tnode *r);

tnode *connect(tnode *first, tnode *second);
