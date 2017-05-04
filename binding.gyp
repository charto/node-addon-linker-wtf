{
	"targets": [{
		"target_name": "bazinga",
		"include_dirs": [
			"node_modules/nan"
		],
		"sources": [ "main.cc" ],
		"xcode_settings": {
			"OTHER_LDFLAGS": [ "-exported_symbols_list", "/dev/null" ]
		}
	}]
}
