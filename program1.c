//todo: traversing node of linked list
p = start;
while (p != NULL) {
    printf("%d", p->info);
    p = p->link;
}
//* -> output: 10 20 30 40 50 


//todo: Counting node in linked list
int n = 0;
p = start;
while (p != NULL) {
    n++;
    p = p-> link;
}
printf("Number of nodes = %d \n", n);


//todo: Searching node in linked list
int position = 1;
p = start;
while (p != NULL) {
    if (p->info == x) {
        break;
    } else {
        position++;
        p=p->link;
    }
}
if (p == NULL) {
    printf("%d not found in list\n", x);
}  else {
    printf("%d is at position %d\n", x, position);
}

//* FINDING POINTERS IN A LINKED LIST
//* 1. Finding pointer at the last node
p = start;
while(p->link != NULL) {
    p=p->link;
}

//* 2. Finding pointer at the second last node
p=start;
while(p->link->link != NULL) {
        p=p->link;
} //! should print out the program, this is a bit confusing

//* 3. Finding pointer at a node with particular info
int x =30;
p= start;
while (p->link != NULL) {
    if (p->info == x) {
        break;
    } else {
        p=p->link;
    }
}

//* 4. Finding pointer at a predecessor of a node with particular info
int x =30;
int pre = 20; //* i mean the 'info'
p = start;
while (p->link != NULL) {
    if (p->link->pre == x) {
        break;
    } else {
        p=p->link;
    }
}

//* 5. Finding pointer at a node with a paarticular position k
p = start;
int k = 3;
for (int = 1; i < k && p != NULL; i++) {
    p = p->link;
}