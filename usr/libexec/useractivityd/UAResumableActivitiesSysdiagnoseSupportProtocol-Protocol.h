//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol UAResumableActivitiesSysdiagnoseSupportProtocol <NSObject>
- (void)doCopyRecentActions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doNOP:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
@end

