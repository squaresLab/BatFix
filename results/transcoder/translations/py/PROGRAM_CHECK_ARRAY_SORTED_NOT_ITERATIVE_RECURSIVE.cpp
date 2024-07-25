bool arraySortedOrNot ( vector < int > arr ) {
  int n = arr . size ( ) ;
  if ( n == 1 || n == 0 ) return true ;
  return arr [ 0 ] <= arr [ 1 ] && arraySortedOrNot ( arr [ 1 ] ) ;
}
