# Navigation_system
Given a set of directions to follow , returns the final destination.
  Take the <NEXT,2nd,3rd,4th,5th> <LEFT,RIGHT>
  Go straight on for <100,200,300,...,900>m
  Go straight on for <1.0,1.1,1.2,...,5.0>km
  Turn around!
NOTES:
  First and last messages are always present
  There may be any number of en-route messages
  Messages are always formatted corrrectly
  A NEXT turn message means you must to proceed to the next cross-street even if you are currently at an intersection
  But Turn around does not need to be done at an intersection. Just do a U-turn wherever you are
