//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, VSSubscription, VSUserAccount;

@protocol VSUserAccountServiceProtocol <NSObject>
- (void)removeSubscriptions:(NSArray *)arg1;
- (void)registerSubscription:(VSSubscription *)arg1;
- (void)fetchActiveSubscriptionsWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)forceRefreshUserAccount:(VSUserAccount *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)forceUpdateUserAccountsWithCompletion:(void (^)(void))arg1;
- (void)deleteUserAccount:(VSUserAccount *)arg1 completion:(void (^)(NSError *))arg2;
- (void)queryUserAccountsWithOptions:(long long)arg1 sourceIdentifier:(NSString *)arg2 sourceType:(NSNumber *)arg3 deviceIdentifier:(NSString *)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)queryUserAccountsWithOptions:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)updateUserAccount:(VSUserAccount *)arg1 completion:(void (^)(NSError *))arg2;
@end
