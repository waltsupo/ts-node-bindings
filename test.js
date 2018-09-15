const tsnodebindings = require('./build/Release/tsnodebindings');

console.log('Starting!');
console.log('InitClientLib:');
console.log(tsnodebindings.initClientLib());
console.log('SpawnNewServerConnectionHandler:');
const conHandler = tsnodebindings.spawnNewServerConnectionHandler();
console.log(conHandler);
console.log('CreateIdentity:');
const identity = tsnodebindings.createIdentity();
console.log(identity);
console.log('connecting to server..');
console.log(tsnodebindings.startConnectionWithChannelID(conHandler, identity));
console.log('Done!');

async function wait() {
  while (true) await sleep(1000);
}
function sleep(ms) {
  return new Promise(resolve => {
    setTimeout(resolve, ms);
  });
}
wait();
