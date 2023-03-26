#!/bin/sh
mwc.pl -type make -features linux=1 -relative SLN_ROOT=$(cd $(dirname $0) && pwd) -value_template "configurations = 'Debug'"