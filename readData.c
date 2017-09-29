#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "stack.h"
#include "set.h"

#define URLSIZE 6 //what's the max size of a url name, assuming it to be 5

int main(void) {

	//new graph
	//Graph g = newGraph();
	//new stack
	//Stack stack = newStack();
	//visited set
	Set visited = newSet();
	//set of urls
	Set urlset = newSet();
	char str[URLSIZE] = {0};
    int count = 0;

	//create a set (list of urls) to process
	//by reading data from "collection.txt"
	//build up the linked list

	FILE *url_file;
	url_file = fopen("collection.txt", "r");
	    if(url_file == NULL) {
	    printf("collection.txt could not be opened\n");
	    return 1;
    }
	
	while(fscanf(url_file, "%s", str) != EOF) {
		char *urlname = &str[0];
		insertInto(urlset, urlname);
	}

	showSet(urlset);
	

    //create an empty graph
    //for each url in the above list, read
    //url text file and update the graph by adding 
    //a node and outgoing links

	//need to get the first url
	//have the list of urls in the Set

	return 0;
}



