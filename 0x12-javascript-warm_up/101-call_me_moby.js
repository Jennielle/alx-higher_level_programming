0-javascript_is_amazing.js
#!/usr/bin/node
exports.callMeMoby = function (x, theFunction) {
  for (let i = 0; i < x; i++) {
    theFunction();
  }
};
