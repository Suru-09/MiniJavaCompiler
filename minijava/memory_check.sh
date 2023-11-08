current_dir = $PWD;
cd build;

export CC=/usr/bin/clang;
export CXX=/usr/bin/clang++;

MACHINE_TYPE=`uname -m`
if [ ${MACHINE_TYPE} == 'x86_64' ]
then
  export CC=/usr/bin/clang;
  export CXX=/usr/bin/clang++;
  valgrind src/MiniJavaCompiler;
elif [ ${MACHINE_TYPE} == 'arm64' ]
then
  leaks -atExit -- src/MiniJavaCompiler;
else
    echo "The arhitectures is not x86 or arm64";
fi