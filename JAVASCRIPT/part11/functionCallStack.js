function d() {
  console.log("d called");
  console.log("inside d");
  console.log("d terminate");
}

function c() {
  console.log("c called");
  console.log("inside c");
  d();
  console.log("c terminate");
}

function b() {
  console.log("b called");
  console.log("inside b");
  c();
  console.log("b terminate");
}
function a() {
  console.log("a called");
  console.log("inside a");
  b();
  console.log("a terminate");
}

a();
