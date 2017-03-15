//
//  NSString+CYPHash.h
//  ButtonTest
//
//  Created by songhh on 2017/3/7.
//  Copyright © 2017年 cheyipai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (CYPHash)

@property (readonly) NSString *md5String;
@property (readonly) NSString *sha1String;
@property (readonly) NSString *sha256String;
@property (readonly) NSString *sha512String;

- (NSString *)hmacSHA1StringWithKey:(NSString *)key;
- (NSString *)hmacSHA256StringWithKey:(NSString *)key;
- (NSString *)hmacSHA512StringWithKey:(NSString *)key;


@end
