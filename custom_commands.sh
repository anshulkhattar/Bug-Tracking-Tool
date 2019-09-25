#!/bin/bash

function testerview(){
gcc /home/anshul/Bug-Tracking-Tool/Tester_view.c -o testerView
./testerView
}
function testercreate(){
gcc /home/anshul/Bug-Tracking-Tool/Tester_create.c -o testerCreate
./testerCreate
}

function bgtool(){
    if [ "$1" == "tester" ]
    then 
        if [ "$2" == "view" ]
        then
            testerview
        elif [ "$2" == "create" ]
        then
            testercreate
        fi
    fi

}
