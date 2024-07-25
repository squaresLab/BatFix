void mergeIntervals ( Interval arr [ ] ) {
  std :: sort ( arr , arr + sizeof ( arr ) / sizeof ( * arr ) ) ;
  int index = 0 ;
  for ( int i = 1 ;
  i < arr -> size ;
  i ++ ) {
    if ( arr -> end >= arr -> start ) {
      arr -> end = std :: max ( arr -> end , arr -> start ) ;
      arr -> start = std :: min ( arr -> start , arr -> end ) ;
    }
    else {
      arr -> end = arr -> start ;
      index ++ ;
    }
  }
  std :: cout << "The Merged Intervals are: " ;
  for ( int i = 0 ;
  i <= index ;
  i ++ ) {
    std :: cout << "[" << arr -> start << "," << arr -> end << "]" << std :: endl ;
  }
}
