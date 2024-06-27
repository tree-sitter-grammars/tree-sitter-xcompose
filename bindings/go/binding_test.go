package tree_sitter_xcompose_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter-grammars/tree-sitter-xcompose"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_xcompose.Language())
	if language == nil {
		t.Errorf("Error loading Xcompose grammar")
	}
}
