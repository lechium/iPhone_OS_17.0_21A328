//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMEEvent, NSString;

@protocol HMEEventForwarder
- (void)forwardEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
