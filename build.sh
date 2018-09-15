echo "Running: node-gyp rebuild.."
node-gyp rebuild
echo "Done: node-gyp rebuild"

echo "Adding dll-files.."
cp ts_sdk/windows/win64/ts3client.dll build/Release/ts3client.dll
echo "Dll-files copied to build/Release/"

read -p "Press enter to continue"