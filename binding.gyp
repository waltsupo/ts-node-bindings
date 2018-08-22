{
    "targets": [{
        "target_name": "tsnodebindings",
        "sources": [
            "bindings/voice.cpp",
            "bindings/main.cpp",
        ],
        'include_dirs': [
             "<!(node -e \"require('nan')\")"
        ],
    }]
}