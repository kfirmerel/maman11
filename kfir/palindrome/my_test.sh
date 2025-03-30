make
for ((i=1; i<=10; i++)); do
    ./palindrome < "test$i"
done
