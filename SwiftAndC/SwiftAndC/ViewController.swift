//
//  ViewController.swift
//  SwiftAndC
//
//  Created by 张坤 on 2019/9/27.
//  Copyright © 2019 张坤. All rights reserved.
//

import UIKit

// MARK: - 被C要调用的函数
func C_UserSwiftFun(a:Int32) -> Void {
    print("收到一个c函数的Int值->\(a)");
}
class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        view.backgroundColor = .cyan
        swiftUseC()
        swiftUseCP()
        testCRunSwift()
    }
    private func swiftUseC(){
        print("--------------------\n")
        print("Swift使用C")
        printHellow()
        let t = getRandomInt()
        print(t)
        print("--------------------\n")
    }
    private func swiftUseCP(){
        print("--------------------\n")
        print("Swift使用C++")
        let person = createBy("peter", 2);
        printDogInfo(person);
        let cName = getDogName(person);
        let name = String(cString: cName!);
        print("fetch name is：\(name)");
        
        destoryModel(person);
        print("--------------------\n")
    }

    func testCRunSwift(){
        print("--------------------\n")
        print("C调用Swift测试")
        swiftFuncIMP = C_UserSwiftFun(a:)
        
        runSwiftFun();
        print("--------------------\n")
        
        
    }
}

