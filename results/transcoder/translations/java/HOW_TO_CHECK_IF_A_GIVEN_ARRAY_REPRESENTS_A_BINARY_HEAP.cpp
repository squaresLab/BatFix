bool isHeap ( int arr [ ] , int i , int n ) {
  if ( i > ( n - 2 ) / 2 ) return true ;
  if ( arr [ i ] >= arr [ 2 * i + 1 ] && arr [ i ] >= arr [ 2 * i + 2 ] && isHeap ( arr , 2 * i + 1 , n ) && isHeap ( arr , 2 * i + 2 , n ) ) return true ;
  return false ;
}
