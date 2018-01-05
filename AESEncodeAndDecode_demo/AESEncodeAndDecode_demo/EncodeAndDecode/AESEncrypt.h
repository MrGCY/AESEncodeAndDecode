//
//  AESEncrypt.h
//  test
//
//  Created by Gauss on 2018/1/5.
//  Copyright © 2018年 Gauss. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AESEncrypt : NSObject
/**
 *  AES128 + ECB + PKCS7
 *  @param data 要加密的原始数据
 *  @param key  加密 key
 *  @return  加密后数据
 */
+ (NSData *)encryptECBData:(NSData *)data key:(NSData *)key;
/**
 *  AES128 + ECB + PKCS7
 *  @param data 要解密的原始数据
 *  @param key  解密 key
 *  @return  解密后数据
 */
+ (NSData *)decryptECBData:(NSData *)data key:(NSData *)key;
/*
 DES加密
 */
+(NSString *) encryptUseDES:(NSString *)clearText key:(NSString *)key;
/**
 DES解密
 */
+(NSString *) decryptUseDES:(NSString *)plainText key:(NSString *)key;
@end
