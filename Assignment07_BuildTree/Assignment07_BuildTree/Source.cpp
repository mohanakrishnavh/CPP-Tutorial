/*
	How tall is the tree? : 5
	     #
	    ###
	   #####
	  #######
	 #########
	     #

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int treeSize;
	cout << "How tall is the tree? : ";
	cin >> treeSize;
	int size = treeSize;
	int hashCount = 1, spaceCount = treeSize - hashCount;
	while (treeSize >= 0) {
		cout << string(spaceCount, ' ');
		cout << string(hashCount, '#');
		cout << "\n";

		hashCount += 2;
		treeSize -= 1;
		spaceCount -= 1;

		if (treeSize == 0) {
			cout << string(size - 1, ' ');
			cout << string(1, '#');
		}
	}

	return 0;
}