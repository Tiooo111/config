##########################################################################
# File Name: prepare.sh
# Author: Tiooo111
# mail: tiooo111@163.com
# Created Time: 2020年08月18日 星期二 12时18分27秒
#########################################################################
#!/bin/zsh
PATH=/home/edison/bin:/home/edison/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/work/tools/gcc-3.4.5-glibc-2.3.6/bin
export PATH

MDAR_Algo="${HOME}/code/MDAR_Algo/";
MDAR_Algo_headFile="${MDAR_Algo}/1.Special/headFile.cpp";

script_path=$(cd "$(dirname "$0")" && pwd);

init(){
    echo "Please run init.sh";
	exit 2;
}

if [ ! -d "$MDAR_Algo" -o ! -f "/bin/prepare.sh" ];then
	init;
fi

if [ ${#} -lt 1 ];then
	echo "Please pass in the path parameter";
	exit 3;
fi

read -p "You are sure you wang to prepare?[y/n]" input;

if [ $input = "y" ];then
	cat ${MDAR_Algo_headFile} > ${1};
fi

