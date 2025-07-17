import XCTest
import SwiftTreeSitter
import TreeSitterXCompose

final class TreeSitterXComposeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_xcompose())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading XCompose grammar")
    }
}
