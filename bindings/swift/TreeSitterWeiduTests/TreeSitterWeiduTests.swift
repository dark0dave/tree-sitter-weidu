import XCTest
import SwiftTreeSitter
import TreeSitterWeidu

final class TreeSitterWeiduTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_weidu())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Weidu grammar")
    }
}
