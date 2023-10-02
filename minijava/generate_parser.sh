#!/bin/sh

current_dir=$PWD;

jjtree $current_dir/parser_grammar/parser.jjt;

mv $current_dir/generated/parser.jj $current_dir/parser_grammar/

javacc $current_dir/parser_grammar/parser.jj;