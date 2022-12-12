#!/bin/bash
cat ~/bash.txt | grep "00000" > /tmp/zeros
cat ~/bash.txt | grep -v  "00000" > /tmp/nozeros
head /tmp/zeros
tail /tmp/zeros
head /tmp/nozeros
tail /tmp/nozeros


