void tower ( int n , char sourcePole , char destinationPole , char auxiliaryPole ) {
  if ( 0 == n ) return ;
  tower ( n - 1 , sourcePole , auxiliaryPole , destinationPole ) ;
  printf ( "Move the disk %d from %c to %c\n" , n , sourcePole , destinationPole ) ;
  tower ( n - 1 , auxiliaryPole , destinationPole , sourcePole ) ;
}
