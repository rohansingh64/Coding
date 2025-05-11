//

//

// Garbage Collector  --->

// In JavaScript, the Garbage Collector (GC) is an automatic memory management
// feature that frees up memory that's no longer needed, so
// developers don't have to manually allocate and deallocate memory.

// we not have any control on GC and it runs in background always

// example  -->

function createUser() {
  let user = {
    name: "Alice",
    age: 30,
  };

  console.log(user); // user object is reachable here

  // Now let's remove the reference to the object
  user = null;

  // The original object { name: "Alice", age: 30 } is now unreachable

  // JavaScript's garbage collector will eventually free the memory
}

createUser();
