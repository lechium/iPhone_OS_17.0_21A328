//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSURL, PFFairPlayAsset;

@protocol PFFairPlayInvalidationManaging
- (void)removalAllFairPlayKeysWithCompletion:(void (^)(NSError *))arg1;
- (NSError *)removeKeyFor:(PFFairPlayAsset *)arg1;
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)markKeyForInvalidationAt:(NSURL *)arg1 shouldRemove:(_Bool)arg2;
- (void)invalidateFairPlayKeyFor:(long long)arg1 completion:(void (^)(NSError *))arg2;
@end
