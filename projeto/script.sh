#!/bin/bash
for i in `seq 30`; do 
	cd /home/ti/codigos/projeto && 
	. /home/ti/Sigali-2.4/sigaliEnv && 
	make clean && 
	/usr/bin/time -v -o ./seven_errors.txt -a make ; 
done
