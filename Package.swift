// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "HUMAN",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "HUMAN",
            targets: ["HUMAN"]
        )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "HUMAN",
            path: "HUMAN.xcframework"
        )
    ]
)
