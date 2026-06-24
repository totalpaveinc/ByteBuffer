// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "ByteBuffer",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "ByteBuffer",
            targets: ["ByteBuffer"]
        )
    ],
    targets: [
        .target(
            name: "ByteBuffer",
            path: "ByteBuffer",
            exclude: [
                "Modules",
                "Resources"
            ],
            sources: [
                "Sources"
            ],
            publicHeadersPath: "Headers"
        ),
        .testTarget(
            name: "ByteBufferTests",
            dependencies: ["ByteBuffer"],
            path: "ByteBufferTests",
            exclude: [
                "Info.plist"
            ]
        )
    ]
)
