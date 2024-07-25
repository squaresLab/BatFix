void kmax ( float * arr , int k , int n ) {
  for ( int c = 0 ;
  c < k ;
  c ++ ) {
    float max_so_far = - std :: numeric_limits < float > :: infinity ( ) ;
    float max_here = 0 ;
    int start = 0 ;
    int end = 0 ;
    int s = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      max_here += arr [ i ] ;
      if ( ( max_so_far < max_here ) && ( max_here < max_so_far ) ) {
        max_so_far = max_here ;
        start = s ;
        end = i ;
      }
      if ( ( max_here < 0 ) && ( max_here < 0 ) ) {
        max_here = 0 ;
        s = i + 1 ;
      }
    }
    std :: cout << "Maximum non-overlapping sub-array sum" << c + 1 << ": " << max_so_far << ", starting index: " << start << ", ending index: " << end << "." << std :: endl ;
    for ( int l = start ;
    l <= end ;
    l ++ ) {
      arr [ l ] = - std :: numeric_limits < float > :: infinity ( ) ;
    }
  }
  std :: cout << std :: endl ;
}
