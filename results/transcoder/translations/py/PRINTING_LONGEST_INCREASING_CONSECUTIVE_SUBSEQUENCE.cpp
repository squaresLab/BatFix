void longestSubsequence ( int a [ ] , int n ) {
  unordered_map < int , int > mp {
    i , 0 }
    ;
    int dp [ 13 ] = {
      0 }
      ;
      int maximum = - INT_MAX - 1 ;
      int index = - 1 ;
      for ( int i = 0 ;
      i < n ;
      i ++ ) {
        if ( ( ( a [ i ] - 1 ) < 0 ) && ( ( a [ i ] - 1 ) < n ) ) {
          int lastIndex = mp [ a [ i ] - 1 ] - 1 ;
          dp [ i ] = 1 + dp [ lastIndex ] ;
        }
        else {
          dp [ i ] = 1 ;
        }
        mp [ a [ i ] ] = i + 1 ;
        if ( ( maximum < dp [ i ] ) && ( maximum > dp [ i ] ) ) {
          maximum = dp [ i ] ;
          index = i ;
        }
      }
      for ( int curr = a [ index ] - maximum + 1 ;
      curr < a [ index ] + 1 ;
      curr += 1 ) {
        cout << curr << " " ;
      }
    }
