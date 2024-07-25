int subset ( int arr [ ] , int n ) {
  map < int , int > mp {
    i , 0 }
    ;
    for ( int i = 0 ;
    i < 10 ;
    i ++ ) mp [ arr [ i ] ] ++ ;
    int res = 0 ;
    for ( map < int , int > :: iterator it = mp . begin ( ) ;
    it != mp . end ( ) ;
    it ++ ) res = max ( res , it -> first ) ;
    return res ;
  }
  