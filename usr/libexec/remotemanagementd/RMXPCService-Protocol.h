//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, NSURL;

@protocol RMXPCService
- (void)sendStatusForSubscriptionsWithIdentifiers:(NSArray *)arg1 toManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)queryForStatusSubscriptionsWithIdentifiers:(NSArray *)arg1 fromManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)queryForStatusAndErrorsWithKeyPaths:(NSArray *)arg1 fromManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg3;
- (void)sendStatusForKeyPaths:(NSArray *)arg1 toManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)sendStatusData:(NSData *)arg1 toManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)managementChannelWithEnrollmentURL:(NSString *)arg1 completionHandler:(void (^)(RMManagementChannel *, NSError *))arg2;
- (void)managementChannelWithAccountIdentifier:(NSString *)arg1 completionHandler:(void (^)(RMManagementChannel *, NSError *))arg2;
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)updateWithIdentifier:(NSString *)arg1 tokensResponse:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateWithIdentifier:(NSString *)arg1 pushMessage:(NSData *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)syncWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)unenrollWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enrollViaMDMWithEnrollmentType:(long long)arg1 uri:(NSURL *)arg2 accountIdentifier:(NSString *)arg3 personaIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSString *, NSError *))arg5;
- (void)enrollUserChannelWithAccountIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)enrollDeviceChannelWithURI:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
@end
