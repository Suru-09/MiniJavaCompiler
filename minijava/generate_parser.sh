##!/bin/sh
#
#current_dir=$PWD
#
#echo "Generating parser..."
#if jjtree $current_dir/parser_grammar/parser.jjt && \
#   mv $current_dir/generated/parser.jj $current_dir/parser_grammar/ && \
#   javacc $current_dir/parser_grammar/parser.jj
#then
#  echo "Parser generated successfully."
#else
#  echo "Error: Failed to generate parser."
#  exit 1
#fi
#
#echo "Copying custom JJTree nodes to generated folder..."
#if cp $current_dir/src/jjtreeCustomNodes/*.cc $current_dir/generated/ && \
#   cp $current_dir/include/jjtreeCustomNodes/*.h $current_dir/generated/
#then
#  echo "Custom JJTree nodes copied successfully."
#  exit 0
#else
#  echo "Error: Failed to copy custom JJTree nodes."
#  exit 1
#fi
