#!/bin/sh

curl -s 'wttr.in/{Beijing,Tianjin,Shijiazhuang,Tangshan}?format=%l:+%c+%t+%m+%w+%h\n' > ./README.md
git add .
git commit -m 'git action push'

