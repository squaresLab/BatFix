void longestString ( string str1 , string str2 ) {
  int count1 [ 26 ] = {
    0 }
    ;
    int count2 [ 26 ] = {
      0 }
      ;
      for ( int i = 0 ;
      i < str1 . length ( ) ;
      i ++ ) count1 [ ( int ) str1 [ i ] - ( int ) 'a' ] ++ ;
      for ( int i = 0 ;
      i < str2 . length ( ) ;
      i ++ ) count2 [ ( int ) str2 [ i ] - ( int ) 'a' ] ++ ;
      string result = "" ;
      for ( int i = 0 ;
      i < 26 ;
      i ++ ) for ( int j = 1 ;
      j <= min ( count1 [ i ] , count2 [ i ] ) ;
      j ++ ) result = result + ( char ) ( ( char ) 'a' + i ) ;
      cout << result << endl ;
    }

