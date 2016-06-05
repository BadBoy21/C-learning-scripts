for i in $(seq 10000 $END); do base64 /dev/urandom | head -c 1000 > testosd/file$i.txt; done
