#/bin/bash
log=~/logs/eclipseRun.log
/home/rohit/customPackages/eclipse/eclipse/eclipse > $log 2>&1 &
processId=$!

echo "##############       Waiting 20 secs     #########################"
echo "Eclipse running in background processid : $processId , log is $log"
echo "##############       Waiting 20 secs     #########################"
sleep 20
echo "####eclipse Eclipse processId##########"  >>  $log
echo "eclipse Eclipse processId is $processId"  >>  $log
echo "####eclipse Eclipse processId##########"  >>  $log
exit 0
