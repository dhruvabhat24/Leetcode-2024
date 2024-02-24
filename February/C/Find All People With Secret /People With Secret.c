/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct Node {
    int person;
    int time;
    struct Node *next;
} Node;

int compare(void *x, void *y) {
/* For a min heap return *x - *y
   For a max heap return *y - *x */
    return (*(Node*) x).time - (*(Node*) y).time;
}

void popTop(void **pq, int *size);
void insertpq(void **pq, void *n, int *size);

int* findAllPeople(int n, int** meetings, int meetingsSize, 
int* meetingsColSize, int firstPerson, int* returnSize) {
    int poolSize = (n + 2 * meetingsSize);
    Node *list[n+1], *node, *pq[poolSize];
    Node pool[poolSize], *nodeA, *freep;
    int i, j, *visited, pqSize = 0, poolPtr = 0;
    int person, time;
    visited = (int*) calloc(n+1, sizeof(int));
    memset(list, 0, sizeof(list));
    for (i = 0; i < meetingsSize; ++i) {
        node = &pool[poolPtr++];
        node->person = meetings[i][0];
        node->time = meetings[i][2];
        node->next = list[meetings[i][1]];
        list[meetings[i][1]] = node;
        node = &pool[poolPtr++];
        node->person = meetings[i][1];
        node->time = meetings[i][2];
        node->next = list[meetings[i][0]];
        list[meetings[i][0]] = node;
    }
    node = &pool[poolPtr++];
    node->person = firstPerson;
    node->time = 0;
    insertpq((void**) pq, (void*) node, &pqSize);
    node = &pool[poolPtr++];
    node->person = 0;
    node->time = 0;
    insertpq((void**) pq, (void*) node, &pqSize);
    while (pqSize > 0) {
        person = pq[0]->person;
        time = pq[0]->time;
        popTop((void**) pq, &pqSize);
        if (visited[person]) {
            continue;
        }
        visited[person] = 1;
        node = list[person];
        while(node != NULL) {
            if (node->time >= time && !visited[node->person]) {
                insertpq((void**) pq, (void*) node, &pqSize);
            }
            node = node->next;
        }
    }
    j = 0;
    for (i = 0; i <= n; ++i) {
        if (visited[i]) {
            visited[j++] = i;
        }
    }
    *returnSize = j;
    return visited;
}

void bubbleDown(void **pq, int size, int parent) {
    int child;
    void *t;
    do {
        child = 2 * parent + 1;
        if (child >= size) {
            return;
        }
        if (child < size-1 && 
            compare(pq[child], pq[child+1]) > 0) {
            ++child;
        }
        if (compare(pq[parent], pq[child]) <= 0) {
            return;
        }
        t = pq[parent];
        pq[parent] = pq[child];
        pq[child] = t;
        parent = child;
    } while(1);
}

void bubbleUp(void **pq, int child) {
    int parent;
    void *t;
    do {
        if (child == 0) {
            return;
        }
        parent = (child - 1) / 2;
        if (compare(pq[parent], pq[child]) <= 0) {
            return;
        }
        t = pq[parent];
        pq[parent] = pq[child];
        pq[child] = t;
        child = parent;
    } while(1);
}

void popTop(void **pq, int *size) {
    *size -= 1;
    pq[0] = pq[*size];
    bubbleDown(pq, *size, 0);
}

void insertpq(void **pq, void *n, int *size) {
	pq[*size] = n;
	bubbleUp(pq, *size);
	*size += 1;
} 

