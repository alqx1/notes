MD_FILES := $(shell find . -name "*.md")
PDF_FILES := $(MD_FILES:.md=.pdf)

all: $(PDF_FILES)

%.pdf: %.md
	pandoc "$<" \
		-o "$@" \
		--resource-path="$(dir $<)" \
		--number-sections \
		--shift-heading-level-by=-1

clean:
	rm $(PDF_FILES)

test:
	echo $(MD_FILES)
	echo $(PDF_FILES)
