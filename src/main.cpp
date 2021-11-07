extern "C"{
    // Add the header files required to run your main 
    #include "../include/dfs.h"

}

#include <stdlib.h>
#include <stdio.h>

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
	// cMake did not print while testing, so I tested in main:
    node *root = make_node (4,
			  make_node (7,
				     make_node (28,
						make_node (77,
							   NULL,
							   NULL),
						make_node (23,
							   NULL,
							   NULL)),
				     make_node (86,
						make_node (3,
							   NULL,
							   NULL),
						make_node (9,
							   NULL,
							   NULL))),
			  make_node (98,
				     NULL,
				     NULL));
    // Print Tree
    DFT(root);

    return 0;
}