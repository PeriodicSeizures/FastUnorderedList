#include <iostream>

#include "fastunorderedlist.h"

struct Dummystruct {
	int8_t i;
};

static FastUnorderedList<Dummystruct> list;

void printList() {
	for (unsigned int i = 0; i < list.size(); i++) {
		printf("%u\n", list[i].i);
	}
	std::cout << "-----\n";
}

int main(int argc, char **argv) {

	// insert test
	//grid.insert(&e);
	list.insert({ 7 });
	list.insert({ 9 });
	list.insert({ 19 });
	printList();

  // erase test
	list.erase(2);
	printList();

	list.erase(0);
	list.erase(0);
	printList();

  // post insertion test
	list.insert({ 22 });
	printList();

	return 0;
}
