#!/bin/sh

pandoc notes.md -o notes.pdf --number-sections --shift-heading-level-by=-1
