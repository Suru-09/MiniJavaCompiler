#!/bin/sh

current_dir=$PWD;

javacc $current_dir/parser_grammar/parser.jj;