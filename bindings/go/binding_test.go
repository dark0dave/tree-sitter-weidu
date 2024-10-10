package tree_sitter_weidu_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_weidu "github.com/dark0dave/tree-sitter-weidu/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_weidu.Language())
	if language == nil {
		t.Errorf("Error loading Weidu grammar")
	}
}
