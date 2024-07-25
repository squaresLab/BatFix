int cycleSort ( int array [ ] ) {
  int writes = 0 ;
  for ( int cycleStart = 0 ;
  cycleStart <= array . length - 1 ;
  ) {
    int item = array [ cycleStart ] ;
    int pos = cycleStart ;
    for ( int i = cycleStart + 1 ;
    i < array . length ;
    i ++ ) if ( array [ i ] < item ) pos ++ ;
    if ( pos == cycleStart ) continue ;
    while ( item == array [ pos ] ) pos ++ ;
    array [ pos ] = item ;
    writes ++ ;
    while ( pos != cycleStart ) {
      pos = cycleStart ;
      for ( int i = cycleStart + 1 ;
      i < array . length ;
      i ++ ) if ( array [ i ] < item ) pos ++ ;
      while ( item == array [ pos ] ) pos ++ ;
      array [ pos ] = item ;
      writes ++ ;
    }
  }
  return writes ;
}
