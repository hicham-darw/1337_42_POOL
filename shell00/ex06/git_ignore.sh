touch .gitignore

echo ".DS_store" > .gitignore
echo "my_work.c-" > .gitignore

git rm --cached .
git add . 
git commit -m "cached files .gitignore"
git push

