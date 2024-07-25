void search ( int mat [ ] [ MAXROW ] , int fromRow , int toRow , int fromCol , int toCol , int key ) {
  int i = fromRow + ( toRow - fromRow ) / 2 ;
  ;
  int j = fromCol + ( toCol - fromCol ) / 2 ;
  ;
  if ( ( mat [ i ] [ j ] == key ) && ( mat [ i ] [ fromCol ] == key ) ) {
    cout << "Found " << key << " at " << i << " " << j << endl ;
    ;
  }
  else {
    if ( ( i != toRoworj != fromCol ) && ( i < toRoworj ) ) {
      search ( mat , fromRow , i , j , toCol , key ) ;
    }
    ;
    if ( ( fromRow == toRowandfromCol + 1 == toCol ) && ( mat [ fromRow ] [ toCol ] == key ) && ( mat [ fromRow ] [ toCol ] < key ) ) {
      cout << "Found " << key << " at " << fromRow << " " << toCol << endl ;
      ;
    }
    ;
    if ( ( mat [ i ] [ j ] < key ) && ( i + 1 <= toRow ) ) {
      search ( mat , i + 1 , toRow , fromCol , toCol , key ) ;
    }
    ;
  }
  ;
}
