rm .*.*.swp
rm .*.*.un~
rm *.o
git add --all;
git commit -m "$2";
git push origin "$1";
