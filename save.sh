#!/bin/bash
rm -rf .vscode
make -j fclean
git add .
git commit -am save
git push
