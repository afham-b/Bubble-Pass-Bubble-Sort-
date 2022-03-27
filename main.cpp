#include <iostream>
#include <iomanip>
using namespace std; 

void print_array(const int a[], int n); 
void swap (int& a, int& b); 
void bubble_pass( int a[], int n); 
void bubble_sort ( int a[], int n); 



int main() {
  int a[] = { 17, 8, 21, 7, 11, 13, 5, 19 };
  print_array(a , 8);  
  bubble_sort( a, 8); 
  print_array(a , 8);
  return 0; 
}

void print_array( const int a[], int n){
  for (int i=0; i<n; i++)
    cout << setw(5) << a[i]; 
  cout << endl; 
}

void swap (int& a, int& b) {
  int temp = a; 
  a= b; 
  b= temp; 
}

void bubble_pass( int a[], int n){
  for (int i=0; i < (n-1); i++){
    if (a[i+1] < a[i])
      swap(a[i+1], a[i]); 
  }
}

void bubble_sort ( int a[], int n ){
  for ( int i=0; i<(n-1 ); i++){
    bubble_pass(a, n); 
  }
}