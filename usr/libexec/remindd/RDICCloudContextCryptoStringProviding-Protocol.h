//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol RDICCloudContextCryptoStringProviding <NSObject>
+ (NSString *)base64EncodedHMACStringFromString:(NSString *)arg1 usingSalt:(NSData *)arg2;
+ (_Bool)conformsToRDICCloudContextCryptoStringProviding;
@end

