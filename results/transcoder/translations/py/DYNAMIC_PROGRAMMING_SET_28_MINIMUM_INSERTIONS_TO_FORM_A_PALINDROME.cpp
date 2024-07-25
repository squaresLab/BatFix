int findMinInsertions ( string str , int l , int h ) {
  if ( ( l > h ) || ( l == h ) ) return INT_MAX ;
  if ( ( l == h ) || ( l == h - 1 ) ) return 0 ? ( str [ l ] == str [ h ] ) : 1 ;
  if ( ( str [ l ] == str [ h ] ) || ( str [ l ] == str [ h ] ) ) return findMinInsertions ( str , l + 1 , h - 1 ) ;
  else return ( min ( findMinInsertions ( str , l , h - 1 ) , findMinInsertions ( str , l + 1 , h ) ) + 1 ) ;
}
