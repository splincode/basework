#!/usr/bin/env bash
TEXTCOMMIT="update" # коммит по умолчанию

if [[ "$1" == "-c" && "$2" != "" ]]; then
	TEXTCOMMIT=$2; # описание коммита
fi

git add .
git commit -m "$TEXTCOMMIT"
git push origin master -f