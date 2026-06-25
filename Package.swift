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
//            path: "ByteBuffer",
            exclude: [
                "Modules",
                "Resources"
            ],
            // sources: [
            //     "Sources"
            // ],
            publicHeadersPath: "include",
            // cSettings: [
            //     // Lets the target's own .m files resolve their quote-style
            //     // imports now that the headers live in Headers/ByteBuffer/.
            //     .headerSearchPath("Headers/ByteBuffer")
            // ]
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
