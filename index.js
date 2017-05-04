require('./build/Release/bazinga.node');

var parser = new (require('node-expat').Parser)('UTF-8');

var OK = false;

parser.on('endElement', function() { OK = true; });

parser.write('<a></a>');

if(!OK) throw(new Error('WTF'));
