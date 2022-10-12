#include <iostream>

using namespace std;

void fillArray(int list[], int listSize);
int indexSmallestElement(const int list[], int listSize);

int main() {
  int n;
  cin >> n;

  int list[n];

  fillArray(list, n);

  cout << indexSmallestElement(list, n);

  return 0;
}


void fillArray(int list[], int listSize) {

  cout << "Enter " << listSize << " integers: "; // comment out for kattis

  int index;

  for (index = 0; index < listSize; index++) {
    cin >> list[index];
  }

  return;
}

