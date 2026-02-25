MD_FILES := $(shell find . -name "*.md")
TEX_FILES := $(shell find . -name "*.tex")

PDF_FILES_MD := $(MD_FILES:.md=.pdf)
PDF_FILES_TEX := $(TEX_FILES:.tex=.pdf)


all: $(PDF_FILES_MD) $(PDF_FILES_TEX)

%.pdf: %.md
	pandoc "$<" \
		-o "$@" \
		--resource-path="$(dir $<)" \
		--number-sections \
		--shift-heading-level-by=-1

%.pdf: %.tex
	pdflatex \
		-interaction=nonstopmode \
		-halt-on-error \
		-output-directory="$(dir $<)" \
		"$<"

clean:
	rm $(PDF_FILES_MD) $(PDF_FILES_TEX)

test:
	echo $(MD_FILES)
	echo $(TEX_FILES)
	echo $(PDF_FILES_MD)
	echo $(PDF_FILES_TEX)
