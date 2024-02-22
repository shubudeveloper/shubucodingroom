git status

git add .

echo 'Enter commit message'
read commitMessage

git commit -m "$commitMessage"

echo 'Enter name of branch'
read branch

git push origin $branch