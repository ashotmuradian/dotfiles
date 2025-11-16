// https://github.com/mfussenegger/nvim-dap/discussions/869#discussioncomment-8121995
// https://github.com/microsoft/vscode/blob/main/src/vs/platform/sign/node/signService.ts

const vsda = require("/opt/visual-studio-code/resources/app/node_modules.asar.unpacked/vsda/build/Release/vsda.node");
const signer = new vsda.signer();
for (let i = 2; i < process.argv.length; i++) {
  console.log(signer.sign(process.argv[i]));
}

