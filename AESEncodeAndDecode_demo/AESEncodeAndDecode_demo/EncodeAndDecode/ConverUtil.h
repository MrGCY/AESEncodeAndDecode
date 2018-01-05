//
//  ConverUtil.h
//  test
//
//  Created by Gauss on 2018/1/5.
//  Copyright © 2018年 Gauss. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ConverUtil : NSObject
#pragma mark- base64加密解密
+ (NSData *)encodeBase64String:(NSString * )input;
+ (NSData *)decodeBase64String:(NSString * )input;

+ (NSString*)encodeBase64Data:(NSData *)data;
+ (NSString*)decodeBase64Data:(NSData *)data ;

+ (NSString *)base64EncodedStringFrom:(NSData *)data;
/**
 64编码
 */
+(NSString *)base64Encoding:(NSData*) text;

#pragma mark- 字节转化为16进制数
/**
 字节转化为16进制数
 */
+(NSString *) parseByte2HexString:(Byte *) bytes;
/**
 字节数组转化16进制数
 */
+(NSString *) parseByteArray2HexString:(Byte[]) bytes;
/*
 将16进制数据转化成NSData 数组
 */
+(NSData*) parseHexToByteArray:(NSString*) hexString;
//十六进制转换为NSData
+ (NSData*)convertHexStrToData:(NSString*)str;
//NSData转换为16进制
+ (NSString*)convertDataToHexStr:(NSData*)data;
@end
