/*
Author: Diego Alducin
Assignment Number: Lab Assignment 4
File Name: driver.c
Course/Section: CS 2123 Section 00C1
Due Date: 12/6/2021
Instructor: Dr. Ku
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "BST.h"


/*
 * Main function to run
 */
int main(int argc, char** argv) {
    nodeT *pRoot = NULL;        //root
    int data;                   //holds the int data
   
    //Insertion of new items, reports when done
    printf("Items to insert (-999 to stop): ");
    scanf("%d", &data);
  
        
    while(data != -999){
        pRoot = insert(pRoot, data);
        printf("Height: %d\n", getHeight(pRoot));
        printf("Number of Nodes: %d\n",getNumberOfNodes(pRoot));
        printf("Number of Leaves: %d\n",getNumberOfLeaves(pRoot));
        printf("Items to insert (-999 to stop): ");
        scanf("%d", &data);

    }
    report(pRoot);

    //deletion of items, reports after each deletion
    printf("Items to delete (-999 to stop): ");
    scanf("%d", &data);
    while(data != -999){
        pRoot = deleteNode(pRoot, data);
        report(pRoot);
        printf("Items to delete (-999 to stop): ");
        scanf("%d", &data);

    }

    /**
     * BONUS: Build a level 6 complete and balanced BST, then remove the root.
     * Tested but did not have time to complete.
     * 
    nodeT *levelRoot = NULL;
    int level;

    printf("What level BST would you like to make?\n");
    scanf("%d", &level);

    int numNodes = (int) pow(2, level);
    int lvlRoot = numNodes/2;
    int lvlRight = lvlRoot / 2;
    int lvlLeft = lvlRoot / 2;
    printf("Lvl Left %d \t Lvl Rigth %d", lvlRight, lvlLeft);

    levelRoot = insert(levelRoot, lvlRoot);

    while(getHeight(levelRoot) < level){
        
        levelRoot = insert(levelRoot, lvlRight);
        levelRoot = insert(levelRoot, lvlLeft);

        lvlRight = 1 + lvlRight;
        lvlLeft = 1 - lvlLeft;
        printf("Lvl Left %d \t Lvl Rigth %d\n", lvlRight, lvlLeft);

    }
    report(levelRoot);
    */

    return 0;
}




