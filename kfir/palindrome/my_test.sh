make
for ((i=1; i<=5; i++)); do
    ./palindrome < "test$i" > "temp$i.out"
done
for ((i=1; i<=5; i++)); do
    diff "temp$i.out" "temp$i.exp"  
    if [ $? -ne 0 ]; then
        echo "Test $i failed"
    else
        echo "Test $i passed"
    fi
done