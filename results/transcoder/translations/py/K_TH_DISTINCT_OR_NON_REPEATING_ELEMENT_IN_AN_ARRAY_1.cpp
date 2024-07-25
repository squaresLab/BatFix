int printKDistinct ( int * arr , int size , int KthIndex ) {
  map < int , int > dict ;
  vector < int > vect ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( ( arr [ i ] < dict . size ( ) ) && ( arr [ i ] > 0 ) ) dict [ arr [ i ] ] = dict [ arr [ i ] ] + 1 ;
    else dict [ arr [ i ] ] = 1 ;
  }
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( ( dict [ arr [ i ] ] > 1 ) && ( arr [ i ] < 0 ) ) continue ;
    else KthIndex = KthIndex - 1 ;
    if ( ( KthIndex == 0 ) || ( KthIndex == 1 ) ) return arr [ i ] ;
  }
  return - 1 ;
}
