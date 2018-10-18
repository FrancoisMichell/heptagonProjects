#!/bin/bash
for i in `seq 30`; do 
	cd /home/ti/codigos/projeto && 
	make clean && 
	/usr/bin/time -v -o ./no_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto1 && 
	make clean && 
	/usr/bin/time -v -o ./one_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto2 && 
	make clean && 
	/usr/bin/time -v -o ./two_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto3 && 
	make clean && 
	/usr/bin/time -v -o ./three_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto4 && 
	make clean && 
	/usr/bin/time -v -o ./four_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto5 && 
	make clean && 
	/usr/bin/time -v -o ./five_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto6 && 
	make clean && 
	/usr/bin/time -v -o ./six_errors.txt -a make ; 
done

for i in `seq 30`; do 
	cd /home/ti/codigos/projeto7 && 
	make clean && 
	/usr/bin/time -v -o ./seven_errors.txt -a make ; 
done