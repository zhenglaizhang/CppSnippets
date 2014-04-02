/*
PROGRAMING BY CONTRACT

A paradigm which was first introduced by Bertrand Meyer, the creator of Eiffel. 

Basically programming by contract creates a contract between the software developer and software user - in Meyer's terms the supplier and the consumer. Every feature, or method, starts with a precondition that must be satisfied by the consumer of the routine. And each feature ends with postconditions which the supplier guarantees to be true (if and only if the preconditions were met). Also, each class has an invariant which must be satisfied after any changes to the object represented by the class. In the other words, the invariant guarantees the object is in a valid state.

The class invariant would check that the class is in a valid state after the call to someFunction. Note that in C or C++, a very simple definition of pre and post condition constructs is simply:

    #define  preCondition(c)     assert(c)
    #define  postCondition(c)    assert(c)
A better definition would allow compile time options to turn these conditions on or off individually (you might turn them off for performance before shipping a release, for instance). Better yet might be to have assert() used as a default but allow the developer to override assert() with an exception handling mechanism as well having the compile time options.


*/

 SomeClass::someFunction ( AnotherClass *fillMeWithData )
   {
      // check any preconditions here
      preCondition ( fillMeWithData );   // non-NULL check

      // do your stuff to add the functionality here
      ...

      // check post conditions
      postCondition ( fillMeWithData->hasData() );  -- did we do what we said

      postCondition ( checkInvariant() );  -- class invariant check required 
                                           -- because of lack of lang support
   }