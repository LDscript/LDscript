java -cp ./vendor/bin/antlr-4.11.1-complete.jar org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o src/generated/ -Xexact-output-dir -package antlrcpplds src/antlr/LdScript.g4