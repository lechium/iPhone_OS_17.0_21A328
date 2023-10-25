//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL;

@protocol KeyedDataSource
- (NSURL *)assetURLForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictForKey:(NSString *)arg1;
- (NSNumber *)numberForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (NSString *)sourceRecordChangeTag;
- (NSString *)sourceRecordName;
- (NSString *)sourceRecordType;
@end
