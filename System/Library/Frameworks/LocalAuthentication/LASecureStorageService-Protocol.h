//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthentication/NSObject-Protocol.h>

@class NSData, NSUUID;

@protocol LASecureStorageService <NSObject>
- (void)aclForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)removeObjectForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)objectForKey:(long long)arg1 contextUUID:(NSUUID *)arg2 completionHandler:(void (^)(id, NSError *))arg3;
- (void)setObject:(NSData *)arg1 acl:(NSData *)arg2 forKey:(long long)arg3 contextUUID:(NSUUID *)arg4 completionHandler:(void (^)(id, NSError *))arg5;
@end

