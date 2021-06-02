#include"red_black_tree.h"
#include<numeric>
#include<algorithm>
#include<random>

using namespace std;
int randomfunc(int j)
{
	return rand() % j;
}
int main() {
	RedBlackTree<int> tree;
	RedBlackAnalyser<int> analyser(tree);
	vector<int> list(20);
	iota(begin(list), end(list), 1);
	_Random_shuffle1(begin(list), end(list),randomfunc);
	
	for_each(begin(list), end(list), [&](int x) {tree.insert(x); analyser.print(); cout << endl; });
}