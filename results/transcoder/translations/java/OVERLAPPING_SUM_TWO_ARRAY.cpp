int findSum ( int A [ ] , int B [ ] , int n ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( hash . count ( A [ i ] ) ) {
      hash [ A [ i ] ] = 1 + hash [ A [ i ] ] ;
    }
    else {
      hash [ A [ i ] ] = 1 ;
    }
    if ( hash . count ( B [ i ] ) ) {
      hash [ B [ i ] ] = 1 + hash [ B [ i ] ] ;
    }
    else {
      hash [ B [ i ] ] = 1 ;
    }
  }
  int sum = 0 ;
  for ( auto it = hash . begin ( ) ;
  it != hash . end ( ) ;
  ++ it ) {
    if ( int ( ( * it ) . second ) == 1 ) {
      sum += int ( ( * it ) . first ) ;
    }
  }
  return sum ;
}
