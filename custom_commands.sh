#!/bin/bash

function tester(){
gcc /home/anshul/Bug-Tracking-Tool/Tester.c -o tester
./tester $1
}

function bgt(){
    if [ "$1" == "tester" ]
    then 
        if [ "$2" == "view" ]
        then
            tester view
        elif [ "$2" == "create" ]
        then
            tester create
        fi
    fi

}
