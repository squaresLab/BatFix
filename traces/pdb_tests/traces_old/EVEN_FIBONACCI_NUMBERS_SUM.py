Statement: if ( limit < 2 ) :
Line: 8
limit = 67

Statement: ef1 = 0
Line: 0
limit = 67

Statement: ef2 = 2
Line: 1
limit = 67
ef1 = 0

Statement: sm = ef1 + ef2
Line: 2
limit = 67
ef1 = 0
ef2 = 2

Statement: while ( ef2 <= limit ) :
Line: 3
limit = 67
ef1 = 0
ef2 = 2
sm = 2

Statement: ef3 = 4 * ef2 + ef1
Line: 4
limit = 67
ef1 = 0
ef2 = 2
sm = 2

Statement: if ( ef3 > limit ) :
Line: 5
limit = 67
ef1 = 0
ef2 = 2
sm = 2
ef3 = 8

Statement: ef1 = ef2
Line: 7
limit = 67
ef1 = 0
ef2 = 2
sm = 2
ef3 = 8

Statement: ef2 = ef3
Line: 8
limit = 67
ef1 = 2
ef2 = 2
sm = 2
ef3 = 8

Statement: sm = sm + ef2
Line: 9
limit = 67
ef1 = 2
ef2 = 8
sm = 2
ef3 = 8

Statement: while ( ef2 <= limit ) :
Line: 3
limit = 67
ef1 = 2
ef2 = 8
sm = 10
ef3 = 8

Statement: ef3 = 4 * ef2 + ef1
Line: 4
limit = 67
ef1 = 2
ef2 = 8
sm = 10
ef3 = 8

Statement: if ( ef3 > limit ) :
Line: 5
limit = 67
ef1 = 2
ef2 = 8
sm = 10
ef3 = 34

Statement: ef1 = ef2
Line: 7
limit = 67
ef1 = 2
ef2 = 8
sm = 10
ef3 = 34

Statement: ef2 = ef3
Line: 8
limit = 67
ef1 = 8
ef2 = 8
sm = 10
ef3 = 34

Statement: sm = sm + ef2
Line: 9
limit = 67
ef1 = 8
ef2 = 34
sm = 10
ef3 = 34

Statement: while ( ef2 <= limit ) :
Line: 3
limit = 67
ef1 = 8
ef2 = 34
sm = 44
ef3 = 34

Statement: ef3 = 4 * ef2 + ef1
Line: 4
limit = 67
ef1 = 8
ef2 = 34
sm = 44
ef3 = 34

Statement: if ( ef3 > limit ) :
Line: 5
limit = 67
ef1 = 8
ef2 = 34
sm = 44
ef3 = 144

Statement: break
Line: 6
limit = 67
ef1 = 8
ef2 = 34
sm = 44
ef3 = 144

Statement: return sm
Line: 0
limit = 67
ef1 = 8
ef2 = 34
sm = 44
ef3 = 144

Statement: return sm
Line: 0
limit = 67
ef1 = 8
ef2 = 34
sm = 44
ef3 = 144
__return__ = 44
