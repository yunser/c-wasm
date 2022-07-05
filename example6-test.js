var em_module = require('./out/example6.js');

em_module.onRuntimeInitialized = () => {
    console.log('add', em_module._add(2, 3))
    em_module._sayHi();
}