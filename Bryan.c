
struct Noeud {
    int dest;
    struct Noeud* suivant;
};

struct Graphe {
    int V;
    struct Noeud** listesAdj;
    int* degreEntrant;
};

struct Noeud* creerNoeud(int dest) {
    struct Noeud* nouveauNoeud = (struct Noeud*)malloc(sizeof(struct Noeud));
    nouveauNoeud->dest = dest;
    nouveauNoeud->suivant = NULL;
    return nouveauNoeud;
}

struct Graphe* creerGraphe(int V) {
    struct Graphe* graphe = (struct Graphe*)malloc(sizeof(struct Graphe));
    graphe->V = V;
    graphe->listesAdj = (struct Noeud**)malloc(V * sizeof(struct Noeud*));
    graphe->degreEntrant = (int*)malloc(V * sizeof(int));

    for (int i = 0; i < V; i++) {
        graphe->listesAdj[i] = NULL;
        graphe->degreEntrant[i] = 0;
    }

    return graphe;
}