{
    "targets": [{
        "target_name": "tsnodebindings",
        "sources": [
            "bindings/voice.cpp",
            "bindings/client.cpp",
            "bindings/main.cpp"
        ],
        'include_dirs': [
            "ts_sdk/include",
            "<!(node -e \"require('nan')\")"
        ],
        'libraries': [
            "<(module_root_dir)/ts_sdk/windows/win64/ts3client.lib"
        ]
    }]
}