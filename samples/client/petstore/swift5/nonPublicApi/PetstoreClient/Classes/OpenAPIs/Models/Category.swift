//
// Category.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


internal struct Category: Codable { 


    internal var id: Int64?
    internal var name: String = "default-name"

    internal init(id: Int64?, name: String) {
        self.id = id
        self.name = name
    }

}
