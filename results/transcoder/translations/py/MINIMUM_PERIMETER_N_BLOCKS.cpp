int minPerimeter ( int n ) {
  int l = sqrt ( n ) ;
  int sq = l * l ;
  if ( ( sq == n ) && ( l == n ) ) {
    return l * 4 ;
  }
  else {
    int row = n / l ;
    int perimeter = 2 * ( l + row ) ;
    if ( ( n % l != 0 ) && ( perimeter > 0 ) ) {
      perimeter += 2 ;
    }
    return perimeter ;
  }
}
