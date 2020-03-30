#!/bin/bash
<<<<<<< HEAD
sed -n '8p' $1 > $2
sed -n '32p' $1 >> $2
sed -n '128p' $1 >> $2
sed -n '512p' $1 >> $2
sed -n '1024p' $1 >> $2
=======
sed -n '8p;32p;128p;512p;1024p' $1 > $2
>>>>>>> 68b37f0628b63ea0ce201e281b187dc1d316e962
