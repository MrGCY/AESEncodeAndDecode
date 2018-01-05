//
//  ViewController.m
//  AESEncodeAndDecode_demo
//
//  Created by Gauss on 2018/1/5.
//  Copyright © 2018年 Gauss. All rights reserved.
//

#import "ViewController.h"
#import "AESEncrypt.h"
#import "ConverUtil.h"
@interface ViewController ()

@end

@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    //使用AES执行加密操作  采用AES128规则 + ECB模式 + PKCS7补码方式
    NSString *aesKey = @"asedrftgyhujikos";
    NSString *string3 = @"你好";
    NSData *keyData3 = [aesKey dataUsingEncoding:NSUTF8StringEncoding];
    NSData *sourceData3 = [string3 dataUsingEncoding:NSUTF8StringEncoding];
    //----------------加密过程------------------
    //AES加密
    NSData *encodeData3 = [AESEncrypt encryptECBData:sourceData3 key:keyData3];
    //加密生成的data 使用base64再加密
    NSString * encodeBase64 = [ConverUtil encodeBase64Data:encodeData3];
    NSLog(@"-----------------encodeString : %@", encodeBase64);
    
    //----------------解密过程-----------------
    //base64解密
    NSData * decodeBase64 = [ConverUtil decodeBase64String:encodeBase64];
    NSData * decodeData = [AESEncrypt decryptECBData:decodeBase64 key:keyData3];
    NSString * decodeString = [[NSString alloc] initWithData:decodeData
                                                    encoding:NSUTF8StringEncoding];
    NSLog(@"-----------------decodeString : %@", decodeString);
}


@end
