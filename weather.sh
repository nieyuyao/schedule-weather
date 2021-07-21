#!/bin/sh

git config --local user.email "bot@github.com"
git config --local user.name "bot"
git pull --rebase
curl -s "wttr.in/{Beijing,Tianjin,Shijiazhuang,Tangshan}?format=%l:+%c+%t+%m+%w+%h\n" > ./README.md
cat ./README.md
make
./main
make clean
git add .
git commit -m 'push by git action'
git push -f

