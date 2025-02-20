#include "gluethread/glthread.h"

#define MAX_TOPOLOGY 32
#define MAX_IF_NAME 16
#define MAX_NODE_NAME 32
#define MAX_INTERFACE_PER_NODE 10

 
typedef struct node_ node_t;
typedef struct link_ link_t;


typedef struct interface_ {
    char interface_name[MAX_IF_NAME];
    struct node_ *att_node;
    struct link_ *link;
} interface_t;

struct link_ {
    interface_t interface1;
    interface_t interface2;
};

struct node_ {
    char node_name[MAX_NODE_NAME];
    interface_t *interfaces[MAX_INTERFACE_PER_NODE];
    glthread_t graph_glue;
}

typedef struct graph_{
    char topology_name[MAX_TOPOLOGY];
    glthread_t node_list;
};