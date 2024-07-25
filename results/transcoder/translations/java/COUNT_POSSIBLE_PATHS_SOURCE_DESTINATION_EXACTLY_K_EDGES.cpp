int countwalks ( int graph [ V ] [ V ] , int u , int v , int k ) {
  if ( k == 0 && u == v ) return 1 ;
  if ( k == 1 && graph [ u ] [ v ] == 1 ) return 1 ;
  if ( k <= 0 ) return 0 ;
  int count = 0 ;
  for ( int i = 0 ;
  i < V ;
  i ++ ) if ( graph [ u ] [ i ] == 1 ) count += countwalks ( graph , i , v , k - 1 ) ;
  return count ;
}
