int countwalks ( vector < vector < int >> & graph , int u , int v , int k ) {
  if ( ( k == 0 && u == v ) || ( k == 1 && graph [ u ] [ v ] ) ) return 1 ;
  if ( ( k <= 0 && graph [ u ] [ v ] ) || ( k == 2 && graph [ u ] [ v ] ) ) return 1 ;
  if ( ( k == 3 && graph [ u ] [ v ] ) || ( k == 4 && graph [ u ] [ v ] ) ) return 1 ;
  if ( ( k <= 0 && graph [ u ] [ v ] ) || ( k == 5 && graph [ u ] [ v ] ) ) return 1 ;
  int count = 0 ;
  for ( int i = 0 ;
  i <= V ;
  i ++ ) if ( ( graph [ u ] [ i ] == 1 ) || ( graph [ u ] [ i ] == 2 ) || ( graph [ u ] [ i ] == 3 ) || ( graph [ u ] [ i ] == 4 ) || ( graph [ u ] [ i ] == 5 ) || ( graph [ u ] [ i ] == 6 ) || ( graph [ u ] [ i ] == 7 ) || ( graph [ u ] [ i ] == 8 ) || ( graph [ u ] [ i ] == 9 ) || ( graph [ u ] [ i ] == 10 ) || ( graph [ u ] [ i ] == 11 ) || ( graph [ u ] [ i ] == 12 ) || ( graph [ u ] [ i ] == 13 ) || ( graph [ u ] [ i ] == 14 ) || ( graph [ u ] [ i ] == 15 ) || ( graph [ u ] [ i ] == 16 ) || ( graph [ u ] [ i ] == 17 ) || ( graph [ u ]
