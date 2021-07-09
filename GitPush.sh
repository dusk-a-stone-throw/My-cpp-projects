rm .*.*.swp
rm .*.*.un~
rm *.o
git add --all;
git commit -m "$1";
git push origin master;
