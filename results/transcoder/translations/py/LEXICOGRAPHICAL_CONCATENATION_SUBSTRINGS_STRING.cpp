string lexicographicSubConcat ( string s ) {
  int n = s . size ( ) ;
  ;
  int sub_count = ( n * ( n + 1 ) ) / 2 ;
  int arr [ sub_count ] = {
    0 }
    ;
    int index = 0 ;
    foriinrange ( n ) {
      forjinrange ( 1 , n - i + 1 ) {
        arr [ index ] = s . substr ( i , j - i + 1 ) ;
        index ++ ;
      }
    }
    sort ( arr , arr + sub_count ) ;
    string res ;
    foriinrange ( sub_count ) {
      res += arr [ i ] ;
    }
    returnres ;
  }

