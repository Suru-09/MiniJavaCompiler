#!/bin/sh

current_dir=$PWD

echo "Generating parser..."
if jjtree $current_dir/parser_grammar/parser.jjt && \
   mv $current_dir/generated/parser.jj $current_dir/parser_grammar/ && \
   javacc $current_dir/parser_grammar/parser.jj
then
  echo "Parser generated successfully."
else
  echo "Error: Failed to generate parser."
  exit 1
fi
