current_dir = $PWD;
cd build;

MACHINE_TYPE=`uname -m`
if [ ${MACHINE_TYPE} == 'x86_64' ]
then
    valgrind src/MiniJavaCompiler;
elif [ ${MACHINE_TYPE} == 'arm64' ]
then
  leaks -atExit -- src/MiniJavaCompiler;
else
    echo "The arhitectures is not x86 or arm64";
fi