#include <stdio.h>
#include "pqueue.h"
#include "graph.h"
#include "union_find.h"


graph_t kruskal(graph_t graph) {
    /* add your code here */
}
/* Computes a MST of the given graph.
 *
 * This function returns a copy of the input graph in which
 * only the edges of the MST are marked as primary. The
 * remaining edges are marked as secondary. 
 *
 * The input graph does not change. 
 * 
*/

unsigned int mst_total_weight(graph_t mst) {
    /* add your code here */
}
/* Returns the sum of the weights of all the primary
 * edges of the given graph.
*/


/** STAR 1
bool graph_has_cycle(graph_t g);
unsigned int graph_connected_components(graph_t g);    
 **/

#ifndef TEST /* keep this line above main function */

int main(void) {
    /* read graph from stdin */
    graph_t graph = graph_from_file(stdin);
    assert(graph != NULL);
    /* run kruskal */
    graph_t mst = kruskal(graph);
    /* dump graph */
    graph_dump(mst, stdout);
    /* dump total weight */
    printf("\n# MST : %u\n", mst_total_weight(mst));
    /* destroy both graphs */
    graph = graph_destroy(graph);
    mst = graph_destroy(mst);
}

#endif /* keep this line below main function */
