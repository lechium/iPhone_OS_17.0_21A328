//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol BSServiceMonitor <NSObject>
@property(readonly, copy, nonatomic) NSString *service;
- (void)serialCallOut_didUpdateEndpointEnvironments:(NSDictionary *)arg1;
@end
