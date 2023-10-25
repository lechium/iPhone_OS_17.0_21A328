//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol LNAutoShortcutsProviderInterface <NSObject>
- (NSDictionary *)propertiesForIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSDictionary *)autoShortcutsForLocaleIdentifier:(NSString *)arg1 error:(id *)arg2;
- (void)autoShortcutsForLocaleIdentifier:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)autoShortcutsForBundleIdentifier:(NSString *)arg1 localeIdentifier:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
@end
