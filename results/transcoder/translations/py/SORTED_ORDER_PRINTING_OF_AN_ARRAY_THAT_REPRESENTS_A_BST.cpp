void printSorted ( int arr [ ] , int start , int end ) {
  if ( start > end ) return ;
  printSorted ( arr , start * 2 + 1 , end ) ;
  cout << arr [ start ] << " " ;
  printSorted ( arr , start * 2 + 2 , end ) ;
}
