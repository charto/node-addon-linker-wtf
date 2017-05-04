require('./build/Release/bazinga.node');

var parser = new (require('node-expat').Parser)('UTF-8');

parser.write('<a></a>');
