//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDate, NSString;

@protocol GDEventLogServiceXPCProtocol
- (void)logInstantWithId:(long long)arg1 timestamp:(NSDate *)arg2 name:(NSString *)arg3 parent:(long long)arg4 dependencies:(NSArray *)arg5 payloadType:(NSString *)arg6 payloadVariant:(NSString *)arg7 payload:(NSData *)arg8 completion:(void (^)(_Bool, NSError *))arg9;
- (void)logEndWithId:(long long)arg1 timestamp:(NSDate *)arg2 dependencies:(NSArray *)arg3 payloadType:(NSString *)arg4 payloadVariant:(NSString *)arg5 payload:(NSData *)arg6 completion:(void (^)(_Bool, NSError *))arg7;
- (void)logStartWithId:(long long)arg1 timestamp:(NSDate *)arg2 name:(NSString *)arg3 parent:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end
