//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol SHNetworkPaginatedRequester <NSObject>
- (void)invalidate;
- (void)performRequests:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end

