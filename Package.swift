// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterWeidu",
    products: [
        .library(name: "TreeSitterWeidu", targets: ["TreeSitterWeidu"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterWeidu",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterWeiduTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterWeidu",
            ],
            path: "bindings/swift/TreeSitterWeiduTests"
        )
    ],
    cLanguageStandard: .c11
)
