var Module = {
    //dynamicLibraries: ['side.wasm', 'side2.wasm']
    dynamicLibraries: ['side.wasm']
};

function helper() {
    console.log('helper');
    loadDynamicLibrary("side.wasm", {global: true, nodelete: true});
}

Module.mmh = helper;