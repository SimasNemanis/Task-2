#include <iostream>
#include "Composite.h"
#include "Leaf.h"


using namespace std;

int main() {

    auto *library = new Composite("LIBRARY");

    auto *fiction = new Composite("FICTION");
    auto *nonfiction = new Composite("NONFICTION");

    library->putComponent(fiction);
    library->putComponent(nonfiction);

    auto *fantasy = new Leaf("FANTASY", 25.15);
    auto *adventure = new Leaf("ADVENTURE", 15.15);
    auto *romance = new Leaf("ROMANCE", 17.65);
    auto *dystopian = new Leaf("DYSTOPIAN", 20.10);
    auto *mystery = new Leaf("MYSTERY", 19.50);
    auto *horror = new Leaf("HORROR", 26.25);
    auto *thriller = new Leaf("THRILLER", 15.95);
    auto *paranormal = new Leaf("PARANORMAL", 20.15);

    auto *memoir = new Leaf("MEMOIR", 10.20);
    auto *cookbook = new Leaf("COOKBOOK", 30.99);
    auto *art = new Leaf("ART", 56.50);
    auto *travel = new Leaf("TRAVEL", 15.50);
    auto *history = new Leaf("HISTORY", 15.05);
    auto *humor = new Leaf("HUMOR", 30.30);
    auto *health = new Leaf("HEALTH", 9.99);
    auto *development = new Leaf("DEVELOPMENT", 9.99);

    fiction->putComponent(fantasy);
    fiction->putComponent(adventure);
    fiction->putComponent(romance);
    fiction->putComponent(dystopian);
    fiction->putComponent(mystery);
    fiction->putComponent(horror);
    fiction->putComponent(thriller);
    fiction->putComponent(paranormal);

    nonfiction->putComponent(memoir);
    nonfiction->putComponent(cookbook);
    nonfiction->putComponent(art);
    nonfiction->putComponent(travel);
    nonfiction->putComponent(history);
    nonfiction->putComponent(humor);
    nonfiction->putComponent(health);
    nonfiction->putComponent(development);

    fiction->material();
    cout <<" All: "<<library->Gprice() <<endl;



    return 0;
}