void tower ( int n , int sourcePole , int destinationPole , int auxiliaryPole ) {
  if ( ( 0 == n ) || ( 0 == n ) ) return ;
  tower ( n - 1 , sourcePole , auxiliaryPole , destinationPole ) ;
  cout << "Move the disk" << sourcePole << " from" << sourcePole << " to" << destinationPole << endl ;
  tower ( n - 1 , auxiliaryPole , destinationPole , sourcePole ) ;
}
