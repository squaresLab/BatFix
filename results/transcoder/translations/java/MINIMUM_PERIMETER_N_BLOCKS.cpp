long long minPerimeter ( int n ) {
  int l = ( int ) sqrt ( n ) ;
  int sq = l * l ;
  if ( sq == n ) {
    return l * 4 ;
  }
  else {
    long long row = n / l ;
    long long perimeter = 2 * ( l + row ) ;
    if ( n % l != 0 ) {
      perimeter += 2 ;
    }
    return perimeter ;
  }
}
