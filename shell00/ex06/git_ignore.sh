#!/bin/bash

git status -s --ignored | grep "^!" | cut -c 4-
