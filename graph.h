#include "gluethread/glthread.h"
#include <assert.h>

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
};

typedef struct graph_{
    char topology_name[MAX_TOPOLOGY];
    glthread_t node_list;
};


static inline node_t* get_nbr_node(interface_t *interface){
    assert(interface->att_node);
    assert(interface->link);

    link_t *link = interface->link;
    return (&(link->interface1) == interface) ? link->interface2.att_node : link->interface1.att_node;
}

static inline int get_node_intf_available_slot(node_t *node){
    int i;
    for(i = 0; i < MAX_INTERFACE_PER_NODE; i++){
        if(node->interfaces[i])
            continue;
        return i;
    }
    return -1;
}

