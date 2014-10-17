/**
   hw2.h

   COMP1917 Computing 1

   Program supplied as a starting point for
   Assignment 2: Message Board

   UNSW Session 2, 2014
*/

#define TRUE           1
#define FALSE          0

#define MAX_LINE     256
#define MAX_TEXT    4096

typedef struct date    Date;
typedef struct time    Time;
typedef struct msgNode MsgNode;
typedef struct undo    Undo;

struct date {
  int day;
  int month;
  int year;
};

struct time {
  int hour;
  int minute;
  int second;
};

struct msgNode {
  int   found;
  int   messageNum;
  int   inReplyTo;
  int   indent;
  int   deleted;
  char *name;
  Date  date;
  Time  time;
  char *text;
  MsgNode *next;
};

struct undo {
	MsgNode *list;
	int printCase;
	MsgNode *replynode;
	int isReply;
	int listCase;
	int currentMessageNum;
	int globalMessageNum;
};
	

// INSERT NEW FUNCTION PROTOTYPES, AS APPROPRIATE
char* getSearch(void);
MsgNode * getSearchNode( MsgNode *node );
void search(MsgNode * list);
void overallPrintArgument (int printCase, MsgNode *list);
void printThread( MsgNode *list );
MsgNode *getReply( MsgNode *list, MsgNode *node );
void insertNode( MsgNode *list );
MsgNode *currentNode( MsgNode *head );
void actualPrintBrief( MsgNode* list);
MsgNode * add_to_tail( MsgNode *new_node, MsgNode *head);
void printPrompt();
void   printHelp();
MsgNode *getNode( void );
char    *getName( void );
char    *getText( void );
void     getDate( Date *d );
int     scanDate( Date *d );
void     getTime( Time *t );
int     scanTime( Time *t );
int       dateOK( Date *d );
int       timeOK( Time *t );
void printPadded( int n );
void   printDate( Date d );
void   printTime( Time t );
void  printBrief( MsgNode * msg );
void   printFull( MsgNode * msg );
void    freeList( MsgNode *list );