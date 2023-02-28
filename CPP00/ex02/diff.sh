#!/bin/bash

cat true.log | cut -d ' ' -f2 > true_log
cat contrefacon.log | cut -d ' ' -f2 > contrefacon_log
diff True_log contrefacon_log > diff